using System;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.DataModel;
using System.Collections.Generic;
using PipeSimulation.Geometry;
using System.Windows.Media.Media3D;

namespace PipeSimulation.Utility
{
    /// <summary>
    /// This class is used to calculate the distacne connection points for the current pipe info
    /// </summary>
    public static class CPipeConnetionUtility
    {
        public static bool CalcaulateConnection(PipeInfo currentPipeInfo, out IList<CPipeConnectionPointPair> connectionPointPair)
        {
            // Construct the connection pair list
            connectionPointPair = new List<CPipeConnectionPointPair>();

            if (null == currentPipeInfo) return false;

            // Assert valid
            int iPipeIndex = currentPipeInfo.PipeId;
            int iPipeTotalCount = IApp.theApp.DataModel.PipeModels.Count;
            if (iPipeIndex <= 0 || iPipeIndex > iPipeTotalCount) return false; // Something goes wrong

            CPipeModel currentPipeModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 1];
            if (null == currentPipeModel) return false;

            // Get current pipe transformation
            //vtk.vtkTransform transform = currentPipeInfo.Matrix.ToVTKTransformation();
            vtk.vtkTransform transform = currentPipeModel.GetPipeTransformByPipeInfo(currentPipeInfo);
            //Random ro = new Random();
            //transform.Translate(ro.NextDouble() * -20000, ro.NextDouble() * -5000, ro.NextDouble() * -14000);
            //transform.Update();

            // How to calculate the start and end connection point.
            if (iPipeIndex == 1) // First pipe
            {
                // For the first pipe, then the previous start point is its start point
                foreach (CPipeConnectionPointPair pair in currentPipeModel.ConnectionPointPairList)
                {
                    CPipeConnectionPointPair newPair = new CPipeConnectionPointPair();
                    newPair.Name = pair.Name;

                    // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                    newPair.StartConnectionPoint = pair.StartConnectionPoint;

                    // The end point should be the pipe model's current start connection point
                    double[] ptTransformed = new double[3];
                    transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                    newPair.EndConnectionPoint = new CPoint3D(ptTransformed);

                    connectionPointPair.Add(newPair);
                }
            }
            else if (iPipeIndex > 1)
            {
                bool bUpdatePreviousPipeConnectionPoints = ApplicationOptions.Instance().UpdateConnectionPointPositionByLastTransform;

                CPipeModel previousPipeModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 2];
                foreach (CPipeConnectionPointPair pair in currentPipeModel.ConnectionPointPairList)
                {
                    CPipeConnectionPointPair newPair = new CPipeConnectionPointPair();
                    newPair.Name = pair.Name;

                    // For none first pipe, we should take care if the first pipe is not placed as the position of the modeling one.
                    double[] lastPipeStartConnectionPoint = null;
                    if (bUpdatePreviousPipeConnectionPoints && previousPipeModel.FinalTransform != null)
                    {
                        lastPipeStartConnectionPoint = previousPipeModel.FinalTransform.TransformDoublePoint(pair.StartConnectionPoint.Point);
                    }
                    else
                    {
                        lastPipeStartConnectionPoint = pair.StartConnectionPoint.Point;
                    }

                    // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                    newPair.StartConnectionPoint = new CPoint3D(lastPipeStartConnectionPoint);

                    // The end point should be the pipe model's current start connection point
                    double[] ptTransformed = new double[3];
                    transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                    newPair.EndConnectionPoint = new CPoint3D(ptTransformed);

                    connectionPointPair.Add(newPair);
                }
            }

            return true;
        }

        private static void CopyPoint(double[] srcPoint, double[] targetPoint)
        {
            if (srcPoint.Length != targetPoint.Length) throw new ArgumentException(/*MSG0*/"parameters don't have the same dimension");

            for (int i = 0; i < srcPoint.Length; ++i)
            {
                targetPoint[i] = srcPoint[i];
            }
        }
    }
}