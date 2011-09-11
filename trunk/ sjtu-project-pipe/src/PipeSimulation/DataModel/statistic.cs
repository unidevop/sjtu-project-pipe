using System;
using PipeSimulation.ObserverMode;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;
using System.Collections.Generic;

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
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.X), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Y), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Z), ")");

            strString = string.Concat(strString, strChangeLine, strStartPoint, strChangeLine);

            // GPS2
            string strEndPoint;
            strEndPoint = string.Concat("(",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.X), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Y), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Z), ")");
            strString = string.Concat(strString, strEndPoint, strChangeLine);

            // Alpha
            const string strAngleFormat = "{0:0.###}";
            strString = string.Concat(strString, strChangeLine, string.Format(strAngleFormat, pipeInfo.LatitudinalInclineAngle), strChangeLine);
            strString = string.Concat(strString, string.Format(strAngleFormat, pipeInfo.MaxAbsAlpha), strChangeLine);

            // Beta
            strString = string.Concat(strString, strChangeLine, string.Format(strAngleFormat, pipeInfo.LongitudinalInclineAngle), strChangeLine);
            strString = string.Concat(strString, string.Format(strAngleFormat, pipeInfo.MaxAbsBeta), strChangeLine);

            // Connection Point
            int iPairIndex = 1;
            foreach (CPipeConnectionPointPair pair in m_connPointPairList)
            {
                if (pair == null) continue;

                double dx = Math.Abs(pair.EndConnectionPoint[0] - pair.StartConnectionPoint[0]);
                double dy = Math.Abs(pair.EndConnectionPoint[1] - pair.StartConnectionPoint[1]);
                double dz = Math.Abs(pair.EndConnectionPoint[2] - pair.StartConnectionPoint[2]);
                double dDist = Math.Sqrt(dx * dx + dy * dy + dz * dz);

                // Overall
                strString = string.Concat(strString, strChangeLine, strChangeLine);

                const string strValueFormat = "{0:0.###}";

                // Distance
                strString = string.Concat(strString, string.Format(strValueFormat, dDist), strChangeLine);

                // Delta x, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dx), strChangeLine);

                // Delta y, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dy), strChangeLine);

                // Delta z, need to calculate
                strString = string.Concat(strString, string.Format(strValueFormat, dz), strChangeLine);

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
            strString = string.Concat(strString, strChangeLine, "GPS1:", strChangeLine);

            // GPS2
            strString = string.Concat(strString, "GPS2: ", strChangeLine);

            // Alpha
            strString = string.Concat(strString, strChangeLine, "Alpha:", strChangeLine);
            strString = string.Concat(strString, "Max Alpha:", strChangeLine);

            // Beta
            strString = string.Concat(strString, strChangeLine, "Beta:", strChangeLine);
            strString = string.Concat(strString, "Max Beta:", strChangeLine);

            // Connection Point
            int iPairIndex = 1;
            foreach (CPipeConnectionPointPair pair in m_connPointPairList)
            {
                if (pair == null) continue;

                // Overall
                const string strOverallFormat = "No.{0} connection points:";
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