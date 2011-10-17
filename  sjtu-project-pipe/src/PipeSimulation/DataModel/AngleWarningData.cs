using System;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;

namespace PipeSimulation.DataModel
{
    public class CAngleWarningData
    {
        public CAngleWarningData()
        {
        }

        public override string ToString()
        {
            // The text should be as below
            // Warning!!!
            // Current Alpha angle 7 is greater than maximum angle 4.
            // Current Beta angle 6 is greater than maximum angle 4.

            string strString = string.Empty;

            // Get Pipe info
            PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;
            if (pipeInfo == null) return strString;

            // Get Waring Config
            AngleWarningConfig warningConfig = ApplicationOptions.Instance().AngleWarningConfig;
            if (null == warningConfig) return strString;

            // Get the current Alpha angle
            const string strAngleFormat = "{0:0.###}";
            double dAlphaAngle = pipeInfo.LatitudinalInclineAngle;
            if (warningConfig.IsAlphaWarning(dAlphaAngle))
            {
                strString = string.Concat(strString, string.Format(Resources.IDS_ANGLE_ALPHA_WARNING, 
                                          string.Format(strAngleFormat, Math.Abs(dAlphaAngle)), 
                                          string.Format(strAngleFormat, warningConfig.AlphaMaximum)));
            }

            // Get the current Beta angle
            double dBetaAngle = pipeInfo.LongitudinalInclineAngle;
            if (warningConfig.IsBetaWarning(dBetaAngle))
            {
                strString = string.Concat(strString, string.Format(Resources.IDS_ANGLE_BETA_WARNING, 
                                          string.Format(strAngleFormat, Math.Abs(dBetaAngle)), 
                                          string.Format(strAngleFormat, warningConfig.BetaMaximum)));
            }

            return strString;
        }
    }
}