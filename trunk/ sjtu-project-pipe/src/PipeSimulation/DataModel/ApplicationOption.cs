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
        /// Attribute to get the application option
        /// </summary>
        [XmlElement]
        public AppOptions AppOptions
        {
            get { return m_AppOptions; }
            set { m_AppOptions = value; } 
        }
        private AppOptions m_AppOptions = new AppOptions();

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
        /// Attribute to get the fill option
        /// </summary>
        [XmlElement]
        public FillOptions FillOptions
        {
            get { return m_FillOptions; }
            set { m_FillOptions = value; }
        }
        private FillOptions m_FillOptions = new FillOptions();

        /// <summary>
        /// Attribute to get the zhujiang option
        /// </summary>
        [XmlElement]
        public ZhujiangOptions ZhujiangOptions
        {
            get { return m_ZhujiangOptions; }
            set { m_ZhujiangOptions = value; }
        }
        private ZhujiangOptions m_ZhujiangOptions = new ZhujiangOptions();

        /// <summary>
        /// Attribute to get the renderer layout option
        /// </summary>
        [XmlElement]
        public RendererLayoutOptions RendererLayoutOptions
        {
            get { return m_RendererLayoutOptions; }
            set { m_RendererLayoutOptions = value; }
        }
        private RendererLayoutOptions m_RendererLayoutOptions = new RendererLayoutOptions();
        
        /// <summary>
        /// Attribute to get the observer mode option
        /// </summary>
        [XmlElement]
        public ObserverModeOptions ObserverModeOptions
        {
            get { return m_ObserverModeOptions; }
            set { m_ObserverModeOptions = value; }
        }
        private ObserverModeOptions m_ObserverModeOptions = new ObserverModeOptions();
        
        /// <summary>
        /// Attribute to get the Drive Model option
        /// </summary>
        [XmlElement]
        public DriveModelOptions DriveModelOptions
        {
            get { return m_DriveModelOptions; }
            set { m_DriveModelOptions = value; } 
        }
        private DriveModelOptions m_DriveModelOptions = new DriveModelOptions();
        
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

        [XmlElement("BackgroundColor")]
        private double[] m_clrBackground = new double[3] { 0.1f, 0.2f, 0.4f };
        [XmlElement("BackgroundImageFileName")]
        private string m_strBackgroundFileName = "sky3.jpg"; // Only the file name

        [XmlElement("MainRenderDefaultView")]
        private ViewTypeEnum m_MainRenderDefaultView = ViewTypeEnum.eSWISO; 
        [XmlElement("TopRenderDefaultView")]
        private ViewTypeEnum m_TopRenderDefaultView = ViewTypeEnum.eTopView;
        [XmlElement("RightRenderDefaultView")]
        private ViewTypeEnum m_RightRenderDefaultView = ViewTypeEnum.eRightView;
        [XmlElement("FrontRenderDefaultView")]
        private ViewTypeEnum m_FrontRenderDefaultView = ViewTypeEnum.eFrontView; 

        public enum ViewTypeEnum
        {
            eTopView,
            eBottomView,
            eFrontView,
            eBackView,
            eLeftView,
            eRightView,
            eSWISO,
            eSEISO,
            eNWISO,
            eNEISO
        }
        public ViewTypeEnum MainRenderDefaultView
        {
            get { return m_MainRenderDefaultView; }
            set { m_MainRenderDefaultView = value; }
        }

        public ViewTypeEnum TopRenderDefaultView
        {
            get { return m_TopRenderDefaultView; }
            set { m_TopRenderDefaultView = value; }
        }

        public ViewTypeEnum RightRenderDefaultView
        {
            get { return m_RightRenderDefaultView; }
            set { m_RightRenderDefaultView = value; }
        }

        public ViewTypeEnum FrontRenderDefaultView
        {
            get { return m_FrontRenderDefaultView; }
            set { m_FrontRenderDefaultView = value; }
        }

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
        public double[] BackgroundColor
        {
            get { return m_clrBackground; }
            set { m_clrBackground = value; }
        }
        public string BackgroundFileName
        {
            get { return m_strBackgroundFileName; }
            set { m_strBackgroundFileName = value; }
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
        private bool m_bShowMaximizeAndBackMenuItems = true;
        //private double m_HeightSeperator = 2;
        //private double m_WidthSeperator = 2;
        private double[] m_normalOutlineColor = new double[3] { 0, 0, 0 };
        private float m_normalOutlineWidth = 1.0f;
        private double[] m_activeOutlineColor = new double[3] { 1, 1, 0 };
        private float m_activeOutlineWidth = 5.0f;

        private double m_dMainRendereWidthRatio = 9.0 / 16; // (0, 1]

        public bool ShowMaximizeAndBackMenuItems
        {
            get { return m_bShowMaximizeAndBackMenuItems; }
            set { m_bShowMaximizeAndBackMenuItems = value; }
        }

        public double MainRendereWidthRatio
        {
            get { return m_dMainRendereWidthRatio; }
            set { m_dMainRendereWidthRatio = value; }
        }

        //public double HeightSeperator
        //{
        //    get { return m_HeightSeperator; }
        //    set { m_HeightSeperator = value; }
        //}

        //public double WidthSeperator
        //{
        //    get { return m_WidthSeperator; }
        //    set { m_WidthSeperator = value; }
        //}

        public double[] NormalOutlineColor
        {
            get { return m_normalOutlineColor; }
            set { m_normalOutlineColor = value; }
        }

        public float NormalOutlineLineWidth
        {
            get { return m_normalOutlineWidth; }
            set { m_normalOutlineWidth = value; }
        }

        public double[] ActiveOutlineColor
        {
            get { return m_activeOutlineColor; }
            set { m_activeOutlineColor = value; }
        }

        public float ActiveOutlineLineWidth
        {
            get { return m_activeOutlineWidth; }
            set { m_activeOutlineWidth = value; }
        }
    }

    public class ObserverModeOptions
    {
        [XmlElement("ActiveObserverMode")]
        private int m_iActiveObserverMode = 0; // 0: obeserver mode 1: replay mode

        [XmlElement("TimerInterval")]
        private double m_dTimerInterval = 0.2; // 200 ms for each time tick

        public int ActiveObserverMode
        {
            get { return m_iActiveObserverMode; }
            set
            {
                if (value < 0) value = 0;
                if (value > 1) value = 1;
                m_iActiveObserverMode = value;
            }
        }

        public double TimerInterval
        {
            get { return m_dTimerInterval; }
            set { m_dTimerInterval = value; }
        }
    }

    /// <summary>
    /// Application Option
    /// </summary>
    public class AppOptions
    {
        [XmlElement("DebugMode")]
        private bool m_iDebugMode = false;

        public bool DebugMode
        {
            get { return m_iDebugMode; }
            set { m_iDebugMode = value; }
        }
    }

    /// <summary>
    /// Drive Model Option
    /// </summary>
    public class DriveModelOptions
    {
        static DateTime s_notSetTimer = new DateTime(1990, 1, 1);
        // Use the 1990-1-1 to indicate that time time is not set.
        [XmlElement("FirstPipeGPSSwitchTime")]
        private DateTime m_dtFirstPipeGPSSwitchTime = s_notSetTimer;

        public DateTime FirstPipeGPSSwitchTime
        {
            get { return m_dtFirstPipeGPSSwitchTime; }
            set { m_dtFirstPipeGPSSwitchTime = value; }
        }

        // This function is used to to test if  the m_dtFirstPipeGPSSwitchTime has been set.
        public bool IsFirstPipeGPSSwitcheTimeSet()
        {
            return m_dtFirstPipeGPSSwitchTime.Year != s_notSetTimer.Year
                || m_dtFirstPipeGPSSwitchTime.Month != s_notSetTimer.Month
                || m_dtFirstPipeGPSSwitchTime.Day != s_notSetTimer.Day;
        }
    }
}