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
            Matrix3D gpsMatrixInModeling = Matrix3D.Multiply(IApp.theApp.DataModel.ModelingUCStoGPSUCS.UCSTransformMatrix3dInvert, currentPipeInfo.Matrix);

            vtk.vtkTransform transform = Utility.CPipeTransformUtility.TransformGPSMatrix(currentPipeModel.GPSUCS.UCSTransform, gpsMatrixInModeling.ToVTKTransformation());
            //Random ro = new Random();
            //transform.Translate(ro.NextDouble() * -20000, ro.NextDouble() * -5000, ro.NextDouble() * -14000);
            //transform.Update();

            // How to calculate the start and end connection point.
            if (iPipeIndex == 1) // First pipe
            {
#if RELEASE
                CPipeConnectionPointPair pair = currentPipeModel.ConnectionPointPairList[0];

                CPipeConnectionPointPair newPair1 = new CPipeConnectionPointPair();

                // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                newPair1.StartConnectionPoint = pair.StartConnectionPoint;

                // The end point should be the pipe model's current start connection point
                //transform.TransformPoint(pair.StartConnectionPoint, newPair.EndConnectionPoint);
                double[] startPoint = new double[3];
                startPoint[0] = currentPipeInfo.StartPoint.X;
                startPoint[1] = currentPipeInfo.StartPoint.Y;
                startPoint[2] = currentPipeInfo.StartPoint.Z;
                newPair1.EndConnectionPoint = new CPoint3D(startPoint);

                connectionPointPair.Add(newPair1);


                CPipeConnectionPointPair newPair2 = new CPipeConnectionPointPair();

                // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                newPair2.StartConnectionPoint = currentPipeModel.ConnectionPointPairList[0].StartConnectionPoint;
                
                // The end point should be the pipe model's current start connection point
                double[] ptTransformed = new double[3];
                transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                newPair2.EndConnectionPoint = new CPoint3D(ptTransformed);
                connectionPointPair.Add(newPair2);

#else
                foreach (CPipeConnectionPointPair pair in currentPipeModel.ConnectionPointPairList)
                {
                    CPipeConnectionPointPair newPair = new CPipeConnectionPointPair();

                    // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                    newPair.StartConnectionPoint = pair.StartConnectionPoint;

                    // The end point should be the pipe model's current start connection point
                    double[] ptTransformed = new double[3];
                    transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                    newPair.EndConnectionPoint = new CPoint3D(ptTransformed);

                    connectionPointPair.Add(newPair);
                }
#endif
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
#if RELEASE
                CPipeConnectionPointPair pair = previousPipeModel.ConnectionPointPairList[0];

                CPipeConnectionPointPair newPair1 = new CPipeConnectionPointPair();

                // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                newPair1.StartConnectionPoint = pair.StartConnectionPoint;

                // The end point should be the pipe model's current start connection point
                //transform.TransformPoint(pair.StartConnectionPoint, newPair.EndConnectionPoint);
                double[] startPoint = new double[3];
                startPoint[0] = currentPipeInfo.StartPoint.X;
                startPoint[1] = currentPipeInfo.StartPoint.Y;
                startPoint[2] = currentPipeInfo.StartPoint.Z;
                newPair1.EndConnectionPoint = new CPoint3D(startPoint);

                connectionPointPair.Add(newPair1);


                CPipeConnectionPointPair newPair2 = new CPipeConnectionPointPair();

                // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                newPair2.StartConnectionPoint = currentPipeModel.ConnectionPointPairList[1].StartConnectionPoint;

                // The end point should be the pipe model's current start connection point
                double[] ptTransformed = new double[3];
                transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                newPair2.EndConnectionPoint = new CPoint3D(ptTransformed);
                connectionPointPair.Add(newPair2);
#else
                //foreach (CPipeConnectionPointPair pair in currentPipeModel.ConnectionPointPairList)
                //{
                //    CPipeConnectionPointPair newPair = new CPipeConnectionPointPair();

                //    // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                //    pair.StartConnectionPoint = newPair.StartConnectionPoint;

                //    // The end point should be the pipe model's current start connection point
                //    double[] ptTransformed = new double[3];
                //    transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                //    newPair.EndConnectionPoint = new CPoint3D(ptTransformed);

                //    connectionPointPair.Add(newPair);
                //} 
                
                foreach (CPipeConnectionPointPair pair in previousPipeModel.ConnectionPointPairList)
                {
                    CPipeConnectionPointPair newPair = new CPipeConnectionPointPair();

                    // If the pipe is first pipe, we should use its start connection point to be the previous end connection point.
                    newPair.StartConnectionPoint = pair.StartConnectionPoint;

                    // The end point should be the pipe model's current start connection point
                    double[] ptTransformed = new double[3];
                    transform.TransformPoint(pair.StartConnectionPoint.Point, ptTransformed);
                    newPair.EndConnectionPoint = new CPoint3D(ptTransformed);

                    connectionPointPair.Add(newPair);
                }
#endif
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