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
    /// CRenderersLayoutStrategy is used implement a  renderers layout strategy
    /// </summary>
    public class CRenderersLayoutStrategy : IRendererLayoutStrategy
    {
        private IRendererManager m_renderManager;
        private int m_iWidth = 0;
        private int m_iHeight = 0;

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
            if (m_iHeight == 0 || m_iWidth == 0) return;

            const double dHeightSeperator = 2;
            const double dWidthSeperator = 2;

            // Cacluate the width and height for view renderers
            double dViewRendererHeight = (m_iHeight - 2 * dHeightSeperator) / 3;
            double dViewRendererWidth = dViewRendererHeight * 16 / 9;

            if (dViewRendererWidth >= m_iWidth)
            {
                dViewRendererWidth = m_iWidth * 1.0 / 4;
            }

            double dMainRenderWidthRatio = 1.0 * (m_iWidth - dViewRendererWidth - dWidthSeperator) / m_iWidth;
            double dViewRenderWidthRatio = 1.0 * (m_iWidth - dViewRendererWidth) / m_iWidth;
            double dViewRenderHeightRatio1 = (dViewRendererHeight)/ m_iHeight;
            double dViewRenderHeightRatio2 = (dViewRendererHeight + dHeightSeperator) / m_iHeight;
            double dViewRenderHeightRatio3 = (dViewRendererHeight* 2 + dHeightSeperator) / m_iHeight;
            double dViewRenderHeightRatio4 = (dViewRendererHeight + dHeightSeperator)* 2 / m_iHeight;

            m_renderManager.MainRenderer.SetViewport(0, 0, dMainRenderWidthRatio, 1);
            m_renderManager.RightViewRenderer.SetViewport(dViewRenderWidthRatio, 0, 1, dViewRenderHeightRatio1);
            m_renderManager.FrontViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio2, 1, dViewRenderHeightRatio3);
            m_renderManager.TopViewRenderer.SetViewport(dViewRenderWidthRatio, dViewRenderHeightRatio4, 1, 1);

            //m_renderManager.MainRenderer.SetViewport(0, 0, 0.75, 1);
            //m_renderManager.TopViewRenderer.SetViewport(0.75, 0, 0.8, 1.0 / 3);
            //m_renderManager.RightViewRenderer.SetViewport(0.75, 1.0 / 3, 1, 2.0 / 3);
            //m_renderManager.FrontViewRenderer.SetViewport(0.75, 2.0 / 3, 1, 1.0);
        }

        #endregion

        public void OnControlSizeChanged(object sender, EventArgs e)
        {
            Control control = sender as Control;
            if (control == null) return;

            Size sizeControl = control.Size;

            m_iHeight = sizeControl.Height;
            m_iWidth = sizeControl.Width;

            ApplyLayout();
        }
    }
}