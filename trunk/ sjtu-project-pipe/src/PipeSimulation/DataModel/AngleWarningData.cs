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
            const string strChangeLine =  /*MSG0*/"\r\n";

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
                string strAlphaFormat;
                strAlphaFormat = /*MSG0*/"Alpha: {0} > {1}.";

                strString = string.Concat(strString, string.Format(strAlphaFormat, 
                                          string.Format(strAngleFormat, Math.Abs(dAlphaAngle)), 
                                          string.Format(strAngleFormat, warningConfig.AlphaMaximum)), strChangeLine);
            }

            // Get the current Beta angle
            double dBetaAngle = pipeInfo.LongitudinalInclineAngle;
            if (warningConfig.IsBetaWarning(dBetaAngle))
            {
                string strBetaFormat;
                strBetaFormat = /*MSG0*/"Beta: {0} > {1}.";

                strString = string.Concat(strString, string.Format(strBetaFormat, 
                                          string.Format(strAngleFormat, Math.Abs(dBetaAngle)), 
                                          string.Format(strAngleFormat, warningConfig.BetaMaximum)), strChangeLine);
            }

            // Insert the waring text
            string strWarningText;
            strWarningText = /*MSG0*/"------Warning!!!------" + strChangeLine;

            if (!string.IsNullOrEmpty(strString))
            {
                strString = string.Concat(strWarningText, strString);
            }
            else
            {
                strString = string.Concat(strWarningText, "No warnings.");
            }

            return strString;
        }
    }
}