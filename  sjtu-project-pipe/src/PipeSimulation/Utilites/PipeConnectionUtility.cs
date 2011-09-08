using System;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.DataModel;

namespace PipeSimulation.Utility
{
    /// <summary>
    /// This class is used to calculate the distacne connection points for the current pipe info
    /// </summary>
    public sealed class CPipeConnetionUtility
    {
        private double[] m_startConnectionPoint = new double[3] {0, 0, 0};
        private double[] m_endConnectionPoint = new double[3] { 0, 0, 0 };

        /// <summary>
        /// Constructor
        /// </summary>
        public CPipeConnetionUtility()
        {
        }

        public bool CalcaulateConnection(PipeInfo currentPipeInfo)
        {
            if (null == currentPipeInfo) return false;

            // Assert valid
            int iPipeIndex = currentPipeInfo.PipeId;
            int iPipeTotalCount = IApp.theApp.DataModel.PipeModels.Count;
            if (iPipeIndex <= 0 || iPipeIndex > iPipeTotalCount) return false; // Something goes wrong

            CPipeModel currentPipeModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 1];
            if (null == currentPipeModel) return false;

            // Get current pipe transformation
            vtk.vtkTransform transform = new vtk.vtkTransform();//currentPipeInfo.Matrix.ToVTKTransformation();
            Random ro = new Random();
            transform.Translate(ro.NextDouble() * 2000, ro.NextDouble() * 500, ro.NextDouble() * 1400);
            transform.Update();

            // How to calculate the start and end connection point.
            if (iPipeIndex == 1) // First pipe
            {
                // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                CopyPoint(currentPipeModel.StartConnectionPoint, m_startConnectionPoint);

                // The end point should be the pipe model's current start connection point
                transform.TransformPoint(currentPipeModel.StartConnectionPoint, m_endConnectionPoint);
            }
            //else if (iPipeIndex == iPipeTotalCount)
            //{
            //    // If the pipe is last pipe, we should use its end connection point to be the next start connection point.
            //    CopyPoint(currentPipeModel.EndConnectionPoint, m_startConnectionPoint);

            //    // The end point should be the pipe model's current end connection point
            //    transform.TransformPoint(currentPipeModel.EndConnectionPoint, m_endConnectionPoint);
            //}
            else
            {
                CPipeModel previousPipeModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 1];

                // The current pipe is in the middle of pipe chain
                // The start point is the previous pipe's end connection point
                CopyPoint(previousPipeModel.EndConnectionPoint, m_startConnectionPoint);

                // The end point should be the pipe model's current end connection point
                transform.TransformPoint(currentPipeModel.StartConnectionPoint, m_endConnectionPoint);
            }

            return true;
        }

        public double[] StartConnectionPoint
        {
            get { return m_startConnectionPoint; }
        }

        public double[] EndConnectionPoint
        {
            get { return m_endConnectionPoint; }
        }

        private void CopyPoint(double[] srcPoint, double[] targetPoint)
        {
            if (srcPoint.Length != targetPoint.Length) throw new ArgumentException(/*MSG0*/"parameters don't have the same dimension");

            for (int i = 0; i < srcPoint.Length; ++i)
            {
                targetPoint[i] = srcPoint[i];
            }
        }
    }
}