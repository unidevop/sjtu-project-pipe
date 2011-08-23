using System;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using System.Drawing;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// Interface to display text
    /// </summary>
    public interface ITextDisplayer
    {
        void DisplayText(string str);
        vtk.vtkTextActor TextActor { get; }
    }

    /// <summary>
    /// Scene displayer implementation
    /// </summary>
    public class CTextSceneDisplayer : ITextDisplayer
    {
        private vtk.vtkTextActor m_textActor = null;
        public static readonly int sMinX = 10;
        public static readonly int sMinY = 10;

        public CTextSceneDisplayer()
        {
        }

        public void Setup()
        {
            if (null == m_textActor)
            {
                m_textActor = new vtk.vtkTextActor();
                m_textActor.GetTextProperty().SetFontSize(18);
                m_textActor.GetTextProperty().SetJustificationToRight();
                m_textActor.GetTextProperty().SetVerticalJustificationToTop();
                m_textActor.GetTextProperty().SetColor(1.0, 0.0, 0.0);

                IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().AddActor2D(m_textActor);

                //m_textActor.AddObserver((uint)vtk.EventIds.RenderEvent, new vtk.vtkDotNetCallback(this.OnTextActorRender));
            }
        }

        #region IStatisticTextDisplayer Members

        public void DisplayText(string str)
        {
            // Update text
            m_textActor.SetInput(str);
        }

        public vtk.vtkTextActor TextActor 
        {
            get { return m_textActor; }
        }
        #endregion
    }
}