using System;
using PipeSimulation.ObserverMode;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// This class is used to do a statistic for the application
    /// </summary>
    public class CStatisticData
    {
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
            strString = string.Concat(strString, "GPS1: (", pipeInfo.StartPoint.ToString(), ")", strChangeLine);

            // GPS2
            strString = string.Concat(strString, "GPS2: (", pipeInfo.EndPoint.ToString(), ")", strChangeLine);

            // Alpha
            const string strAlphaFormat = "Alpha is {0}, Maximum value is {1}";
            strString = string.Concat(strString, string.Format(strAlphaFormat, pipeInfo.Alpha, pipeInfo.MaxAbsAlpha), strChangeLine);

            // Beta
            const string strBetaFormat = "Beta is {0}, Maximum value is {1}";
            strString = string.Concat(strString, string.Format(strBetaFormat, pipeInfo.Beta, pipeInfo.MaxAbsBeta), strChangeLine);

            // Delta x, need to calculate
            strString = string.Concat(strString, "The Delta Y is 100.", strChangeLine);

            // Delta y, need to calculate
            strString = string.Concat(strString, "The Delta Y is 100.", strChangeLine);

            // Sink height, need to calculate
            const string strSinkHeight = "The sink height is {0}.";
            strString = string.Concat(strString, string.Format(strSinkHeight, pipeInfo.StartPoint.Z.ToString()), strChangeLine);

            return strString;
        }

        private string m_strWorkingItemMessage;
        public string WorkingItemMessage
        {
            set { m_strWorkingItemMessage = value; }
        }

        //public string 

        //private string m_
   }
}