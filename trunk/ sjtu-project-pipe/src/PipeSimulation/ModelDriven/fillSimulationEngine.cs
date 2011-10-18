using System;
using PipeSimulation.DataModel;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.SceneGraph;
using PipeSimulation.Geometry;

namespace PipeSimulation.DataDriven
{
    /// <summary>
    /// This class serves as the fill simulation engine.
    /// </summary>
    public class CFillSimulationEngine : CModelAnimationSimulationEngine
    {
        public CFillSimulationEngine(IModelAnimationSimulationImpl modelSimImpl)
            : base(modelSimImpl)
        {
        }

        protected override double GetTimerInterval()
        {
            FillOptions fillOptions = ApplicationOptions.Instance().FillOptions;
            return fillOptions.TimerInterval * 1000; // million second
        }
    }

    public class CFillSimScaleImpl : CModelScaleSimulationImpl
    {
        private IList<CFillSegment> m_fillSegments = null;
        public CFillSimScaleImpl()
        {
        }

        #region IModelAnimationSimulationFormImpl members

        override public ISceneNode Model
        {
            set 
            {
                try
                {
                    CFillModel fillModel = value as CFillModel;

                    // Cache the segments to accerlerate
                    m_fillSegments = fillModel.Segments;
                }
                catch(Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }
        }

        override public int GetAnimationTotalProgress()
        {
            try
            {
                FillOptions fillOptions = ApplicationOptions.Instance().FillOptions;
                return fillOptions.TotalSeconds;
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
            return 100;
        }

        override public void UpdateModelByProgress(int iProgress)
        {
            if (iProgress < 0 || iProgress > GetAnimationTotalProgress()) return;
            if (m_fillSegments == null) return;

            // Update each segment
            double dProgress = 1.0 * iProgress / GetAnimationTotalProgress();
            double dAccumTimePercentage = 0;
            foreach (CFillSegment segment in m_fillSegments)
            {
                if (segment.TimePercentage + dAccumTimePercentage <= dProgress)
                {
                    // Should set visible
                    segment.ModelNode.Visibility = true;
                    ScaleFillSegment(segment, 1);
                }
                else if (dAccumTimePercentage > dProgress)
                {
                    segment.ModelNode.Visibility = false;
                    ScaleFillSegment(segment, 1);
                }
                else
                {
                    segment.ModelNode.Visibility = true;

                    double dScaleFactor = (dProgress - dAccumTimePercentage) / segment.TimePercentage;
                    ScaleFillSegment(segment, dScaleFactor);
                }

                dAccumTimePercentage += segment.TimePercentage;
            }
            // Render the scene
            IApp.theApp.RenderScene();
        }

        #endregion

        private void ScaleFillSegment(CFillSegment segment, double dScale)
        {
            try
            {
                ScaleModel(segment.ModelNode, segment.StartPosition, segment.ScaleDirection, dScale);
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }
    }
}