using System;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using System.Drawing;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// Interface to display statistic text
    /// </summary>
    public interface IStatisticTextDisplayer
    {
        void DisplayStatisticText();

        CStatisticData StatisticData { get; }
    }

    /// <summary>
    /// Scene displayer implementation
    /// </summary>
    public class CStatisticTextSceneDisplayer : IStatisticTextDisplayer
    {
        private vtk.vtkTextActor m_textActor = null;
        private CStatisticData m_statisticData = new CStatisticData();
        private static readonly int sMinX = 10;
        private static readonly int sMinY = 10;

        public CStatisticTextSceneDisplayer()
        {
        }

        public void Setup()
        {
            if (null == m_textActor)
            {
                m_textActor = new vtk.vtkTextActor();
                m_textActor.GetTextProperty().SetFontSize(18);
                m_textActor.GetTextProperty().SetJustificationToLeft();
                m_textActor.GetTextProperty().SetVerticalJustificationToTop();
                m_textActor.GetTextProperty().SetColor(1.0, 0.0, 0.0);

                IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().AddActor2D(m_textActor);

                //m_textActor.AddObserver((uint)vtk.EventIds.RenderEvent, new vtk.vtkDotNetCallback(this.OnTextActorRender));
            }
        }

        #region IStatisticTextDisplayer Members

        public void DisplayStatisticText()
        {
            // Update text
            string str = m_statisticData.ToString();
            m_textActor.SetInput(str);
        }

        public CStatisticData StatisticData
        {
            get { return m_statisticData; }
        }

        #endregion

        public void OnControlSizeChanged(object sender, EventArgs e)
        {
            Control control = sender as Control;
            if (control == null) return;

            Size sizeControl = control.Size;
            if (sizeControl.Width <= CStatisticTextSceneDisplayer.sMinX
            || sizeControl.Height <= CStatisticTextSceneDisplayer.sMinY)
            {
                m_textActor.VisibilityOff();
            }
            else
            {
                m_textActor.VisibilityOn();

                // Update display positon
                m_textActor.SetDisplayPosition(CStatisticTextSceneDisplayer.sMinX, (sizeControl.Height - CStatisticTextSceneDisplayer.sMinY));
            }
        }
    }
}