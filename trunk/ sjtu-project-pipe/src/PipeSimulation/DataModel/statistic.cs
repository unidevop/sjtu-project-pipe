using System;
using PipeSimulation.ObserverMode;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;

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
            // The text show be below
            // Current Mode: [Monitor Mode].
            // We are working on the No.N pipe.
            // The Delta X is 100.
            // The Delta Y is 100.

            string strString = string.Empty;
            const string strChangeLine =  /*MSG0*/"\r\n";

            // Get observer mode
            CObserverModeManager modeManager = IApp.theApp.ObserverModeManager as CObserverModeManager;
            string strCurrentMode;
            if (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eMonitorMode)
            {
                strCurrentMode = Resources.IDS_MONITOR_MODE_TEXT;
            }
            else
            {
                strCurrentMode = Resources.IDS_REPLAY_MODE_TEXT;
            }
            //strString = string.Concat(strString, "Current Mode is ", strCurrentMode, strChangeLine);

            // Get Message
            //strString = string.Concat(strString, "You are focusing on No.1 pipe.", strChangeLine);

            // Animation
            strString = string.Concat(strString, modeManager.ReplayMode.ReplayAnimationEngine.AnimationProgress.ToString(), strChangeLine);

            // Delta x
            //strString = string.Concat(strString, "The Delta X is 100.", strChangeLine);

            // Delta y
            //strString = string.Concat(strString, "The Delta Y is 100.", strChangeLine);


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