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
                string errMsg = "Read config data failed:\n" + e.Message + "\n" + e.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
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
            catch(Exception ex)
            {
                string errMsg = "Write config data failed:\n" + ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
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
        /// Attribute to get the cabling simulation option
        /// </summary>
        [XmlElement]
        public CablingSimulationOption CablingSimulationOption
        {
            get { return m_CablingSimulationOption; }
            set { m_CablingSimulationOption = value; } 
        }
        private CablingSimulationOption m_CablingSimulationOption = new CablingSimulationOption();

        /// <summary>
        /// Attribute to get the connection pair option
        /// </summary>
        [XmlElement]
        public ConnectionPairOption ConnectionPairOption
        {
            get { return m_ConnectionPairOption; }
            set { m_ConnectionPairOption = value; }
        }
        private ConnectionPairOption m_ConnectionPairOption = new ConnectionPairOption();

        /// <summary>
        /// Attribute to get the view option
        /// </summary>
        [XmlElement]
        public ViewOptions ViewOptions
        {
            get { return m_ViewOptions; }
            set { m_ViewOptions = value; }
        }
        private ViewOptions m_ViewOptions = new ViewOptions();

        /// <summary>
        /// Attribute to get the view option
        /// </summary>
        [XmlElement]
        public FillOptions FillOptions
        {
            get { return m_FillOptions; }
            set { m_FillOptions = value; }
        }
        private FillOptions m_FillOptions = new FillOptions();

        /// <summary>
        /// Attribute to get the view option
        /// </summary>
        [XmlElement]
        public ZhujiangOptions ZhujiangOptions
        {
            get { return m_ZhujiangOptions; }
            set { m_ZhujiangOptions = value; }
        }
        private ZhujiangOptions m_ZhujiangOptions = new ZhujiangOptions();

        /// <summary>
        /// Attribute to get the view option
        /// </summary>
        [XmlElement]
        public RendererLayoutOptions RendererLayoutOptions
        {
            get { return m_RendererLayoutOptions; }
            set { m_RendererLayoutOptions = value; }
        }
        private RendererLayoutOptions m_RendererLayoutOptions = new RendererLayoutOptions();
        
        /// <summary>
        /// The value is used to control the distance of the connected point pair.
        /// If the distance is smaller or equal to this value, then we think two pipes are connected.
        /// This unit is Meter.
        /// </summary>
        public double ConnectedPipeTolerance = 0.01;

        /// <summary>
        /// This flag is used to define whether if we should update the connection points by last transform
        /// Because the last transform maybe a little difference with the one when we create the model
        /// Default is true
        /// </summary>
        public bool UpdateConnectionPointPositionByLastTransform = true;
    }

    /// <summary>
    /// Cabling Options
    /// </summary>
    public class CablingSimulationOption
    {
        [XmlElement("LineWidth")]
        private float m_fCablingLineWidth = 2.0f;
        [XmlElement("LineColor")]
        private double[] m_dCablingLineColor = new double[3] {0,0,0};

        public CablingSimulationOption()
        {
        }

        public float LineWidth
        {
            get { return m_fCablingLineWidth; }
            set
            {
                m_fCablingLineWidth = value;
            }
        }

        public double[] LineColor
        {
            get { return m_dCablingLineColor; }
            set
            {
                Array.Copy(value, m_dCablingLineColor, 3);
            }
        }
    }

    /// <summary>
    /// Connection Pair Options
    /// </summary>
    public class ConnectionPairOption
    {
        [XmlElement("LineWidth")]
        private float m_fConnectionLineWidth = 2.0f;
        [XmlElement("LineColor")]
        private double[] m_dConnectionLineColor = new double[3] { 0, 1, 0 };
        [XmlElement("ShowConnectionPair")]
        private bool m_bShowConnectionPairConnection = false;

        public ConnectionPairOption()
        {
        }

        public float LineWidth
        {
            get { return m_fConnectionLineWidth; }
            set
            {
                m_fConnectionLineWidth = value;
            }
        }

        public double[] LineColor
        {
            get { return m_dConnectionLineColor; }
            set
            {
                Array.Copy(value, m_dConnectionLineColor, 3);
            }
        }

        public bool ShowConnectionPair
        {
            get { return m_bShowConnectionPairConnection; }
            set
            {
                m_bShowConnectionPairConnection = value;
            }
        }
    }

    /// <summary>
    /// View Options
    /// </summary>
    public class ViewOptions
    {
        [XmlElement("PerspectiveProjection")]
        private bool m_bPerspectiveProjection = true;
        [XmlElement("ShowDisplayStatiticsText")]
        private bool m_bShowDisplayStatiticsText = true;
        [XmlElement("ShowWarningText")]
        private bool m_bShowWarningText = true;
        [XmlElement("ShowCoordinateSystem")]
        private bool m_bShowCoordinateSystem = true;
        [XmlElement("ShowNonePipeObjects")]
        private bool m_bShowNonePipeObjects = true;
        [XmlElement("ShowReferenceOrigin")]
        private bool m_bShowReferenceOrigin = false;
        [XmlElement("ShowCablingSystem")]
        private bool m_bShowCablingSystem = true;

        [XmlElement("GetBoundsOnlyForPipeModels")]
        private bool m_bGetBoundsOnlyForPipeModels = true;
        [XmlElement("IncludeInvisibleBounds")]
        private bool m_bIncludeInvisibleBounds = false;

        public bool GetBoundsOnlyForPipeModels
        {
            get { return m_bGetBoundsOnlyForPipeModels; }
            set { m_bGetBoundsOnlyForPipeModels = value; }
        }

        public bool IncludeInvisibleBounds
        {
            get { return m_bIncludeInvisibleBounds; }
            set { m_bIncludeInvisibleBounds = value; }
        }


        public bool PerpectiveProjection
        {
            get { return m_bPerspectiveProjection; }
            set { m_bPerspectiveProjection = value; }
        }

        public bool ShowDisplayStatiticsText
        {
            get { return m_bShowDisplayStatiticsText; }
            set { m_bShowDisplayStatiticsText = value; }
        }
        public bool ShowWarningText
        {
            get { return m_bShowWarningText; }
            set { m_bShowWarningText = value; }
        }
        public bool ShowCoordinateSystem
        {
            get { return m_bShowCoordinateSystem; }
            set { m_bShowCoordinateSystem = value; }
        }
        public bool ShowNonePipeObjects
        {
            get { return m_bShowNonePipeObjects; }
            set { m_bShowNonePipeObjects = value; }
        }
        public bool ShowReferenceOrigin
        {
            get { return m_bShowReferenceOrigin; }
            set { m_bShowReferenceOrigin = value; }
        }
        public bool ShowCablingSystem
        {
            get { return m_bShowCablingSystem; }
            set { m_bShowCablingSystem = value; }
        }
    }

    /// <summary>
    /// Fill Options
    /// </summary>
    public class FillOptions
    {
        [XmlElement("TotalSeconds")]
        private int m_iTotalSeconds = 600; // 10 min

        [XmlElement("TimerInterval")]
        private double m_dTimerInterval = 0.1; // 100 ms for each time tick

        public int TotalSeconds
        {
            get { return m_iTotalSeconds; }
            set { m_iTotalSeconds = value; }
        }

        public double TimerInterval
        {
            get { return m_dTimerInterval; }
            set { m_dTimerInterval = value; }
        }
    }

    /// <summary>
    /// Zhujiang Options
    /// </summary>
    public class ZhujiangOptions
    {
        [XmlElement("TotalSeconds")]
        private int m_iTotalSeconds = 600; // 10 min

        [XmlElement("TimerInterval")]
        private double m_dTimerInterval = 0.1; // 100 ms for each time tick

        public int TotalSeconds
        {
            get { return m_iTotalSeconds; }
            set { m_iTotalSeconds = value; }
        }

        public double TimerInterval
        {
            get { return m_dTimerInterval; }
            set { m_dTimerInterval = value; }
        }
    }

    public class RendererLayoutOptions
    {
        [XmlElement("ShowMaximizeAndBackMenuItems")]
        private bool m_bShowMaximizeAndBackMenuItems = false;
        private double m_HeightSeperator = 2;
        private double m_WidthSeperator = 2;

        public bool ShowMaximizeAndBackMenuItems
        {
            get { return m_bShowMaximizeAndBackMenuItems; }
            set { m_bShowMaximizeAndBackMenuItems = value; }
        }

        public double HeightSeperator
        {
            get { return m_HeightSeperator; }
            set { m_HeightSeperator = value; }
        }

        public double WidthSeperator
        {
            get { return m_WidthSeperator; }
            set { m_WidthSeperator = value; }
        }
    }
}