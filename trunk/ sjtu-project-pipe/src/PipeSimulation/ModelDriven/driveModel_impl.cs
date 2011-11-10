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
                        pipeModel.DriveModel(pipeModel.GetPipeTransformByPipeInfo(m_currentPipeInfo));
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

                // Add special code to test if the first pipe should show plyon models
                try
                {
                    if (iCurrentPipeIndex == 1)
                    {
                        CPipeModel firstPipeModel = IApp.theApp.DataModel.PipeModels[0];
                        if (firstPipeModel.GPSUCSs.Count == 2)
                        {
                             bool IsFirstPipeGPSSwitched = firstPipeModel.IsFirstPipeGPSSwitched(m_currentPipeInfo.Time);
                            foreach (ISceneNode node in firstPipeModel.Children)
                            {
                                if (node is CPylonModel)
                                {
                                    node.Visible = (firstPipeModel.Status == PipeStatus.eWorkingInProgess) && IsFirstPipeGPSSwitched;
                                }
                            }
                        }
                    }
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
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
        }
    }
}