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
            double dAlphaAngle = pipeInfo.Alpha;
            if (warningConfig.IsAlphaWarning(dAlphaAngle))
            {
                string strAlphaFormat;
                strAlphaFormat = /*MSG0*/"Current Alpha angle {0} is greater than maximum angle {1}.";

                strString = string.Concat(strString, string.Format(strAlphaFormat, dAlphaAngle, warningConfig.AlphaMaximum), strChangeLine);
            }

            // Get the current Beta angle
            double dBetaAngle = pipeInfo.Beta;
            if (warningConfig.IsBetaWarning(dBetaAngle))
            {
                string strBetaFormat;
                strBetaFormat = /*MSG0*/"Current Beta angle {0} is greater than maximum angle {1}.";

                strString = string.Concat(strString, string.Format(strBetaFormat, dBetaAngle, warningConfig.BetaMaximum), strChangeLine);
            }

            // Insert the waring text
            if (!string.IsNullOrEmpty(strString))
            {
                string strWarningText;
                strWarningText = /*MSG0*/"Warning!!!" + strChangeLine;

                strString = string.Concat(strWarningText, strString);
            }

            return strString;
        }
    }
}