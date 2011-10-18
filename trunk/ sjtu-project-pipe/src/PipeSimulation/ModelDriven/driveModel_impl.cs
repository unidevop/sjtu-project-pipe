using System;
using PipeSimulation.DataModel;
using PipeSimulation.DataQuery;
using PipeSimulation.PipeApp;
using PipeSimulation.SceneGraph;
using System.Windows.Media.Media3D;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.Geometry;

namespace PipeSimulation
{
    namespace DataDriven
    {
        // This class is used to drive the models according to the data query result
        public class CDataDriven : IDataDriven
        {
            private PipeInfo m_currentPipeInfo = null;

            public CDataDriven()
            {
            }

            #region IDataDriven Members

            public void DriveModel(PipeInfo queryResult)
            {
                // Assert Valid
                if (queryResult == null) return;

                // Save the current pipe info
                m_currentPipeInfo = queryResult;

                // The main logic to drive the model should be as below
                // Get the working in progress pipe id.
                // Drive previous pipe to its location and remove the other components
                // Drive the working in progress pipe to its location
                int iCurrentPipeIndex = m_currentPipeInfo.PipeId;
                for (int iPipeIndex = IApp.theApp.DataModel.PipeModels.Count; iPipeIndex >= 1; --iPipeIndex)
                {
                    CPipeModel pipeModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 1];
                    if (pipeModel == null) continue;

                    if (iPipeIndex > iCurrentPipeIndex)
                    {
                        pipeModel.Status = PipeStatus.eNotStartedYet;
                    }
                    else if (iPipeIndex == iCurrentPipeIndex)
                    {
                        pipeModel.Status = PipeStatus.eWorkingInProgess;

                        // Here, we should pay more attention that if the m_currentPipeInfo is the last one for this pipe model
                        // Also, the distance between the connection point should be taken into account
                        if ((pipeModel.FinalPipeInfo != null && pipeModel.FinalPipeInfo.Time == m_currentPipeInfo.Time/*time is not enough*/)
                           || IsConnectedToPreviousPipe(m_currentPipeInfo))
                        {
                            // Cache the final pipe info for the finished pipe
                            CacheFinalPipeInfoForFinishedPipe(pipeModel, iPipeIndex);

                            bool bLastPipe = (iCurrentPipeIndex == IApp.theApp.DataModel.PipeModels.Count);
                            if (bLastPipe)
                            {
                                pipeModel.Status = PipeStatus.eFill;
                            }
                            else
                            {
                                // Mark the status as fill and its previous model
                                pipeModel.Status = PipeStatus.eDone;
                            }
                            //if (IApp.theApp.DataModel.PipeModels.Count > 1 && iPipeIndex > 2)
                            //{
                            //    CPipeModel previousModel = IApp.theApp.DataModel.PipeModels[iPipeIndex - 2];
                            //    if (null != previousModel)
                            //    {
                            //        previousModel.Status = PipeStatus.eFill;
                            //    }
                            //}

                            pipeModel.DriveModel(pipeModel.FinalTransform);
                            continue;
                        }

                        // Drive the model
                        //pipeModel.DriveModel(m_currentPipeInfo.Matrix.ToVTKTransformation());
                        Matrix3D gpsMatrixInModeling = Matrix3D.Multiply(IApp.theApp.DataModel.ModelingUCStoGPSUCS.UCSTransformMatrix3dInvert, m_currentPipeInfo.Matrix);

                        pipeModel.DriveModel(Utility.CPipeTransformUtility.TransformGPSMatrix(pipeModel.GPSUCS.UCSTransform, gpsMatrixInModeling.ToVTKTransformation()));
                    }
                    else if (iPipeIndex < iCurrentPipeIndex)
                    {
                        // Conside the refill mode
                        // Get the next pipe status
                        CPipeModel previousModel = IApp.theApp.DataModel.PipeModels[iPipeIndex];
                        if (previousModel != null && (previousModel.Status == PipeStatus.eDone || previousModel.Status == PipeStatus.eFill))
                        {
                            pipeModel.Status = PipeStatus.eFill;
                        }
                        else
                        {
                            pipeModel.Status = PipeStatus.eDone;
                        }
                        
                        // Cache the final pipe info for the finished pipe
                        CacheFinalPipeInfoForFinishedPipe(pipeModel, iPipeIndex);

                        // Drive the model
                        if (pipeModel.FinalTransform != null)
                        {
                            pipeModel.DriveModel(pipeModel.FinalTransform);
                        }
                    }
                }

                // Render the scene
                IApp.theApp.RenderScene();
            }

            public void DriveModel(int iPipeId, int iRecordId)
            {
                IHistoryDataQuery dateQuery = IApp.theApp.HistoryTimeDataQuery;
                if (dateQuery != null && dateQuery.IsConnected)
                {
                    try
                    {
                        DriveModel(dateQuery.GetPipeRecord(iPipeId + 1, iRecordId));
                    }
                    catch (Exception ex)
                    {
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }
                }
                else
                {
                    DriveModel(iRecordId);
                }
            }

            public PipeInfo CurrentData 
            {
                get { return m_currentPipeInfo; }
            }

            #endregion

            private bool IsConnectedToPreviousPipe(PipeInfo currentPipeInfo)
            {
                // Update the connection indicator
                IList<CPipeConnectionPointPair> connectionPointPairList = null;
                if (!CPipeConnetionUtility.CalcaulateConnection(currentPipeInfo, out connectionPointPairList)) return false;

                // Make sure each connection pair's distance is in our tolerance
                double dConnectedTolerance = ApplicationOptions.Instance().ConnectedPipeTolerance; // Unit is M
                foreach (CPipeConnectionPointPair pair in connectionPointPairList)
                {
                    if (pair.Distance * IApp.theApp.DataModel.ModelingUnitToMeter > dConnectedTolerance)
                    {
                        return false;
                    }
                }

                return true;
            }
            
            private void CacheFinalPipeInfoForFinishedPipe(CPipeModel pipeModel, int iPipeIndex)
            {
                // Cache the final pipe info
                // I think every time to query the pipe info really cost a lot
                if (pipeModel.FinalPipeInfo == null)
                {
                    try
                    {
                        // Find the final pipe info this pipe model
                        IHistoryDataQuery historyDataQuery = IApp.theApp.HistoryTimeDataQuery;
                        PipeInfo lastPipeInfo = historyDataQuery.GetPipeRecord(historyDataQuery.GetPipeEndTime(iPipeIndex), true);
                        if (lastPipeInfo != null)
                        {
                            // Cache it
                            pipeModel.FinalPipeInfo = lastPipeInfo;
                        }
                    }
                    catch (Exception ex)
                    {
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }
                }
            }

            // Test function
            private void DriveModel(int iProgress)
            {
                // Here, write a test code here

                //double dMoveDistance = 1000;

                // iProgress should be a range from 1 to 100
                DrivePipeModel(0, (iProgress >= 0 && iProgress < 30),  (iProgress >= 30), 1.0 * iProgress / 30);
                DrivePipeModel(1, (iProgress >= 30 && iProgress < 60), (iProgress >= 60), 1.0 * (iProgress - 30) / 30);
                DrivePipeModel(2, (iProgress >= 60 && iProgress < 90), (iProgress >= 90), 1.0 * (iProgress - 60) / 30);
                DrivePipeModel(3, (iProgress >= 90 && iProgress <= 100), (iProgress >= 100), 1.0 * (iProgress - 90) / 10);

                IApp.theApp.RenderScene();
            }

            private static double dMoveDistance = 1000;

            private void DrivePipeModel(int iPipeId, bool bWorking, bool bFinished, double iProgress)
            {
                // if iProgress is between the [0, 30), we should show the first pipe 
                CPipeModel pipeModel = IApp.theApp.DataModel.PipeModels[iPipeId];

                pipeModel.Visible = bWorking || bFinished;
                foreach (ISceneNode node in pipeModel.Children)
                {
                    node.Visible = bWorking;
               }

                double dDeltaDistance = 0;
                if (bWorking)
                {
                    dDeltaDistance = CDataDriven.dMoveDistance * (1 - iProgress);
                }

                // From a translation matrix from -z
                vtk.vtkTransform transform = new vtk.vtkTransform();
                transform.Translate(0, 0, dDeltaDistance);
                transform.Update();

                DrivdeModel(pipeModel.ModelNode, transform);
                foreach (ISceneNode node in pipeModel.Children)
                {
                    DrivdeModel(node.ModelNode, transform);
                }
            }

            private void DrivdeModel(CModelNode node, vtk.vtkTransform transform)
            {
                node.PokeMatrix(transform);
            }
        }
    }
}