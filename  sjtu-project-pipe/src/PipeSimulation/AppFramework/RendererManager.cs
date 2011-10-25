using System;

namespace PipeSimulation.PipeApp
{
    /// <summary>
    /// IRendererManager acts a manager to provide the access point of all renderers
    /// </summary>
    public interface IRendererManager
    {
        vtk.vtkRenderer BackgroundRenderer { get; }
        vtk.vtkRenderer MainRenderer { get; }
        vtk.vtkRenderer TopViewRenderer { get; }
        vtk.vtkRenderer FrontViewRenderer { get; }
        vtk.vtkRenderer RightViewRenderer { get; }

        vtk.vtkRenderer ActiveRenderer { get; set; }
        IRendererLayoutStrategy RendererLayoutStrategy { get; set; }
    }

    /// <summary>
    /// Implementation to the IRendererManager
    /// </summary>
    public class CRendererManager : IRendererManager
    {
        private vtk.vtkRenderer m_BackgroundRenderer = new vtk.vtkRenderer();
        private vtk.vtkRenderer m_MainRenderer = new vtk.vtkRenderer();
        private vtk.vtkRenderer m_TopViewRenderer = new vtk.vtkRenderer();
        private vtk.vtkRenderer m_FrontViewRenderer = new vtk.vtkRenderer();
        private vtk.vtkRenderer m_RightViewRenderer = new vtk.vtkRenderer();
        private vtk.vtkRenderer m_activeRender = null;
        private IRendererLayoutStrategy m_RendererLayoutStrategy = null;

        public CRendererManager()
        {
        }

        #region IRendererManager members

        public vtk.vtkRenderer BackgroundRenderer
        {
            get { return m_BackgroundRenderer; }
        }
        
        public vtk.vtkRenderer MainRenderer
        {
            get { return m_MainRenderer; }
        }

        public vtk.vtkRenderer TopViewRenderer
        {
            get { return m_TopViewRenderer; }
        }

        public vtk.vtkRenderer FrontViewRenderer
        {
            get { return m_FrontViewRenderer; }
        }

        public vtk.vtkRenderer RightViewRenderer
        {
            get { return m_RightViewRenderer; }
        }

        public vtk.vtkRenderer ActiveRenderer 
        {
            get
            {
                return m_activeRender;
            }
            set
            {
                if (value == null) return;

                if (m_activeRender == value) return;

                vtk.vtkRenderer previousRenderer = m_activeRender;
                m_activeRender = value;

                // Fire the active render changed event
                if (ActiveRenderChanged != null)
                {
                    ActiveRenderChanged(previousRenderer, m_activeRender);
                }
            }
        }

        public IRendererLayoutStrategy RendererLayoutStrategy
        {
            get { return m_RendererLayoutStrategy; }
            set 
            {
                m_RendererLayoutStrategy = value;
                m_RendererLayoutStrategy.ApplyLayout();

                // Fire the event
                if (RenderLayoutChanged != null)
                {
                    RenderLayoutChanged();
                }
            }
        }

        #endregion

        // Define a delegate
        public delegate void ActiveRenderChangedHandler(vtk.vtkRenderer previousRender, vtk.vtkRenderer newRenderer);
        public event ActiveRenderChangedHandler ActiveRenderChanged;

        // Define a deleagate
        public delegate void RenderLayoutChangedHandler();
        public event RenderLayoutChangedHandler RenderLayoutChanged;
    }
}