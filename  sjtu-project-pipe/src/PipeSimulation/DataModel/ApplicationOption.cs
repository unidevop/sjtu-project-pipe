using System;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// This class is used to config all the application options.
    /// When the system is initialized, the class is reading the content from a xml.
    /// When the system is close, we will serialize the content to the xml
    /// </summary>
    public class ApplicationOptions
    {
        static ApplicationOptions s_appOptions = null;

        private AngleWarningConfig m_angleWarningConfiguration = new AngleWarningConfig();

        protected ApplicationOptions()
        {
        }

        public static ApplicationOptions Instance()
        {
            if (s_appOptions == null)
            {
                s_appOptions = new ApplicationOptions();
            }
            return s_appOptions;
        }

        /// <summary>
        /// Read data
        /// </summary>
        void ReadData()
        {
        }

        /// <summary>
        /// Write data
        /// </summary>
        void WriteData()
        {
        }

        /// <summary>
        /// Attribute to get the AngleWarningConfig
        /// </summary>
        public AngleWarningConfig AngleWarningConfig
        {
            get { return m_angleWarningConfiguration; }
        }

        /// <summary>
        /// The value is used to control the distance of the connected point pair.
        /// If the distance is smaller or equal to this value, then we think two pipes are connected.
        /// This unit is Meter.
        /// </summary>
        public double ConnectedPipeTolerance
        {
            get { return 0.42; }
        }
    }
}