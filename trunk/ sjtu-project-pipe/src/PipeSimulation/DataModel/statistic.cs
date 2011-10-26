using System;
using PipeSimulation.ObserverMode;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;
using System.Collections.Generic;
using PipeSimulation.Geometry;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// This class is used to do a statistic for the application
    /// </summary>
    public class CStatisticData
    {
        private IList<CPipeConnectionPointPair> m_connPointPairList = null;

        public CStatisticData()
        {
        }

        public string ToDataString()
        {
            // The text should be as below

            // No.N tube
            // GPS1: (x,y,z)
            // GPS2: (x, y,z)
            // Time: 2009-10-32 8:30:32
            // Alpha:        Maximum is :
            // Beta::        Maximum is 
            // The delta x is
            // The delta y is 
            // Sink height is:

            string strString = string.Empty;
            const string strChangeLine =  /*MSG0*/"\r\n";

            // Get Pipe info
            PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;
            if (pipeInfo == null) return strString;


            // No.N tube
            strString = string.Concat(strString, strChangeLine);

            // Get current observer mode
            ObserverMode.ObserverMode currentMode = IApp.theApp.ObserverModeManager.ActiveModeType;
            if (currentMode == ObserverMode.ObserverMode.eMonitorMode)
            {
                // Add time
                strString = string.Concat(strString, strChangeLine, pipeInfo.Time, strChangeLine);
            }

            // GPS1
            const string strCoordFormat = "{0,15:0,0.000}";
            string strStartPoint;
            strStartPoint = string.Concat("(",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");

            strString = string.Concat(strString, strChangeLine, strStartPoint, strChangeLine);

            // GPS2
            string strEndPoint;
            strEndPoint = string.Concat("(",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");
            strString = string.Concat(strString, strEndPoint, strChangeLine);

            // Alpha
            const string strAngleFormat = "{0:0.###}";
            strString = string.Concat(strString, strChangeLine, string.Format(strAngleFormat, pipeInfo.RollInclineAngle), strChangeLine);
            strString = string.Concat(strString, string.Format(strAngleFormat, pipeInfo.MaxAbsRoll), strChangeLine);

            // Beta
            strString = string.Concat(strString, strChangeLine, string.Format(strAngleFormat, pipeInfo.PitchInclineAngle), strChangeLine);
            strString = string.Concat(strString, string.Format(strAngleFormat, pipeInfo.MaxAbsPitch), strChangeLine);

            // Connection Point
            int iPairIndex = 1;
            foreach (CPipeConnectionPointPair pair in m_connPointPairList)
            {
                if (pair == null) continue;

                double dx = Math.Abs(pair.DeltaX);
                double dy = Math.Abs(pair.DeltaY);
                double dz = Math.Abs(pair.DeltaZ);
                double dDist = pair.Distance;

                // Overall
                strString = string.Concat(strString, strChangeLine, strChangeLine);

                const string strValueFormat = "{0:0.###}";

                // Distance
                strString = string.Concat(strString, string.Format(strValueFormat, dDist * IApp.theApp.DataModel.ModelingUnitToMeter), strChangeLine);

                // Delta x, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dx * IApp.theApp.DataModel.ModelingUnitToMeter), strChangeLine);

                // Delta y, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dy * IApp.theApp.DataModel.ModelingUnitToMeter), strChangeLine);

                // Delta z, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dz * IApp.theApp.DataModel.ModelingUnitToMeter), strChangeLine);

                iPairIndex++;
            }

            return strString;
        }

        public string ToTextString()
        {
            // The text should be as below
            
            // No.N tube
            // GPS1: (x,y,z)
            // GPS2: (x, y,z)
            // Time: 2009-10-32 8:30:32
            // Alpha:        Maximum is :
            // Beta::        Maximum is 
            // The delta x is
            // The delta y is 
            // Sink height is:

            string strString = string.Empty;
            const string strChangeLine =  /*MSG0*/"\r\n";
            
            // Get Pipe info
            PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;
            if (pipeInfo == null) return strString;


            // No.N tube
            const string strPipeIndexFormat = "No.{0} tube is immersing.";
            strString = string.Concat(strString, string.Format(strPipeIndexFormat, pipeInfo.PipeId), strChangeLine);

            // Get current observer mode
            ObserverMode.ObserverMode currentMode = IApp.theApp.ObserverModeManager.ActiveModeType;
            if (currentMode == ObserverMode.ObserverMode.eMonitorMode)
            {
                // Add time
                strString = string.Concat(strString, strChangeLine, "Time: ", strChangeLine);
            }
            
            // GPS1
            strString = string.Concat(strString, strChangeLine, "GPS1(MM):", strChangeLine);

            // GPS2
            strString = string.Concat(strString, "GPS2(MM): ", strChangeLine);

            // Alpha
            strString = string.Concat(strString, strChangeLine, "Roll Deg:", strChangeLine);
            strString = string.Concat(strString, "Max Roll:", strChangeLine);

            // Beta
            strString = string.Concat(strString, strChangeLine, "Pitch Deg:", strChangeLine);
            strString = string.Concat(strString, "Max Pitch:", strChangeLine);

            // Connection Point
            int iPairIndex = 1;
            foreach (CPipeConnectionPointPair pair in m_connPointPairList)
            {
                if (pair == null) continue;

                // Overall
                const string strOverallFormat = "No.{0} connection point (M):";
                strString = string.Concat(strString, strChangeLine, string.Format(strOverallFormat, iPairIndex), strChangeLine);

                // Distance, need to calculate
                strString = string.Concat(strString, "Distance:", strChangeLine);

                // Delta x, need to calculate
                strString = string.Concat(strString, "Delta X:", strChangeLine);

                // Delta y, need to calculate
                strString = string.Concat(strString, "Delta Y:", strChangeLine);

                // Delta z, need to calculate
                strString = string.Concat(strString, "Delta Z:", strChangeLine);


                iPairIndex++;
            }
            

            return strString;
        }

        private string m_strWorkingItemMessage;
        public string WorkingItemMessage
        {
            set { m_strWorkingItemMessage = value; }
        }

        public IList<CPipeConnectionPointPair> ConnectionPointPairList
        {
            set
            {
                m_connPointPairList = value;
            }
        }
   }
}