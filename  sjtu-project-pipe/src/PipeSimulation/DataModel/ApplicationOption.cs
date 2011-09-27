using System;
using System.Xml.Serialization;
using System.Xml;

namespace PipeSimulation.DataModel
{
    /// <summary>
    /// This class is used to config all the application options.
    /// When the system is initialized, the class is reading the content from a xml.
    /// When the system is close, we will serialize the content to the xml
    /// </summary>
    [XmlRoot("ApplicationOptions")]
    public class ApplicationOptions
    {
        static ApplicationOptions s_appOptions = null;
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
        public void ReadData(string strAppOptionPath)
        {
            try
            {
                XmlSerializer serializer = new XmlSerializer(typeof(ApplicationOptions));
                System.IO.StreamReader t = new System.IO.StreamReader(strAppOptionPath);
                s_appOptions = (ApplicationOptions)serializer.Deserialize(t);
            }
            catch (SystemException e)
            {
            }
        }

        /// <summary>
        /// Write data
        /// </summary>
        public void WriteData(string strAppOptionPath)
        {
            try
            {
                XmlSerializer serializer = new XmlSerializer(typeof(ApplicationOptions));
                System.IO.StreamWriter t = new System.IO.StreamWriter(strAppOptionPath);
                serializer.Serialize(t, s_appOptions);
            }
            catch
            {
            }
        }

        /// <summary>
        /// Attribute to get the AngleWarningConfig
        /// </summary>
        [XmlElement]
        public AngleWarningConfig AngleWarningConfig
        {
            get { return m_angleWarningConfiguration; }
            set { m_angleWarningConfiguration = value; }
        }
        private AngleWarningConfig m_angleWarningConfiguration = new AngleWarningConfig();

        /// <summary>
        /// The value is used to control the distance of the connected point pair.
        /// If the distance is smaller or equal to this value, then we think two pipes are connected.
        /// This unit is Meter.
        /// </summary>
        public double ConnectedPipeTolerance;
    }
}