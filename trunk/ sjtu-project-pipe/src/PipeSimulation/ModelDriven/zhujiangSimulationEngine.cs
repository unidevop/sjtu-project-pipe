using System;
using PipeSimulation.DataModel;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.SceneGraph;
using PipeSimulation.Geometry;

namespace PipeSimulation.DataDriven
{
    /// <summary>
    /// This class serves as the Zhujiang simulation engine.
    /// </summary>
    public class CZhujiangSimulationEngine : CModelAnimationSimulationEngine
    {
        public CZhujiangSimulationEngine(IModelAnimationSimulationImpl modelSimImpl)
            : base(modelSimImpl)
        {
        }

        protected override double GetTimerInterval()
        {
            ZhujiangOptions ZhujiangOptions = ApplicationOptions.Instance().ZhujiangOptions;
            return ZhujiangOptions.TimerInterval * 1000; // million second
        }
    }

    public class CZhujiangSimScaleImpl : CModelScaleSimulationImpl
    {
        private CZhujiangModel m_zhujiangModel = null;
        public CZhujiangSimScaleImpl()
        {
        }

        #region IZhujiangSimulationImpl members

        override public ISceneNode Model
        {
            set
            {
                try
                {
                    m_zhujiangModel = value as CZhujiangModel;
                }
                catch
                {
                }
            }
        }

        override public int GetAnimationTotalProgress()
        {
            try
            {
                ZhujiangOptions ZhujiangOptions = ApplicationOptions.Instance().ZhujiangOptions;
                return ZhujiangOptions.TotalSeconds;
            }
            catch
            {
            }
            return 100;
        }

        override public void UpdateModelByProgress(int iProgress)
        {
            if (iProgress < 0 || iProgress > GetAnimationTotalProgress()) return;
            if (m_zhujiangModel == null) return;

            // Update each segment
            double dProgress = 1.0 * iProgress / GetAnimationTotalProgress();
            m_zhujiangModel.ModelNode.Visibility = true;
            ScaleModel(m_zhujiangModel.ModelNode, m_zhujiangModel.StartPosition, m_zhujiangModel.ScaleDirection, dProgress);

            // Render the scene
            IApp.theApp.RenderScene();
        }

        #endregion
    }
}