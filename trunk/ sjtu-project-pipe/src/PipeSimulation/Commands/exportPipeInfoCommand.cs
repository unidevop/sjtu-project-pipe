using System;
using PipeSimulation.Commands;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;
using System.Collections.Generic;

namespace PipeSimulation
{
    namespace Commands
    {
        public class CExportCurrentPipeInfoCmd : CCommand
        {
            public CExportCurrentPipeInfoCmd(ICommandManager commandManager)
                : base(commandManager, (ulong)CommandIds.kExportCurrentPipeInfo)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;
                    if (pipeInfo == null) return;

                    // Step 1: Pop up a file save dialog to get a output path
                    SaveFileDialog saveDlg = new SaveFileDialog();
                    saveDlg.Filter = Resources.IDS_EXPORT_PIPE_INFO_FILETER;
                    saveDlg.Title = Resources.IDS_EXPORT_PIPE_INFO_TITLE;
                    saveDlg.ShowDialog();

                    // Step 2: Output a png image
                    if (string.IsNullOrEmpty(saveDlg.FileName)) return;
                    
                    using (System.IO.StreamWriter file = new System.IO.StreamWriter(saveDlg.FileName))
                    {
                        file.WriteLine(string.Format(Resources.IDS_PIPE_ID_IMMSERING, pipeInfo.PipeId));
                        file.WriteLine("");

                        file.WriteLine(string.Format(Resources.IDS_PIPE_INFO_DATE_TIME, pipeInfo.Time.ToString()));
                        file.WriteLine("");

                        // GPS 1
                        const string strCoordFormat = "{0,15:0,0.000}";
                        string strStartPoint;
                        strStartPoint = string.Concat("(",
                                                      string.Format(strCoordFormat, pipeInfo.StartPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                                      string.Format(strCoordFormat, pipeInfo.StartPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                                      string.Format(strCoordFormat, pipeInfo.StartPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");

                        file.WriteLine(string.Format(Resources.IDS_PIPE_INFO_GPS1, strStartPoint));
                        file.WriteLine("");

                        // GPS 2
                        string strEndPoint;
                        strEndPoint = string.Concat("(",
                                                      string.Format(strCoordFormat, pipeInfo.EndPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                                      string.Format(strCoordFormat, pipeInfo.EndPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                                      string.Format(strCoordFormat, pipeInfo.EndPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");
                        file.WriteLine(string.Format(Resources.IDS_PIPE_INFO_GPS2, strEndPoint));
                        file.WriteLine("");


                        // Angle1
                        file.WriteLine(string.Format(Resources.IDS_PIPE_INFO_ANGLE, pipeInfo.RollInclineAngle, 
                            pipeInfo.MaxAbsRoll, 
                            pipeInfo.PitchInclineAngle, 
                            pipeInfo.MaxAbsPitch));
                        file.WriteLine("");

                        // Connetion pair
                        IList<CPipeConnectionPointPair> connectionPointPairList = null;
                        int iConnectinPairIndex = 0;
                        if (CPipeConnetionUtility.CalcaulateConnection(pipeInfo, out connectionPointPairList))
                        {
                            foreach (CPipeConnectionPointPair pair in connectionPointPairList)
                            {
                                iConnectinPairIndex++;
                                file.WriteLine(string.Format(Resources.IDS_PIPE_INFO_CONNECTION_PAIR, 
                                    new object[] { iConnectinPairIndex, 
                                        pair.DistanceInMeter, 
                                        pair.DeltaXInMeter, 
                                        pair.DeltaXInMeter, 
                                        pair.DeltaZInMeter }));
                                file.WriteLine("");
                            }
                        } 
                    }
                }
                catch (SystemException e)
                {
                    MessageBox.Show(e.Message);
                }
                finally
                {
                    Terminate();
                }
            }
        }
    }
}