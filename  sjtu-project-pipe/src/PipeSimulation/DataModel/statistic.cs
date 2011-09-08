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

        public override string ToString()
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
            const string strPipeIndexFormat = "No.{0}";
            strString = string.Concat(strString, string.Format(strPipeIndexFormat, pipeInfo.PipeId), strChangeLine);

            // Get current observer mode
            ObserverMode.ObserverMode currentMode = IApp.theApp.ObserverModeManager.ActiveModeType;
            if (currentMode == ObserverMode.ObserverMode.eMonitorMode)
            {
                // Add time
                strString = string.Concat(strString, "Time: ", pipeInfo.Time, strChangeLine);
            }
            
            // GPS1
            strString = string.Concat(strString, "///////////////////////", strChangeLine, "GPS1: (", pipeInfo.StartPoint.ToString(), ")", strChangeLine);

            // GPS2
            strString = string.Concat(strString, "GPS2: (", pipeInfo.EndPoint.ToString(), ")", strChangeLine);

            // Alpha
            const string strAlphaFormat = "Alpha is {0}, Maximum value is {1}";
            strString = string.Concat(strString, "///////////////////////", strChangeLine, string.Format(strAlphaFormat, pipeInfo.LatitudinalInclineAngle, pipeInfo.MaxAbsAlpha), strChangeLine);

            // Beta
            const string strBetaFormat = "Beta is {0}, Maximum value is {1}";
            strString = string.Concat(strString, string.Format(strBetaFormat, pipeInfo.LongitudinalInclineAngle, pipeInfo.MaxAbsBeta), strChangeLine);

            // Connection Point
            int iPairIndex = 1;
            foreach (CPipeConnectionPointPair pair in m_connPointPairList)
            {
                if (pair == null) continue;

                string strDeltaX;
                strDeltaX = Math.Abs(pair.EndConnectionPoint[0] - pair.StartConnectionPoint[0]).ToString();

                string strDeltaY;
                strDeltaY = Math.Abs(pair.EndConnectionPoint[1] - pair.StartConnectionPoint[1]).ToString();

                string strDeltaZ;
                strDeltaZ= Math.Abs(pair.EndConnectionPoint[2] - pair.StartConnectionPoint[2]).ToString();

                // Overall
                const string strOverallFormat = "The N0.{0} connection point pair:";
                strString = string.Concat(strString, "///////////////////////", strChangeLine, string.Format(strOverallFormat, iPairIndex), strChangeLine);


                // Delta x, need to calculate
                const string strDeltaXFormat = "The Delta X is {0}.";
                strString = string.Concat(strString, string.Format(strDeltaXFormat, strDeltaX), strChangeLine);

                // Delta y, need to calculate
                const string strDeltaYFormat = "The Delta Y is {0}.";
                strString = string.Concat(strString, string.Format(strDeltaYFormat, strDeltaY), strChangeLine);

                // Delta z, need to calculate
                const string strDeltaZFormat = "The Delta Z is {0}.";
                strString = string.Concat(strString, string.Format(strDeltaZFormat, strDeltaZ), strChangeLine);

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