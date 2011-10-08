using System;
using PipeSimulation.DataModel;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.SceneGraph;
using PipeSimulation.Geometry;

namespace PipeSimulation.DataDriven
{
    /// <summary>
    /// This class serves as the model simulation engine.
    /// </summary>
    public class CModelAnimationSimulationEngine : CTimeAnimationBase
    {
        private IModelAnimationSimulationImpl m_simulationImpl = null;
        private ISceneNode m_Model = null;

        public CModelAnimationSimulationEngine(IModelAnimationSimulationImpl fillSimImpl)
        {
            m_simulationImpl = fillSimImpl;
        }

        public string GetProgressText()
        {
            return "";
        }

        public bool SetModel(ISceneNode Model)
        {
            if (Model == null) return false;

            StopAnimation();

            m_Model = Model;
            // Get total animation steps
            try
            {
                m_simulationImpl.Model = m_Model;
                this.AnimationTotalProgress = m_simulationImpl.GetAnimationTotalProgress();
            }
            catch
            {
            }
            return true;
        }

        virtual public void ShowAllSegmentsWithoutAnimation()
        {
            UpdateModelByProgress(AnimationTotalProgress);
        }

        virtual public void UpdateModelByProgress(int iProgress)
        {
            try
            {
                m_simulationImpl.UpdateModelByProgress(iProgress);
            }
            catch
            {
            }
        }

        #region Animation Lifecycle
        public override void StartAnimation()
        {
            if (null == m_Model) return;

            base.StartAnimation();
        }

        public override void OnAnimationRunning(int t)
        {
            base.OnAnimationRunning(t);
            UpdateModelByProgress(t);
        }

        public override void StopAnimation()
        {
            base.StopAnimation();
            UpdateModelByProgress(0);
        }
        #endregion

        protected override double GetTimerInterval()
        {
            return 100;
        }
    }

    public interface IModelAnimationSimulationImpl
    {
        ISceneNode Model { set; }
        int GetAnimationTotalProgress();
        void UpdateModelByProgress(int iProgress);
    }

    public abstract class CModelScaleSimulationImpl : IModelAnimationSimulationImpl
    {
        public CModelScaleSimulationImpl()
        {
        }

        #region CModelScaleSimulationImpl members

        #endregion

        protected void ScaleModel(CModelNode node, CPoint3D ptScaleCenter, double dScale)
        {
            try
            {
                double dScaleFactor = dScale;
                if (dScale < 0) dScaleFactor = 0;
                if (dScale > 1) dScaleFactor = 1;

                // Scale the segment, because the dProgress is inside the range
                vtk.vtkTransform transform = new vtk.vtkTransform();
                transform.Translate(ptScaleCenter.X, ptScaleCenter.Y, ptScaleCenter.Z);
                transform.Scale(dScaleFactor, 1, 1);
                transform.Translate(-ptScaleCenter.X, -ptScaleCenter.Y, -ptScaleCenter.Z);

                node.PokeMatrix(transform);

                // Pay attention to the dScaleFactor is 0, we must make it invisible.
                if (Math.Abs(dScaleFactor) < 1e-6)
                {
                    node.Visibility = false;
                }
            }
            catch
            {
            }
        }

        #region IModelAnimationSimulationImpl 成员

        virtual public ISceneNode Model
        {
             set { throw new NotImplementedException(); }
        }

        public virtual int GetAnimationTotalProgress()
        {
            throw new NotImplementedException();
        }

        public virtual void UpdateModelByProgress(int iProgress)
        {
            throw new NotImplementedException();
        }

        #endregion
    }
}