using System;

namespace PipeSimulation.SceneGraph
{
    public sealed class CPipeConnectionIndicator
    {
        const int LINEWIDTH = 2;
        private vtk.vtkLineSource m_lineSource = null;
        private vtk.vtkActor m_actor = null;

        public CPipeConnectionIndicator(vtk.vtkRenderer renderer)
        {
            if (renderer == null) return;

            // Construct a line
            m_lineSource = new vtk.vtkLineSource();

            vtk.vtkPolyDataMapper dataMapper = new vtk.vtkPolyDataMapper();
            dataMapper.SetInputConnection(m_lineSource.GetOutputPort());

            m_actor = new vtk.vtkActor();
            m_actor.SetMapper(dataMapper);
            m_actor.GetProperty().SetLineWidth(LINEWIDTH);
            m_actor.GetProperty().SetColor(1, 1, 0); // Yellow

            renderer.AddActor(m_actor);
        }

        public void Update()
        {
            if (m_lineSource == null) return;
            m_lineSource.Update();
        }

        public bool Visible
        {
            get
            {
                if (null == m_actor) return false;
                return (m_actor.GetVisibility() != 0);
            }
            set
            {
                if (null == m_actor) return;
                m_actor.SetVisibility(value ? 1 : 0);
            }
        }

        public double[] StartConnectionPoint
        {
            set
            {
                if (m_lineSource == null) return;
                m_lineSource.SetPoint1(value);
            }
        }

        public double[] EndConnectionPoint
        {
            set
            {
                if (m_lineSource == null) return;
                m_lineSource.SetPoint2(value);
            }
        }
    }
}