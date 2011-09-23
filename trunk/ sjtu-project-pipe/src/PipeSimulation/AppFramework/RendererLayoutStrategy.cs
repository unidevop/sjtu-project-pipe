using System;
using System.Windows.Forms;
using System.Drawing;

namespace PipeSimulation.PipeApp
{
    /// <summary>
    /// This interface is used to do the renderer layout
    /// </summary>
    public interface IRendererLayoutStrategy
    {
        void ApplyLayout();
    }

    /// <summary>
    /// The strategy will make the current renderer maximize
    /// </summary>
    public class CMaximizeActiverRendererLayoutStrategy : IRendererLayoutStrategy
    {
        private IRendererManager m_renderManager;

        public CMaximizeActiverRendererLayoutStrategy(IRendererManager renderManager)
        {
            m_renderManager = renderManager;
        }

        #region IRendererLayoutStrategy members

        public void ApplyLayout()
        {
            // We will divide the 4 renderers to 2 rows
            // One main renderer is in the first row
            // And the other 3 renderer are in the second row and divide into 3 column withe the same height

            m_renderManager.ActiveRenderer.SetViewport(0, 0, 1, 1);
            if (m_renderManager.MainRenderer != m_renderManager.ActiveRenderer)
            {
                m_renderManager.MainRenderer.SetViewport(0, 0, 0, 0);
                m_renderManager.MainRenderer.Clear();
            }
            if (m_renderManager.TopViewRenderer != m_renderManager.ActiveRenderer)
            {
                m_renderManager.TopViewRenderer.SetViewport(0, 0, 0, 0);
                m_renderManager.TopViewRenderer.Clear();
            }
            if (m_renderManager.FrontViewRenderer != m_renderManager.ActiveRenderer)
            {
                m_renderManager.FrontViewRenderer.SetViewport(0, 0, 0, 0);
                m_renderManager.RightViewRenderer.Clear();
            }
            if (m_renderManager.RightViewRenderer != m_renderManager.ActiveRenderer)
            {
                m_renderManager.RightViewRenderer.SetViewport(0, 0, 0, 0);
                m_renderManager.RightViewRenderer.Clear();
            }
            //const double dHeightSeperator = 2;
            //const double dWidthSeperator = 2;

            //// Cacluate the width and height for view renderers
            //double dViewRendererHeight = (iHeight - 2 * dHeightSeperator) / 3;
            //double dViewRendererWidth = dViewRendererHeight * 16 / 9;

            //if (dViewRendererWidth >= iWidth)
            //{
            //    dViewRendererWidth = iWidth * 1.0 / 4;
            //}

            //double dMainRenderWidthRatio = 1.0 * (iWidth - dViewRendererWidth - dWidthSeperator) / iWidth;
            //double dViewRenderWidthRatio = 1.0 * (iWidth - dViewRendererWidth) / iWidth;
            //double dViewRenderHeightRatio1 = (dViewRendererHeight)/ iHeight;
            //double dViewRenderHeightRatio2 = (dViewRendererHeight + dHeightSeperator) / iHeight;
            //double dViewRenderHeightRatio3 = (dViewRendererHeight* 2 + dHeightSeperator) / iHeight;
            //double dViewRenderHeightRatio4 = (dViewRendererHeight + dHeightSeperator)* 2 / iHeight;

            //m_renderManager.MainRenderer.SetViewport(0, 0, dMainRenderWidthRatio, 1);
            //m_renderManager.RightViewRenderer.SetViewport(dViewRenderWidthRatio, 0, 1, dViewRenderHeightRatio1);
            //m_renderManager.FrontViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio2, 1, dViewRenderHeightRatio3);
            //m_renderManager.TopViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio4, 1, 1);

            //m_renderManager.MainRenderer.SetViewport(0, 0, 0.75, 1);
            //m_renderManager.TopViewRenderer.SetViewport(0.75, 0, 0.8, 1.0 / 3);
            //m_renderManager.RightViewRenderer.SetViewport(0.75, 1.0 / 3, 1, 2.0 / 3);
            //m_renderManager.FrontViewRenderer.SetViewport(0.75, 2.0 / 3, 1, 1.0);
        }

        #endregion
    }

    /// <summary>
    /// CRenderersLayoutStrategy is used implement a  renderers layout strategy
    /// </summary>
    public class CRenderersLayoutStrategy : IRendererLayoutStrategy
    {
        private IRendererManager m_renderManager;

        public CRenderersLayoutStrategy(IRendererManager renderManager)
        {
            m_renderManager = renderManager;
        }

        #region IRendererLayoutStrategy members

        public void ApplyLayout()
        {
            // We will divide the 4 renderers to 2 rows
            // One main renderer is in the first row
            // And the other 3 renderer are in the second row and divide into 3 column withe the same height
            Size sizeControl = IApp.theApp.vtkControl.Size;

            int iHeight = sizeControl.Height;
            int iWidth = sizeControl.Width;

            if (iHeight == 0 || iWidth == 0) return;

            const double dHeightSeperator = 2;
            const double dWidthSeperator = 2;

            // Cacluate the width and height for view renderers
            double dViewRendererHeight = (iHeight - 2 * dHeightSeperator) / 3;
            double dViewRendererWidth = dViewRendererHeight * 16 / 9;

            if (dViewRendererWidth >= iWidth)
            {
                dViewRendererWidth = iWidth * 1.0 / 4;
            }

            double dMainRenderWidthRatio = 1.0 * (iWidth - dViewRendererWidth - dWidthSeperator) / iWidth;
            double dViewRenderWidthRatio = 1.0 * (iWidth - dViewRendererWidth) / iWidth;
            double dViewRenderHeightRatio1 = (dViewRendererHeight)/ iHeight;
            double dViewRenderHeightRatio2 = (dViewRendererHeight + dHeightSeperator) / iHeight;
            double dViewRenderHeightRatio3 = (dViewRendererHeight* 2 + dHeightSeperator) / iHeight;
            double dViewRenderHeightRatio4 = (dViewRendererHeight + dHeightSeperator)* 2 / iHeight;


            m_renderManager.MainRenderer.SetViewport(0, 0, dMainRenderWidthRatio, 1);
            m_renderManager.RightViewRenderer.SetViewport(dViewRenderWidthRatio, 0, 1, dViewRenderHeightRatio1);
            m_renderManager.FrontViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio2, 1, dViewRenderHeightRatio3);
            m_renderManager.TopViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio4, 1, 1);

            //m_renderManager.MainRenderer.Clear();
            //m_renderManager.RightViewRenderer.Clear();
            //m_renderManager.FrontViewRenderer.Clear();
            //m_renderManager.TopViewRenderer.Clear();
            //m_renderManager.MainRenderer.SetViewport(0, 0, 0.75, 1);
            //m_renderManager.TopViewRenderer.SetViewport(0.75, 0, 1, 1.0 / 3);
            //m_renderManager.RightViewRenderer.SetViewport(0.75, 1.0 / 3, 1, 2.0 / 3);
            //m_renderManager.FrontViewRenderer.SetViewport(0.75, 2.0 / 3, 1, 1.0);
        }

        #endregion
    }
}