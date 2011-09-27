using System;
using System.Xml.Serialization;

namespace PipeSimulation.DataModel
{
    public class AngleWarningConfig
    {
        [XmlElement("MaximumAlpha")]
        private double m_AlphaMaximum = 4; // Must be greater than 0
        [XmlElement("MaximumBeta")]
        private double m_BeltaMaximum = 4; // Must be greater than 0

        public AngleWarningConfig()
        {
        }

        public double AlphaMaximum
        {
            get { return m_AlphaMaximum; }
            set 
            {
                m_AlphaMaximum = Math.Abs(value); 
            }
        }

        public double BetaMaximum
        {
            get { return m_BeltaMaximum; }
            set
            {
                m_BeltaMaximum = Math.Abs(value);
            }
        }

        public bool IsAlphaWarning(double dValue)
        {
            return Math.Abs(dValue) > m_AlphaMaximum;
        }

        public bool IsBetaWarning(double dValue)
        {
            return Math.Abs(dValue) > m_BeltaMaximum;
        }
    }
}