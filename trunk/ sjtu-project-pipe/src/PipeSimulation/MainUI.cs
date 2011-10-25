using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Reflection;
using System.IO;
using System.Xml;
using System.Threading;

using PipeSimulation.Commands;
using PipeSimulation.PipeApp;
using PipeSimulation.Utility;
using PipeSimulation.SceneGraph;
using PipeSimulation.DataModel;
using PipeSimulation.ObserverMode;
using PipeSimulation.DataQuery;
using SplashScreenThreaded;
using PipeSimulation.Properties;
using PipeSimulation.Geometry;
using PipeSimulation.DataDriven;

namespace PipeSimulation
{
    public partial class MainUI : Form
    {
        private bool m_connected = false;

        public MainUI()
        {
            // Splash Screen suppor
            // Step 1: Hide 
            this.Hide();

            // Step 2: Start a new thread to show the splash screen
            Thread splashthread = new Thread(new ThreadStart(SplashScreen.ShowSplashScreen));
            splashthread.IsBackground = true;
            splashthread.Start();
            splashthread.CurrentUICulture = new System.Globalization.CultureInfo(/*MSG0*/"zh-chs");

            // Make sure we ouptput all the vtk errors to a temp file in relese mode
            // Else use the win32 output window
#if !DEBUG
            vtk.vtkFileOutputWindow t = new vtk.vtkFileOutputWindow();
            t.SetFileName(System.IO.Path.GetTempPath() + CreateUniqueOutputFileName());
            t.FlushOn();
            //t.SetAppend(1);
            vtk.vtkOutputWindow.SetInstance(t);
#endif

            InitializeComponent();
        }

        // Create a unique output file name by a guid and current date time
        private string CreateUniqueOutputFileName()
        {
            string strFileName = string.Concat(/*MSG0*/"PipeSimulation_", Guid.NewGuid().ToString(), /*MSG0*/"_", DateTime.Now.ToString(), /*MSG0*/".error");
            strFileName = strFileName.Replace('/', '_');
            strFileName = strFileName.Replace(':', '_');

            return strFileName;
        }

        // Handle the OnIdle event
        public void OnIdle(object sender, EventArgs e)
        {
            // Update Obsever mode
            UpdateObserverMode();

            //// Update Angle warning
            //UpdateAngleWarning();

            // Update Database Status
            UpdateDatabaseStatus();
        }

        private void UpdateAngleWarning()
        {
            try
            {
                tollStripAngleWarningText.Visible = (IApp.theApp.DataDriven.CurrentData != null);

                CAngleWarningData angleWarningData = new CAngleWarningData();
                string strWarningText = angleWarningData.ToString();

                if (string.IsNullOrEmpty(strWarningText))
                {
                    tollStripAngleWarningText.Text = Resources.IDS_ANGLE_NO_WARNING;
                }
                else
                {
                    tollStripAngleWarningText.Text = angleWarningData.ToString();
                }

                tollStripAngleWarningText.ForeColor = string.IsNullOrEmpty(strWarningText) ? Color.Black : Color.Red;
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private void UpdateObserverMode()
        {
            // Get Observer mode
            ObserverMode.ObserverMode observerMode = IApp.theApp.ObserverModeManager.ActiveModeType;

            string strMessage = null;
            if (observerMode == ObserverMode.ObserverMode.eMonitorMode)
            {
                strMessage = Resources.IDS_MONITOR_MODE_TEXT;
            }
            else if (observerMode == ObserverMode.ObserverMode.eReplayMode)
            {
                strMessage = Resources.IDS_REPLAY_MODE_TEXT;
            }

            if (string.IsNullOrEmpty(strMessage)) return;
            strMessage = string.Format(Resources.IDS_STATUS_OBSERVER_MODE, strMessage);

            // Update the stats strip
            try
            {
                toolStripStatusObserverMode.Text = strMessage;
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private void UpdateDatabaseStatus()
        {
            // Get DataQuery
            IHistoryDataQuery hisDataQuery = IApp.theApp.HistoryTimeDataQuery;
            IRealtimeDataQuery realTimeDataQuery = IApp.theApp.RealTimeDataQuery;

            bool bConnected = false;
            string strMessage = null;
            if (hisDataQuery == null || !hisDataQuery.IsConnected
             || realTimeDataQuery == null || !realTimeDataQuery.IsConnected)
            {
                strMessage = Resources.IDS_DB_DIS_CONNECTED;
            }
            else
            {
                strMessage = Resources.IDS_DB_CONNECTED;
                bConnected = true;
            }

            // Update the stats strip
            try
            {
                toolStripStatusDatabaseStatus.ForeColor = bConnected ? Color.Black : Color.Red;
                toolStripStatusDatabaseStatus.Text = strMessage;
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }

            if (bConnected != m_connected)
                IApp.theApp.ConnectionCfg.OnConnectionChanged(bConnected);

            m_connected = bConnected;
        }

        private void OnAutoConnect()
        {
            IHistoryDataQuery hisDataQuery = IApp.theApp.HistoryTimeDataQuery;
            IRealtimeDataQuery realTimeDataQuery = IApp.theApp.RealTimeDataQuery;

            // Very low performance if the database is not connected
            try
            {
                if (IApp.theApp.ConnectionCfg.IsAutoConnect)
                {
                    if (hisDataQuery != null && !hisDataQuery.IsConnected)
                        hisDataQuery.Connect();

                    if (realTimeDataQuery != null && !realTimeDataQuery.IsConnected)
                    {
                        realTimeDataQuery.Connect();

                        if (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eMonitorMode)
                            realTimeDataQuery.Activate();
                    }
                }
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private void OnConnectionChanged(bool connected)
        {
            observerManager_ModeChanged();
        }

        // Handler for form load
        private void MainForm_Load(object sender, EventArgs e)
        {
            // Read the Application Option
            ApplicationOptions.Instance().ReadData(System.IO.Path.Combine(CFolderUtility.DataFolder(), /*MSG0*/@"app.opt"));

            // Initialize the IApp
            IApp.theApp = new AppImpl(this);

            // Initialize commands
            InitializeCommands();

            // Initialize the Data Query, must be called before InitializeObserverMode
            InitializeDataQuery();

            SplashScreen.UdpateStatusText(Resources.IDS_IMPORT_MODELS);
            Thread.Sleep(2000);

            // Initialize the vtk models
            InitializeRenderWindow(this.vtkFormsWindowControl.GetRenderWindow());

            // Initialize the data model
            InitializeDataModel();

            // Connect to render event
            IApp.theApp.RenderWindow.GetInteractor().AddObserver((uint)vtk.EventIds.RenderEvent, new vtk.vtkDotNetCallback(OnRenderCallback));

            // Initialize the text actor
            InitializeTextActor();

            // Initialize Observer mode
            InitializeObserverMode();
            
            // Initialize the scene
            InitializeScene();

            // Initilaize the interactor first to avoid initialize everything on form showing.
            IApp.theApp.vtkControl.InitializeInteractor();
            IApp.theApp.RenderScene();

            SplashScreen.UdpateStatusText(Resources.IDS_START_APP);
            Thread.Sleep(1500);

            // Activate this form
            this.Activate();
            SplashScreen.CloseSplashScreen();

            // Set Maximized
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized; 
            this.Show();

            bool bShowItems = ApplicationOptions.Instance().RendererLayoutOptions.ShowMaximizeAndBackMenuItems;
            this.showActiveRendererMaximize.Visible = bShowItems;
            this.showActiveRendererBackToOriginal.Visible = bShowItems;

            IApp.theApp.ConnectionCfg.AutoConnect += OnAutoConnect;
            IApp.theApp.ConnectionCfg.ConnectionChanged += OnConnectionChanged;

            if (!m_connected)
                SettingsMenuItem_Click(m_settingsMenuItem, null);
        }

        // Handler the form closing 
        private void MainUI_FormClosing(object sender, FormClosingEventArgs e)
        {
            // Stop active command
            IApp.theApp.CommandManager.StopActiveCommand();

            if (m_immersingInformationForm != null)
            {
                m_immersingInformationForm.Dispose();
                m_immersingInformationForm = null;
            }
            
            // Step 3: Deinitialize the event and free the memory of our objects. to do...
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode != null)
            {
                replayMode.ReplayAnimationEngine.StopAnimation();
            }
            
            // Step1: Check if video is still recoding, must end record before exit
            if (IApp.theApp.VideoWriter.IsRecording)
            {
                MessageBox.Show(Resources.IDS_WARNING_ISRECORDING, this.Text);
                e.Cancel = true;
                return;
            }

            // Step 2: Double check to ask if user really want to exit
            if (DialogResult.Yes != MessageBox.Show(Resources.IDS_WARNING_EXIT, this.Text, MessageBoxButtons.YesNo, MessageBoxIcon.Question))
            {
                e.Cancel = true;
                return;
            }

            // Write the Application Option
            ApplicationOptions.Instance().WriteData(System.IO.Path.Combine(CFolderUtility.DataFolder(), /*MSG0*/@"app.opt"));

            // Dispose the application instance
            IApp.theApp.Dispose();
        }

        // Initialize the text actor
        private void InitializeTextActor()
        {
            // Initialize the text for statistic
            CTextSceneDisplayer statisticTextDisplayer = IApp.theApp.StatisticTextDisplayer as CTextSceneDisplayer;
            if (statisticTextDisplayer != null)
            {
                statisticTextDisplayer.Setup();
                statisticTextDisplayer.TextActor.GetTextProperty().SetFontSize(18);
                statisticTextDisplayer.TextActor.GetTextProperty().SetJustificationToLeft();
                statisticTextDisplayer.TextActor.GetTextProperty().SetVerticalJustificationToTop();
                statisticTextDisplayer.TextActor.GetTextProperty().SetColor(0.0, 1.0, 0.0);
            }

            // Initialize the text for statistic additional
            CTextSceneDisplayer statisticTextDisplayerAdditional = IApp.theApp.StatisticTextDisplayerAdditional as CTextSceneDisplayer;
            if (statisticTextDisplayerAdditional != null)
            {
                statisticTextDisplayerAdditional.Setup();
                statisticTextDisplayerAdditional.TextActor.GetTextProperty().SetFontSize(18);
                statisticTextDisplayerAdditional.TextActor.GetTextProperty().SetJustificationToLeft();
                statisticTextDisplayerAdditional.TextActor.GetTextProperty().SetVerticalJustificationToTop();
                statisticTextDisplayerAdditional.TextActor.GetTextProperty().SetColor(1.0, 1.0, 0.0);
            }

            //// Initialize the text for warning
            //CTextSceneDisplayer warningTextDisplayer = IApp.theApp.WarningTextDisplayer as CTextSceneDisplayer;
            //if (warningTextDisplayer != null)
            //{
            //    warningTextDisplayer.Setup();
            //    warningTextDisplayer.TextActor.GetTextProperty().SetFontSize(18);
            //    warningTextDisplayer.TextActor.GetTextProperty().SetJustificationToRight();
            //    warningTextDisplayer.TextActor.GetTextProperty().SetVerticalJustificationToTop();
            //    warningTextDisplayer.TextActor.GetTextProperty().SetColor(1.0, 0.0, 0.0);
            //}
            
            // Watch the size changed to reposition the text actors
            IApp.theApp.vtkControl.SizeChanged += OnControlSizeChanged;
        }

        private void LoadImageToRenderer(vtk.vtkRenderer renderer)
        {
            try
            {
                string backgroundImageFileName = ApplicationOptions.Instance().ViewOptions.BackgroundFileName;
                if (!string.IsNullOrEmpty(backgroundImageFileName))
                {
                    string backgroundImagePath = System.IO.Path.Combine(CFolderUtility.DataFolder(), ApplicationOptions.Instance().ViewOptions.BackgroundFileName);
                    //string backgroundImagePath = @"C:\sky4.jpg";
                    vtk.vtkJPEGReader jpegReader = new vtk.vtkJPEGReader();
                    if (jpegReader.CanReadFile(backgroundImagePath) != 0)
                    {
                        jpegReader.SetFileName(backgroundImagePath);
                        jpegReader.Update();

                        vtk.vtkImageData imageData = jpegReader.GetOutput();

                        vtk.vtkImageActor actor = new vtk.vtkImageActor();
                        actor.SetInput(imageData);

                        renderer.AddActor(actor);

                        double[] origin = imageData.GetOrigin();
                        double[] spacing = imageData.GetSpacing();
                        int[] extent = imageData.GetExtent();

                        vtk.vtkCamera camera = renderer.GetActiveCamera();
                        camera.ParallelProjectionOn();
                        double xc = origin[0] + 0.5 * (extent[0] + extent[1]) * spacing[0];
                        double yc = origin[1] + 0.5 * (extent[2] + extent[3]) * spacing[1];
                        //double xd = (extent[1] - extent[0] + 1)*spacing[0];
                        double yd = (extent[3] - extent[2] + 1) * spacing[1];
                        double d = camera.GetDistance();
                        camera.SetParallelScale(0.5 * yd);
                        camera.SetFocalPoint(xc, yc, 0.0);
                        camera.SetPosition(xc, yc, d);
                    }
                    jpegReader.Dispose();
                }
            }
            catch (Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        void InitializeRenderWindow(vtk.vtkRenderWindow renWin)
        {
            CRendererManager renderManager = IApp.theApp.RendererManager as CRendererManager;
            if (renderManager == null) return;

            renderManager.ActiveRenderChanged += new CRendererManager.ActiveRenderChangedHandler(renderManager_ActiveRenderChanged);

            double[] clrBackground = ApplicationOptions.Instance().ViewOptions.BackgroundColor;

            // Add more arbitary lights to turn the scence a little bit bright
            vtk.vtkLightKit lightKit = new vtk.vtkLightKit();
            vtk.vtkLight sceneLight = new vtk.vtkLight();
            sceneLight.SetAmbientColor(1, 1, 1);
            sceneLight.SetDiffuseColor(1, 1, 1);
            sceneLight.SetFocalPoint(0, 0, 0);
            sceneLight.SetPosition(0, 0, 500000);
            sceneLight.SetLightTypeToSceneLight();
            sceneLight.SetIntensity(1);
            sceneLight.SwitchOn();

            // Background Renderer for the background image
            vtk.vtkRenderer backgroundRenderer = renderManager.BackgroundRenderer;
            backgroundRenderer.SetBackground(clrBackground);
            backgroundRenderer.SetLayer(0);
            renWin.AddRenderer(backgroundRenderer);
            LoadImageToRenderer(backgroundRenderer);

            // Main Renderer
            vtk.vtkRenderer mainRenderer = renderManager.MainRenderer;
            mainRenderer.SetBackground(clrBackground);
            mainRenderer.SetLayer(1);
            mainRenderer.AddLight(sceneLight);
            lightKit.AddLightsToRenderer(mainRenderer);
            renWin.AddRenderer(mainRenderer);

            // TopView Renderer
            vtk.vtkRenderer topViewRender = renderManager.TopViewRenderer;
            topViewRender.SetBackground(clrBackground);
            topViewRender.SetLayer(1);
            lightKit.AddLightsToRenderer(topViewRender);
            renWin.AddRenderer(topViewRender);

            // front Renderer
            vtk.vtkRenderer frontViewRenderer = renderManager.FrontViewRenderer;
            frontViewRenderer.SetBackground(clrBackground);
            frontViewRenderer.SetLayer(1);
            lightKit.AddLightsToRenderer(frontViewRenderer);
            renWin.AddRenderer(frontViewRenderer);

            // right Renderer
            vtk.vtkRenderer rightViewRenderer = renderManager.RightViewRenderer;
            rightViewRenderer.SetBackground(clrBackground);
            rightViewRenderer.SetLayer(1);
            lightKit.AddLightsToRenderer(rightViewRenderer);
            renWin.AddRenderer(rightViewRenderer);

            renWin.SetNumberOfLayers(2);

            // Set up layout strategy
            CRenderersLayoutStrategy renderersLayoutStrategy = new CRenderersLayoutStrategy(renderManager);
            renderManager.RendererLayoutStrategy = renderersLayoutStrategy;
        }
        
        internal void OnBackgroundChanged()
        {
            IRendererManager renderManager = IApp.theApp.RendererManager;
            if (renderManager == null) return;

            double[] clrBackground = ApplicationOptions.Instance().ViewOptions.BackgroundColor;

            // Backgroud Renderer
            vtk.vtkRenderer backgroundRenderer = renderManager.BackgroundRenderer;
            backgroundRenderer.SetBackground(clrBackground);

            // Main Renderer
            vtk.vtkRenderer mainRenderer = renderManager.MainRenderer;
            mainRenderer.SetBackground(clrBackground);

            // TopView Renderer
            vtk.vtkRenderer topViewRender = renderManager.TopViewRenderer;
            topViewRender.SetBackground(clrBackground);

            // front Renderer
            vtk.vtkRenderer frontViewRenderer = renderManager.FrontViewRenderer;
            frontViewRenderer.SetBackground(clrBackground);

            // right Renderer
            vtk.vtkRenderer rightViewRenderer = renderManager.RightViewRenderer;
            rightViewRenderer.SetBackground(clrBackground);

            IApp.theApp.RenderWindow.Render();
        }

        void renderManager_ActiveRenderChanged(vtk.vtkRenderer previousRender, vtk.vtkRenderer newRenderer)
        {
        }

        protected void OnControlSizeChanged(object sender, EventArgs e)
        {
            Control control = sender as Control;
            if (control == null) return;

            vtk.vtkTextActor textActorStatistic = IApp.theApp.StatisticTextDisplayer.TextActor;
            //vtk.vtkTextActor textActorWarning = IApp.theApp.WarningTextDisplayer.TextActor;

            Size sizeControl = control.Size;
            if (sizeControl.Width <= CTextSceneDisplayer.sMinX
            || sizeControl.Height <= CTextSceneDisplayer.sMinY)
            {
                textActorStatistic.VisibilityOff();
                //textActorWarning.VisibilityOff();
            }
            else
            {
                if (ApplicationOptions.Instance().ViewOptions.ShowDisplayStatiticsText)
                {
                    textActorStatistic.VisibilityOn();
                    //textActorWarning.VisibilityOn();
                }

                // Update statistic text display positon
                textActorStatistic.SetDisplayPosition(CTextSceneDisplayer.sMinX, (sizeControl.Height - CTextSceneDisplayer.sMinY));
                //textActorWarning.SetDisplayPosition(sizeControl.Width - CTextSceneDisplayer.sMinX, (sizeControl.Height - CTextSceneDisplayer.sMinY));

                IApp.theApp.StatisticTextDisplayerAdditional.TextActor.SetDisplayPosition(CTextSceneDisplayer.sMinX + 110, (sizeControl.Height - CTextSceneDisplayer.sMinY));
            }

            // Update the renderer laoyout strategy
            if (IApp.theApp.RendererManager.RendererLayoutStrategy != null)
            {
                IApp.theApp.RendererManager.RendererLayoutStrategy.ApplyLayout();
            }

            UpdateWCS();

            IApp.theApp.RenderScene();
        }

        protected override Boolean ProcessCmdKey(ref Message msg, Keys keyData)
        {
            if (keyData == Keys.Escape)
            {
                OnPressEscapeKey();
                return true;
            }

            return base.ProcessCmdKey(ref msg, keyData);
        }

        private void OnPressEscapeKey()
        {
            IApp.theApp.CommandManager.StopActiveCommand();

            // Always make the CSwitchActiveRendererCommand as the default command
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSwitchActiveRender, null);
        }

        /// <summary>
        /// Get the vtk control
        /// </summary>
        public vtk.vtkFormsWindowControl vtkControl
        {
            get { return vtkFormsWindowControl; }
        }

        /// <summary>
        /// Get the status bar
        /// </summary>
        public StatusStrip StatusStrip
        {
            get { return statusStrip1; }
        }

        private void InitializeDataQuery()
        {
            try
            {// Initialize the data query
                IRealtimeDataQuery realtimeDataQuery = IApp.theApp.RealTimeDataQuery;

                // Setup the callback event
                realtimeDataQuery.DataArrivedCallback += new DataArrivedCallbackType(dataQuery_DataArrivedCallback);

                 // Initialize history data query
                IHistoryDataQuery historyDataQuery = IApp.theApp.HistoryTimeDataQuery;

               // Connect to data engine
                realtimeDataQuery.Connect();

                // Connect to data engine
                historyDataQuery.Connect();

                m_connected = true;
            }
            catch(Exception ex)
            {
                m_connected = false;
                MessageBox.Show(new Form() { TopMost = true }, Resources.IDS_ERROR_DATAENGINE_CONNECT, this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);

                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private delegate void dataQuery_DataArrivedCallback_Invoke(PipeInfo queryResult);

        private void dataQuery_DataArrivedCallback(PipeInfo queryResult)
        {
            // A message is arrived, we need to sync this to drive the model
            // This must happen during observer mode.
            // Must in monitor mode
            if (IApp.theApp.ObserverModeManager.ActiveModeType != ObserverMode.ObserverMode.eMonitorMode) return;

            if (IApp.theApp.vtkControl.InvokeRequired)
            {
                dataQuery_DataArrivedCallback_Invoke d = new dataQuery_DataArrivedCallback_Invoke(dataQuery_DataArrivedCallback);
                this.Invoke(d, new object[] { queryResult });
            }
            else
            {
                DriveModel(queryResult);
            }
        }

        private ImmersingInformation m_immersingInformationForm = null;
        private void DriveModel(PipeInfo pipeInfo)
        {
            IApp.theApp.DataDriven.DriveModel(pipeInfo);

            // Update the dialog
            if (IApp.theApp.DataDriven.CurrentData != null)
            {
                if (m_immersingInformationForm != null)
                {
                    m_immersingInformationForm.UpdateData(IApp.theApp.DataDriven.CurrentData);
                }
                
            }

            // Update Angle warning
            UpdateAngleWarning();
        }

        private vtk.vtkOrientationMarkerWidget axesWidgetaMain;
        private vtk.vtkOrientationMarkerWidget axesWidgetTopView;
        private vtk.vtkOrientationMarkerWidget axesWidgetFrontView;
        private vtk.vtkOrientationMarkerWidget axesWidgetRightView;
        private void UpdateWCS()
        {

            // Initialize the WCS
            if (axesWidgetaMain == null)
            {
                vtk.vtkAxesActor axesActor = new vtk.vtkAxesActor();
                axesActor.SetShaftTypeToCylinder();
                axesActor.SetXAxisLabelText(/*MSG0*/"X");
                axesActor.SetYAxisLabelText(/*MSG0*/"Y");
                axesActor.SetZAxisLabelText(/*MSG0*/"Z");
                axesActor.SetTotalLength(1.5, 1.5, 1.5);

                axesWidgetaMain = new vtk.vtkOrientationMarkerWidget();
                axesWidgetaMain.SetCurrentRenderer(IApp.theApp.RendererManager.MainRenderer);
                axesWidgetaMain.SetOrientationMarker(axesActor);
                axesWidgetaMain.KeyPressActivationOff();
                axesWidgetaMain.SetInteractor(IApp.theApp.RenderWindow.GetInteractor());
                axesWidgetaMain.SetEnabled(1);
                axesWidgetaMain.InteractiveOff();
            }
            double[] mainViewport = IApp.theApp.RendererManager.MainRenderer.GetViewport();
            axesWidgetaMain.SetViewport(0.0, 0.0, 0.25, 0.25);


            if (axesWidgetTopView == null)
            {
                vtk.vtkAxesActor axesActor = new vtk.vtkAxesActor();
                axesActor.SetShaftTypeToLine();
                axesActor.SetXAxisLabelText(/*MSG0*/"X");
                axesActor.SetYAxisLabelText(/*MSG0*/"Y");
                axesActor.SetZAxisLabelText(/*MSG0*/"Z");
                axesActor.SetTotalLength(2.5, 2.5, 2.5);

                axesWidgetTopView = new vtk.vtkOrientationMarkerWidget();
                axesWidgetTopView.SetCurrentRenderer(IApp.theApp.RendererManager.TopViewRenderer);
                axesWidgetTopView.SetOrientationMarker(axesActor);
                axesWidgetTopView.KeyPressActivationOff();
                axesWidgetTopView.SetInteractor(IApp.theApp.RenderWindow.GetInteractor());
                axesWidgetTopView.SetEnabled(1);
                axesWidgetTopView.InteractiveOff();
            }
            double[] topViewport = IApp.theApp.RendererManager.TopViewRenderer.GetViewport();
            axesWidgetTopView.SetViewport(topViewport[0], topViewport[1], topViewport[0] + 0.08, topViewport[1] + 0.2);

            if (axesWidgetFrontView == null)
            {
                vtk.vtkAxesActor axesActor = new vtk.vtkAxesActor();
                axesActor.SetShaftTypeToLine();
                axesActor.SetXAxisLabelText(/*MSG0*/"X");
                axesActor.SetYAxisLabelText(/*MSG0*/"Y");
                axesActor.SetZAxisLabelText(/*MSG0*/"Z");
                axesActor.SetTotalLength(2.5, 2.5, 2.5); 
                
                axesWidgetFrontView = new vtk.vtkOrientationMarkerWidget();
                axesWidgetFrontView.SetCurrentRenderer(IApp.theApp.RendererManager.FrontViewRenderer);
                axesWidgetFrontView.SetOrientationMarker(axesActor);
                axesWidgetFrontView.KeyPressActivationOff();
                axesWidgetFrontView.SetInteractor(IApp.theApp.RenderWindow.GetInteractor());
                axesWidgetFrontView.SetEnabled(1);
                axesWidgetFrontView.InteractiveOff();
            }
            double[] frontViewport = IApp.theApp.RendererManager.FrontViewRenderer.GetViewport();
            axesWidgetFrontView.SetViewport(frontViewport[0], frontViewport[1], frontViewport[0] + 0.08, frontViewport[1] + 0.2);

            if (axesWidgetRightView == null)
            {
                vtk.vtkAxesActor axesActor = new vtk.vtkAxesActor();
                axesActor.SetShaftTypeToLine();
                axesActor.SetXAxisLabelText(/*MSG0*/"X");
                axesActor.SetYAxisLabelText(/*MSG0*/"Y");
                axesActor.SetZAxisLabelText(/*MSG0*/"Z");
                axesActor.SetTotalLength(2.5, 2.5, 2.5); 
                
                axesWidgetRightView = new vtk.vtkOrientationMarkerWidget();
                axesWidgetRightView.SetCurrentRenderer(IApp.theApp.RendererManager.RightViewRenderer);
                axesWidgetRightView.SetOrientationMarker(axesActor);
                axesWidgetRightView.KeyPressActivationOff();
                axesWidgetRightView.SetInteractor(IApp.theApp.RenderWindow.GetInteractor());
                axesWidgetRightView.SetEnabled(1);
                axesWidgetRightView.InteractiveOff();
            }
            double[] rightViewport = IApp.theApp.RendererManager.RightViewRenderer.GetViewport();
            axesWidgetRightView.SetViewport(rightViewport[0], rightViewport[1], rightViewport[0] + 0.08, rightViewport[1] + 0.2);

            // 
            SetWCSVisibility(ApplicationOptions.Instance().ViewOptions.ShowCoordinateSystem);
        }

        private void InitializeReferenceOrigin()
        {
            if (originCaption != null) return;

            // Show Origin
            originCaption = new vtk.vtkCaptionActor2D();
            originCaption.GetCaptionTextProperty().SetFontSize(18);
            originCaption.GetCaptionTextProperty().SetColor(0, 1, 1);
            originCaption.GetProperty().SetColor(0, 1, 1);
            originCaption.GetProperty().SetLineWidth(3);
            originCaption.ThreeDimensionalLeaderOn();
            //originCaption.LeaderOff();

            originCaption.SetAttachmentPoint(0, 0, 0);
            originCaption.SetCaption(/*MSG0*/"Reference Origin");
            originCaption.SetPosition(15, 15);
            originCaption.BorderOff();
            //originCaption.SetWidth(0.25);
            //originCaption.SetHeight(0.1);
            originCaption.GetTextActor().SetScaledText(0);
            originCaption.SetMaximumLeaderGlyphSize(10);
            originCaption.SetLeaderGlyphSize(0.025);

            //vtk.vtkRegularPolygonSource circel = new vtk.vtkRegularPolygonSource();
            //circel.SetRadius(300);
            //circel.SetNumberOfSides(16);
            //circel.GeneratePolylineOn();
            //circel.GeneratePolygonOff();

            //vtk.vtkSphereSource sphere = new vtk.vtkSphereSource();
            //sphere.SetPhiResolution(100);
            //sphere.SetThetaResolution(100);

            //originCaption.SetLeaderGlyph(circel.GetOutput());

            //originCaption.SetPosition2(10, 1);

            originCaption.VisibilityOff();
            IApp.theApp.RendererManager.MainRenderer.AddActor(originCaption);
        }

        private void InitializeScene()
        {
            // Initialize WCS
            UpdateWCS();

            // Initialize Reference Origin
            InitializeReferenceOrigin();

            // Show/hide objects by Application Options
            ViewOptions viewOptions = ApplicationOptions.Instance().ViewOptions;
            SetPerspectiveCamera(viewOptions.PerpectiveProjection);
            SetWarningTextDisplayerVisibility(viewOptions.ShowWarningText);
            SetStatisticTextDisplayerVisibility(viewOptions.ShowDisplayStatiticsText);
            SetWCSVisibility(viewOptions.ShowCoordinateSystem);
            SetNonePipeObjectsVisiblity(viewOptions.ShowNonePipeObjects);
            ShowOriginVisibility(viewOptions.ShowReferenceOrigin);

            // Let the scene show SW Isometric
            IApp.theApp.vtkControl.ShowSWIsoMetricView(IApp.theApp.RendererManager.MainRenderer, CBoundingBoxUtil.GetBounds(IApp.theApp.RendererManager.MainRenderer));
            IApp.theApp.vtkControl.ShowTopView(IApp.theApp.RendererManager.TopViewRenderer, CBoundingBoxUtil.GetBounds(IApp.theApp.RendererManager.TopViewRenderer));
            IApp.theApp.vtkControl.ShowFrontView(IApp.theApp.RendererManager.FrontViewRenderer, CBoundingBoxUtil.GetBounds(IApp.theApp.RendererManager.FrontViewRenderer));
            IApp.theApp.vtkControl.ShowRightView(IApp.theApp.RendererManager.RightViewRenderer, CBoundingBoxUtil.GetBounds(IApp.theApp.RendererManager.RightViewRenderer));
        }

        private void InitializeObserverMode()
        {
            // Connect to ObserverManager.ModeChanged event
            CObserverModeManager observerManager = IApp.theApp.ObserverModeManager as CObserverModeManager;
            if (observerManager == null) return;

            // Connect to mode change event
            observerManager.ModeChanged += new CObserverModeManager.ModeChangedHandler(observerManager_ModeChanged);

            // Replay mode
            observerManager.ReplayMode.ReplayAnimationEngine.AnimationStartted += new CReplayAnimationEngine.AnimationStarttedHandler(ReplayAnimationEngine_AnimationStartted);
            observerManager.ReplayMode.ReplayAnimationEngine.AnimationRunning += new CReplayAnimationEngine.AnimationRunningHandler(ReplayAnimationEngine_AnimationRunning);
            observerManager.ReplayMode.ReplayAnimationEngine.AnimationPaused += new CReplayAnimationEngine.AnimationPausedHandler(ReplayAnimationEngine_AnimationPaused);
            observerManager.ReplayMode.ReplayAnimationEngine.AnimationResume += new CReplayAnimationEngine.AnimationResumeHandler(ReplayAnimationEngine_AnimationResume);
            observerManager.ReplayMode.ReplayAnimationEngine.AnimationStopped += new CReplayAnimationEngine.AnimationStoppedHandler(ReplayAnimationEngine_AnimationStopped);

            // Enter the default mode.
            // Default mode should be Monitor mode.
            // But if we found that all pipes have already completed, we should switch to replay mode
            ObserverModeOptions observerModeOptions = ApplicationOptions.Instance().ObserverModeOptions;
            ObserverMode.ObserverMode eDefaultMode = ObserverMode.ObserverMode.eReplayMode;
            if (observerModeOptions.ActiveObserverMode == 0)
            {
                eDefaultMode = ObserverMode.ObserverMode.eMonitorMode;
            }

            //IDataQuery dataQuery = IApp.theApp.DataQuery;
            //if (dataQuery != null)
            //{
            //    int iPipeCount = IApp.theApp.DataModel.PipeModels.Count;
            //    if (dataQuery.IsPipeEnded(iPipeCount - 1))
            //    {
            //        eDefaultMode = ObserverMode.ObserverMode.eReplayMode;
            //    }
            //}

            IApp.theApp.ObserverModeManager.EnterObserverMode(eDefaultMode);
        }
        
        /// <summary>
        /// InitializeCommands
        /// </summary>
        private void InitializeCommands()
        {
            new CSwitchActiveRendererCommand(IApp.theApp.CommandManager);
            new CRotateCommand(IApp.theApp.CommandManager);
            new CPanCommand(IApp.theApp.CommandManager);
            new CZoomCommand(IApp.theApp.CommandManager);
            new CZoomAllCommand(IApp.theApp.CommandManager);
            new CTopViewCommand(IApp.theApp.CommandManager);
            new CBottomViewCommand(IApp.theApp.CommandManager);
            new CFrontViewCommand(IApp.theApp.CommandManager);
            new CBackViewCommand(IApp.theApp.CommandManager);
            new CLeftViewCommand(IApp.theApp.CommandManager);
            new CRightViewCommand(IApp.theApp.CommandManager);
            new CSWIsometricCommand(IApp.theApp.CommandManager);
            new CSEIsometricCommand(IApp.theApp.CommandManager);
            new CNEIsometricCommand(IApp.theApp.CommandManager);
            new CNWIsometricCommand(IApp.theApp.CommandManager);
            new CSaveAsPictureCmd(IApp.theApp.CommandManager);
            new CFillSimulationCommand(IApp.theApp.CommandManager);
            new CZhujiangSimulationCommand(IApp.theApp.CommandManager);
            new CAngleWarningConfigCommand(IApp.theApp.CommandManager);
            new CConnectionSettingCommand(IApp.theApp.CommandManager);
            new CSettingsCommand(IApp.theApp.CommandManager);
            new CReplaySimulationCommand(IApp.theApp.CommandManager);

            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSwitchActiveRender, null);
        }

        // Initialize data model
        private void InitializeDataModel()
        {
            // In this method, we will initialize the data model.
            // Step 1: Read the models

            // Get the assembly executing data path
            //String strPath = System.IO.Path.GetDirectoryName(Assembly.GetExecutingAssembly().CodeBase);

            string xmlFile = System.IO.Path.Combine(CFolderUtility.DataFolder(), /*MSG0*/@"pipe.psm");

            if (!System.IO.File.Exists(xmlFile))
            {
                MessageBox.Show(new Form(){TopMost = true}, string.Format(Resources.IDS_ERROR_DATAFILE_NOT_FOUND, xmlFile), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
                this.Close();
                return;
            }

            // Step 1: Load the file
            LoadXML(xmlFile);

            // Step 2: Load the 3ds models
            Load3dsModels();
        }

        private void LoadXML(string xmlFile)
        {
            try
            {
                XmlDocument xmlDoc = new XmlDocument();
                xmlDoc.Load(xmlFile);

                // Read models
                XmlNodeList pipeNodes = xmlDoc.SelectNodes(ModelXMLDefinition.RootNode + /*MSG0*/"//" + ModelXMLDefinition.PipeGroup + /*MSG0*/"//" + ModelXMLDefinition.Pipe);
                foreach (XmlNode pipeNode in pipeNodes)
                {
                    CPipeModel pipeModel = new CPipeModel();
                    pipeModel.ReadFromXMLNode(pipeNode);

                    // Add to data models
                    IApp.theApp.DataModel.PipeModels.Add(pipeModel);
                }

                // Read others
                XmlNodeList otherModels = xmlDoc.SelectNodes(ModelXMLDefinition.RootNode + /*MSG0*/"//" + ModelXMLDefinition.Model);
                foreach (XmlNode otherModel in otherModels)
                {
                    CStaticModel staticModel = new CStaticModel();
                    staticModel.ReadFromXMLNode(otherModel);
                   
                    // Add to static models
                    IApp.theApp.DataModel.StaticsModels.Add(staticModel);
                }

                // Read the Modeling UCS to GPS
                XmlNode modelingUCS = xmlDoc.SelectSingleNode(ModelXMLDefinition.RootNode + /*MSG0*/"//" + ModelXMLDefinition.pipeModelingUCS);
                if (modelingUCS != null)
                {
                    CUCS ucs = new CUCS();
                    ucs.ReadFromXMLNode(modelingUCS);

                    IApp.theApp.DataModel.ModelingUCStoGPSUCS = ucs;
                }

                // Read the Modeling Unit to Meter
                XmlNode ModelingUnitToMeterNode = xmlDoc.SelectSingleNode(ModelXMLDefinition.RootNode + /*MSG0*/"//" + ModelXMLDefinition.pipeModelingUnitToMeter);
                if (ModelingUnitToMeterNode != null)
                {
                    double dValue = double.Parse(ModelingUnitToMeterNode.InnerText);

                    IApp.theApp.DataModel.ModelingUnitToMeter = dValue;
                }

                // Read the GPSUnitToMeter
                XmlNode GPSUnitToMeterNode = xmlDoc.SelectSingleNode(ModelXMLDefinition.RootNode + /*MSG0*/"//" + ModelXMLDefinition.pipeGPSUnitToMeter);
                if (GPSUnitToMeterNode != null)
                {
                    double dValue = double.Parse(GPSUnitToMeterNode.InnerText);

                    IApp.theApp.DataModel.GPSUnitToMeter = dValue;
                }
            }
            catch (SystemException ex)
            {
                MessageBox.Show(new Form() { TopMost = true }, string.Format(Resources.IDS_ERROR_LOAD_XML, xmlFile), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                this.Close();
                return;
            }
        }

        private void Load3dsModels()
        {
            try
            {
                // Load Pipe Model and Plyon model
                foreach (CPipeModel pipeModel in IApp.theApp.DataModel.PipeModels)
                {
                    IDiskModel diskModel = pipeModel as IDiskModel;
                    if (diskModel != null)
                    {
                        diskModel.LoadModel(System.IO.Path.Combine(CFolderUtility.DataFolder(),diskModel.ModelPath));

                        foreach (ISceneNode sceneNode in pipeModel.Children)
                        {
                            IDiskModel subDiskModel = sceneNode as IDiskModel;
                            if (subDiskModel != null)
                                subDiskModel.LoadModel(System.IO.Path.Combine(CFolderUtility.DataFolder(), subDiskModel.ModelPath));
                            else if (sceneNode is CFillModel)
                            {
                                CFillModel fillModel = sceneNode as CFillModel;
                                foreach (CFillSegment segment in fillModel.Segments)
                                {
                                    segment.LoadModel(System.IO.Path.Combine(CFolderUtility.DataFolder(), segment.ModelPath));
                                }
                            }
                        }
                    }
               }

                // Load Statics Models
                foreach (CStaticModel staticModel in IApp.theApp.DataModel.StaticsModels)
                {
                    IDiskModel diskModel = staticModel as IDiskModel;
                    if (diskModel != null)
                    {
                        diskModel.LoadModel(System.IO.Path.Combine(CFolderUtility.DataFolder(), diskModel.ModelPath));
                    }
                }
            }
            catch (SystemException ex)
            {
                MessageBox.Show(new Form() { TopMost = true }, Resources.IDS_ERROR_LOAD_MODEL, this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private void toolStripRotate_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kRotate, sender);
            
        }

        private void toolStripPan_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kPan, sender);
        }

        private void toolStripZoom_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kZoom, sender);
        }

        private void toolStripZoomAll_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kZoomAll, sender);
        }

        private void toolStripTopView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kTopView, sender);
        }

        private void toolStripBottomView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kBottomView, sender);
        }

        private void toolStripFrontView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kFrontView, sender);
        }

        private void toolStripBackView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kBackView, sender);
        }

        private void toolStripLeftView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kLeftView, sender);
        }

        private void toolStripRightView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kRightView, sender);
        }

        private void toolStripNEIsoMetricView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kNEIsometric, sender);
        }

        private void toolStripSWIsoMetricView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSWIsometric, sender);
        }

        private void toolStripSEIsoMetricView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSEIsometric, sender);
        }

        private void toolStripNWIsoMetricView_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kNWIsometric, sender);
        }

        private void saveAsPNGToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSaveAsPicture, null);
        }


        private void splitContainerMain_SplitterMoving(object sender, SplitterCancelEventArgs e)
        {
        }

        private void splitContainerMain_SplitterMoved(object sender, SplitterEventArgs e)
        {
        }

        private void modeToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            UpdateModeMenuItem();
        }

        private void replayModeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.ObserverModeManager.EnterObserverMode(ObserverMode.ObserverMode.eReplayMode);
            UpdateModeMenuItem();
        }

        private void monitorModeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.ObserverModeManager.EnterObserverMode(ObserverMode.ObserverMode.eMonitorMode);
            UpdateModeMenuItem();
        }

        private void UpdateModeMenuItem()
        {
            monitorModeToolStripMenuItem.Checked = (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eMonitorMode);
            replayModeToolStripMenuItem.Checked = (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eReplayMode);
            showImmersingInformation.Enabled = (IApp.theApp.DataDriven.CurrentData != null);
            showImmersingInformation.Checked = (m_immersingInformationForm != null && m_immersingInformationForm.Visible);
        }

        private void trackBarAnimation_Scroll(object sender, EventArgs e)
        {
            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.AnimationProgress = trackBarAnimation.Value;

            // Drive model
            DriveModeByTrackBarValue(replayMode, trackBarAnimation.Value);
        }

        private void DriveModeByTrackBarValue(CReplayMode replayMode, int iValue)
        {
            // Get the time corresponding to the time t
            DateTime startTime = replayMode.ReplayAnimationEngine.AnimationStartTime;
            DateTime endTime = replayMode.ReplayAnimationEngine.AnimationEndTime;

            DateTime specificTime;
            double linearValue = 1.0 * (iValue - trackBarAnimation.Minimum) / (trackBarAnimation.Maximum - trackBarAnimation.Minimum);
            double intelopValue = (endTime - startTime).Ticks * linearValue;
            specificTime = startTime + new TimeSpan((long)(intelopValue));

            // Pipe Info
            IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;
            if (dataQuery != null && dataQuery.IsConnected)
            {
                try
                {
                    PipeInfo pipeInfo = dataQuery.GetPipeRecord(specificTime, false);

                    // Drive the model
                    DriveModel(pipeInfo);
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }

                UpdateAnimationLabelText();
            }
        }

        private void UpdateAnimationLabelText()
        {
            // Get Current Record Index
            int iRecordIndex = trackBarAnimation.Value;
            string strAnimationTime = iRecordIndex.ToString();

            DateTime dateTime = DateTime.Now;

            // Get the current pipe info
            PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;
            if (pipeInfo != null)
            {
                dateTime = pipeInfo.Time;
            }
            else
            {
                // Get the real time expression
                IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;
                if (dataQuery != null && dataQuery.IsConnected)
                {
                    try
                    {

                        dateTime = (iRecordIndex != 0) ?
                            dataQuery.GetPipeTime(toolStripComboBoxPipes.SelectedIndex + 1, iRecordIndex) :
                            dataQuery.GetPipeStartTime(toolStripComboBoxPipes.SelectedIndex + 1);
                    }
                    catch (Exception ex)
                    {
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }
                }
                else
                {
                    return;
                }
            }

            strAnimationTime = string.Concat(dateTime.ToLongDateString(), /*MSG0*/" ", dateTime.ToLongTimeString());

            // Update the label
            toolStripLabelAnimationTime.Text = strAnimationTime;
        }

        private void toolStripButtonStartAnimation_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kReplaySimulation, null);

            //// CReplayMode.StartAnimation

            //// The current observer mode instance must be CReplayMode
            //CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            //if (replayMode == null) return;

            //replayMode.ReplayAnimationEngine.StartAnimation();
        }

        private void toolStripButtonPauseAnimation_Click(object sender, EventArgs e)
        {
            // CReplayMode.PauseAnimation

            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.PauseAnimation();
        }

        private void toolStripButtonStopAnimation_Click(object sender, EventArgs e)
        {
            // Stop active command
            IApp.theApp.CommandManager.StopActiveCommand();

            //// CReplayMode.StopAnimation

            //// The current observer mode instance must be CReplayMode
            //CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            //if (replayMode == null) return;

            //replayMode.ReplayAnimationEngine.StopAnimation();
        }

        private void toolStripButtonBegining_Click(object sender, EventArgs e)
        {
            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.GotoBegining(); 
        }

        private void toolStripButtonEnd_Click(object sender, EventArgs e)
        {
            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.GotoEnd();
        }

        private void ReplayAnimationEngine_AnimationStartted()
        {
            // Update the UI
            toolStripButtonStartAnimation.Checked = true;
            toolStripButtonStartAnimation.Enabled = true;

            toolStripButtonPauseAnimation.Checked = false;
            toolStripButtonPauseAnimation.Enabled = true;

            toolStripButtonStopAnimation.Checked = false;
            toolStripButtonStopAnimation.Enabled = true;

            viewSpecificTimerScene.Enabled = false;
        }

        private void ReplayAnimationEngine_AnimationResume()
        {
            // Update the UI
            toolStripButtonStartAnimation.Checked = true;
            toolStripButtonStartAnimation.Enabled = true;

            toolStripButtonPauseAnimation.Checked = false;
            toolStripButtonPauseAnimation.Enabled = true;

            toolStripButtonStopAnimation.Checked = false;
            toolStripButtonStopAnimation.Enabled = true;

            viewSpecificTimerScene.Enabled = false;
        }

        private void ReplayAnimationEngine_AnimationPaused()
        {
            // Update the UI
            toolStripButtonStartAnimation.Checked = false;
            toolStripButtonStartAnimation.Enabled = true;

            toolStripButtonPauseAnimation.Checked = true;
            toolStripButtonPauseAnimation.Enabled = true;

            toolStripButtonStopAnimation.Checked = false;
            toolStripButtonStopAnimation.Enabled = true;

            viewSpecificTimerScene.Enabled = false;
        }

        private delegate void UpdateTrackProgress(int t);
        private void ReplayAnimationEngine_AnimationRunning(int t)
        {
            // Notice this maybe a unsafe thread call.

            if (trackBarAnimation.InvokeRequired)
            {
                UpdateTrackProgress d = new UpdateTrackProgress(ReplayAnimationEngine_AnimationRunning);
                this.Invoke(d, new object[] { t });
            }
            else
            {
                if (IApp.theApp.RenderWindow.CheckInRenderStatus() != 0)
                {
                    return;
                }

                // The current observer mode instance must be CReplayMode
                CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
                if (replayMode == null) return;

                // Update the control value
                try
                {
                    trackBarAnimation.Value = t;

                    // Drive model
                    DriveModeByTrackBarValue(replayMode, t);
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }
        }

        private delegate void StopAnimationProgress();
        private void ReplayAnimationEngine_AnimationStopped()
        {
            if (trackBarAnimation.InvokeRequired)
            {
                StopAnimationProgress d = new StopAnimationProgress(ReplayAnimationEngine_AnimationStopped);
                this.Invoke(d, new object[] { });
            }
            else
            {
                // The current observer mode instance must be CReplayMode
                CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
                if (replayMode == null) return;
                
                // Update the UI
                toolStripButtonStartAnimation.Checked = false;
                toolStripButtonStartAnimation.Enabled = true;

                toolStripButtonPauseAnimation.Checked = false;
                toolStripButtonPauseAnimation.Enabled = false;

                toolStripButtonStopAnimation.Checked = false;
                toolStripButtonStopAnimation.Enabled = false;

                try
                {
                    trackBarAnimation.Value = replayMode.ReplayAnimationEngine.AnimationProgress;
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
                UpdateAnimationLabelText();

                viewSpecificTimerScene.Enabled = true;
            }
        }

        private void observerManager_ModeChanged()
        {
            // Stop active command
            IApp.theApp.CommandManager.StopActiveCommand();

            // Show/Hide the toolbar
            ObserverMode.ObserverMode mode = IApp.theApp.ObserverModeManager.ActiveModeType;

            // Save the observer mode
            ObserverModeOptions observerModeOptions = ApplicationOptions.Instance().ObserverModeOptions;
            if (mode == ObserverMode.ObserverMode.eMonitorMode)
            {
                observerModeOptions.ActiveObserverMode = 0;
            }
            else
            {
                observerModeOptions.ActiveObserverMode = 1;
            }

            toolStripReplay.Visible = (mode == ObserverMode.ObserverMode.eReplayMode);

            // Update the toolbar
            if (mode == ObserverMode.ObserverMode.eReplayMode)
            {
                IRealtimeDataQuery realtimeDataQuery = IApp.theApp.RealTimeDataQuery;

                //  deactivate real time query first even it's not connected
                if (realtimeDataQuery != null)
                    realtimeDataQuery.Deactivate();

                // Clear the combox 
                toolStripComboBoxPipes.Items.Clear();

                // Insert started pipes
                IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;
                if (dataQuery != null && dataQuery.IsConnected)
                {
                    int pipeModelCount = IApp.theApp.DataModel.PipeModels.Count;
                    try
                    {
                        for (int i = pipeModelCount; i > 0; --i)
                        {
                            if (dataQuery.IsPipeStarted(i))
                            {
                                string strComboboxItem = string.Format(Resources.IDS_PIPE_INDEX, i);
                                toolStripComboBoxPipes.Items.Insert(0, strComboboxItem);
                            }
                        }
                    }
                    catch (Exception ex)
                    {
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }

                    if (pipeModelCount != 0 && toolStripComboBoxPipes.Items.Count > 0)
                    {
                        // Also add a all item in the combobox
                        //string strComboboxItem = string.Format(Resources.IDS_PIPE_INDEX, i + 1);
                        string strComboboxItem = Resources.IDS_PIPES_ALL;
                        toolStripComboBoxPipes.Items.Insert(0, strComboboxItem);

                        toolStripComboBoxPipes.SelectedIndex = 0;
                    }
                    else
                    {
                        // Set the selected index as -1
                        toolStripComboBoxPipes.SelectedIndex = -1;

                        // Seems that the above statement won't activate the below message, so we will force to update it.
                        toolStripComboBoxPipes_SelectedIndexChanged(toolStripComboBoxPipes, null);
                    }
                }
                else
                {
                    // Disable the control in replay modes
                    // Set the selected index as -1
                    toolStripComboBoxPipes.SelectedIndex = -1;

                    // Seems that the above statement won't activate the below message, so we will force to update it.
                    toolStripComboBoxPipes_SelectedIndexChanged(toolStripComboBoxPipes, null);
                }
                //else
                //{
                //    // Just for test, should be delete after Data query is work
                //    int pipeModelCount = IApp.theApp.DataModel.PipeModels.Count;
                //    for (int i = 0; i < pipeModelCount; ++i)
                //    {
                //        string strComboboxItem = string.Format(Resources.IDS_PIPE_INDEX, i + 1);
                //        toolStripComboBoxPipes.Items.Add(strComboboxItem);
                //    }

                //    // Make sure there is at least one pipe.
                //    if (pipeModelCount > 0)
                //    {
                //        toolStripComboBoxPipes.SelectedIndex = 0; ;
                //    }
                //}
            }
            else
            {
                // Must in monitor mode
                IRealtimeDataQuery dataQuery = IApp.theApp.RealTimeDataQuery;
                if (dataQuery != null && dataQuery.IsConnected)
                {
                    try
                    {
                        PipeInfo queryResult = dataQuery.FetchLatestData();

                        // Drive model
                        DriveModel(queryResult);
                    }
                    catch (Exception ex)
                    {
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }

                    dataQuery.Activate();
                }
            }
        }

        private void toolStripComboBoxPipes_SelectedIndexChanged(object sender, EventArgs e)
        {
            // Stop active command
            IApp.theApp.CommandManager.StopActiveCommand();

            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            // Force to stop the animation
            replayMode.ReplayAnimationEngine.StopAnimation();

            // if the selected index is -1, then we disable all the replay items.
            int iSelectedIndex = toolStripComboBoxPipes.SelectedIndex;
            bool bNoOneSelected = (iSelectedIndex == -1);
            foreach (ToolStripItem toolStripItem in toolStripReplay.Items)
            {
                toolStripItem.Enabled = !bNoOneSelected;
            }
            if (bNoOneSelected)
            {
                return;
            }

            // Update the start, stop
            toolStripButtonStartAnimation.Checked = false;
            toolStripButtonStartAnimation.Enabled = true;

            toolStripButtonPauseAnimation.Checked = false;
            toolStripButtonPauseAnimation.Enabled = false;

            toolStripButtonStopAnimation.Checked = false;
            toolStripButtonStopAnimation.Enabled = false;

            // Query the time
            DateTime beginingTime = DateTime.Now;
            DateTime endTime = DateTime.Now;

            IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;
            if (dataQuery != null && dataQuery.IsConnected)
            {
                try
                {
                    if (iSelectedIndex == 0) // View all pipes
                    {
                        // Must from the 1st pipe
                        beginingTime = dataQuery.GetPipeStartTime(1);

                        int pipeModelCount = IApp.theApp.DataModel.PipeModels.Count;
                        for (int i = pipeModelCount; i > 0; --i)
                        {
                            if (dataQuery.IsPipeStarted(i))
                            {
                                endTime = dataQuery.GetPipeEndTime(i);
                                break;
                            }
                        }
                    }
                    else
                    {
                        //// View specific pipe and Get all count
                        //trackRange[1] = (int)dataQuery.GetPipeRecordCount(iSelectedIndex); // iSelectedIndex should start from 1

                        // Get the beginning time
                        beginingTime = dataQuery.GetPipeStartTime(iSelectedIndex);

                        // Get the end time
                        endTime = dataQuery.GetPipeEndTime(iSelectedIndex);
                    }
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }

            // Set Range for the track bar
            // This logic is stated as below
            // If the total seconds of timespan is large than int.MaxValue, the int.MaxValue is used as the maximum range
            // If the total seconds of timespan is small than int.MaxValue, the total seconds will be used as the maximum range

            int[] trackRange = { 0, int.MaxValue };

            TimeSpan timeDuration = (endTime - beginingTime);
            double totalSeconds = timeDuration.TotalSeconds;

            if (totalSeconds > int.MaxValue)
            {
                trackRange[1] = int.MaxValue;
            }
            else
            {
                trackRange[1] = (int)totalSeconds;
            }
            if (trackRange[1] <= 0)
            {
                trackRange[1] = 100;
            }
            
            trackBarAnimation.SetRange(trackRange[0], trackRange[1]);
            trackBarAnimation.Value = trackRange[0];

            // Update the replay animation engine total progress
            replayMode.ReplayAnimationEngine.AnimationTotalProgress = trackRange[1];

            // Save the beginning time and end time
            replayMode.ReplayAnimationEngine.AnimationStartTime = beginingTime;
            replayMode.ReplayAnimationEngine.AnimationEndTime = endTime;

            // Update the render window
            if (dataQuery != null && dataQuery.IsConnected)
            {
                try
                {
                    PipeInfo pipeInfo = IApp.theApp.HistoryTimeDataQuery.GetPipeRecord(beginingTime, false);
                    DriveModel(pipeInfo);
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }

                // Update the animation label text
                UpdateAnimationLabelText();
            }
        }

        void aboutToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            // Pop up the about form dialog
            using (AboutBox aboutBox = new AboutBox())
            {
                aboutBox.ShowDialog();
            }
        }

        void toolsToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            bool bRecording = IApp.theApp.VideoWriter.IsRecording;
            startRecordAVIToolStripMenuItem.Enabled = !bRecording;
            stopRecordAVIToolStripMenuItem.Enabled = bRecording;
        }

        void stopRecordAVIToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string strFilePath = IApp.theApp.VideoWriter.FilePath;

            // End record
            IApp.theApp.VideoWriter.EndRecord();

            // Prompt the user to open that video
            if (File.Exists(strFilePath))
            {
                string strMessageText = string.Format(Resources.IDS_VIDEO_OUTPUT_SUCCEED, strFilePath);
                if (DialogResult.Yes == MessageBox.Show(strMessageText, this.Text, MessageBoxButtons.YesNo, MessageBoxIcon.Question))
                {
                    try
                    {
                        System.Diagnostics.Process.Start(strFilePath);
                    }
                    catch(Exception ex)
                    {
                        MessageBox.Show(string.Format(Resources.IDS_VIDEO_OPENFILE_FAIL, strFilePath), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
                        string errMsg = ex.Message + "\n" + ex.StackTrace;
                        vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    }
                }
            }
        }

        void startRecordAVIToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Pop up the file dilaog to get a file path
            SaveFileDialog saveDlg = new SaveFileDialog();
            saveDlg.Filter = Resources.IDS_AVI_FILTER;
            saveDlg.Title = Resources.IDS_VIDEO_TITLE;
            saveDlg.ShowDialog();

            // Start record
            if (!string.IsNullOrEmpty(saveDlg.FileName))
            {
                IApp.theApp.VideoWriter.FilePath = saveDlg.FileName;
                IApp.theApp.VideoWriter.StartRecord();
            }
        }

        /// <summary>
        /// This function is a callback to renderwindow' render event
        /// </summary>
        /// <param name="caller"></param>
        /// <param name="eventId"></param>
        /// <param name="clientData"></param>
        /// <param name="callData"></param>
        public void OnRenderCallback(vtk.vtkObject caller, uint eventId, object clientData, IntPtr callData)
        {
            // Update the connection indicator
            IList<CPipeConnectionPointPair> connectionPointPairList = null;
            if (CPipeConnetionUtility.CalcaulateConnection(IApp.theApp.DataDriven.CurrentData, out connectionPointPairList))
            {
                CPipeConnectionIndicator pipeConnectionIndicator = IApp.theApp.PipeConnectionIndicator;
                if (pipeConnectionIndicator != null)
                {
                    pipeConnectionIndicator.SetPoints(connectionPointPairList);
                    pipeConnectionIndicator.Impl.UpatePoints();
                }
            }

            // Update the Text Display
            CStatisticData statisticData = new CStatisticData();
            statisticData.ConnectionPointPairList = connectionPointPairList;

            IApp.theApp.StatisticTextDisplayer.DisplayText(statisticData.ToTextString());

            // Make sure we make the StatisticTextDisplayerAdditional appeal after the StatisticTextDisplayer
            IApp.theApp.StatisticTextDisplayerAdditional.DisplayText(statisticData.ToDataString());

            //// Update the WarningTextDisplayer
            //CAngleWarningData angleWarningData = new CAngleWarningData();
            //IApp.theApp.WarningTextDisplayer.DisplayText(angleWarningData.ToString());

            // Update the Video record
            if (IApp.theApp.VideoWriter.IsRecording)
            {
                IApp.theApp.VideoWriter.CaptureData();
            }

            // Update Renderer outline
            UpdateRendererOutline();
        }
        
        private void UpdateRendererOutline()
        {
            try
            {
                // main renderer
                UpdateRendererOutline(ref m_mainRenderOutlineActor, ref m_mainRenderOutlinePoints, IApp.theApp.RendererManager.MainRenderer);
                UpdateRendererOutline(ref m_topRenderOutlineActor, ref m_topRenderOutlinePoints, IApp.theApp.RendererManager.TopViewRenderer);
                UpdateRendererOutline(ref m_rightRenderOutlineActor, ref m_rightRenderOutlinePoints, IApp.theApp.RendererManager.RightViewRenderer);
                UpdateRendererOutline(ref m_frontRenderOutlineActor, ref m_frontRenderOutlinePoints, IApp.theApp.RendererManager.FrontViewRenderer);
            }
            catch (Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        private void UpdateRendererOutline(ref vtk.vtkActor2D outlineRendererActor, ref vtk.vtkPolyData polyData, vtk.vtkRenderer renderer)
        {
            if (outlineRendererActor == null)
            {
                outlineRendererActor = new vtk.vtkActor2D();

                polyData = new vtk.vtkPolyData();
                polyData.Allocate(5, 0);

                vtk.vtkIdList idList = new vtk.vtkIdList();
                idList.SetNumberOfIds(5);

                vtk.vtkPoints points = new vtk.vtkPoints();
                idList.InsertId(0, points.InsertNextPoint(1, 1, 0));
                idList.InsertId(1, points.InsertNextPoint(2, 1, 0));
                idList.InsertId(2, points.InsertNextPoint(2, 2, 0));
                idList.InsertId(3, points.InsertNextPoint(1, 2, 0));
                idList.InsertId(4, idList.GetId(0));

                polyData.SetPoints(points);
                polyData.InsertNextCell(4, idList);

                vtk.vtkCoordinate coordinate = new vtk.vtkCoordinate();
                coordinate.SetCoordinateSystemToDisplay();
                vtk.vtkPolyDataMapper2D mapper = new vtk.vtkPolyDataMapper2D();
                mapper.SetInput(polyData);
                mapper.SetTransformCoordinate(coordinate);

                outlineRendererActor.SetMapper(mapper);
                outlineRendererActor.SetPosition(0, 0);
                outlineRendererActor.SetPosition2(1, 1);

                renderer.AddActor(outlineRendererActor);
            }

            double[] vp = renderer.GetViewport();
            renderer.NormalizedDisplayToDisplay(ref vp[0], ref vp[1]);
            renderer.NormalizedDisplayToDisplay(ref vp[2], ref vp[3]);

            polyData.GetPoints().SetPoint(0, vp[0], vp[1], 0);
            polyData.GetPoints().SetPoint(1, vp[2], vp[1], 0);
            polyData.GetPoints().SetPoint(2, vp[2], vp[3], 0);
            polyData.GetPoints().SetPoint(3, vp[0], vp[3], 0);

            // Change Outline color and width
            double[] normalOutlineColor = ApplicationOptions.Instance().RendererLayoutOptions.NormalOutlineColor;
            float normalOutlineWidth = ApplicationOptions.Instance().RendererLayoutOptions.NormalOutlineLineWidth;

            if (renderer == IApp.theApp.RendererManager.ActiveRenderer)
            {
                normalOutlineColor = ApplicationOptions.Instance().RendererLayoutOptions.ActiveOutlineColor;
                normalOutlineWidth = ApplicationOptions.Instance().RendererLayoutOptions.ActiveOutlineLineWidth;
            }

            outlineRendererActor.GetProperty().SetColor(normalOutlineColor);
            outlineRendererActor.GetProperty().SetLineWidth(normalOutlineWidth);
        }

        private vtk.vtkActor2D m_mainRenderOutlineActor = null;
        private vtk.vtkActor2D m_topRenderOutlineActor = null;
        private vtk.vtkActor2D m_rightRenderOutlineActor = null;
        private vtk.vtkActor2D m_frontRenderOutlineActor = null;
        private vtk.vtkPolyData m_mainRenderOutlinePoints = null;
        private vtk.vtkPolyData m_topRenderOutlinePoints = null;
        private vtk.vtkPolyData m_frontRenderOutlinePoints = null;
        private vtk.vtkPolyData m_rightRenderOutlinePoints = null;

        void viewSpecificTimerScene_Click(object sender, EventArgs e)
        {
            // Date time variable
            DateTime dateTime = DateTime.Now;
            
            // Get the current scene pipe info
            PipeInfo currentPipeInfo = IApp.theApp.DataDriven.CurrentData;
            if (currentPipeInfo != null)
            {
                dateTime = currentPipeInfo.Time;
            }

            // Pop up the Specify timer dialog
            using (SpecifyTime form = new SpecifyTime())
            {
                form.InitialDateTime = dateTime;
                if (DialogResult.OK == form.ShowDialog())
                {
                    dateTime = form.SelectedDateTime;

                    // Update the scene
                    IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;

                    if (dataQuery != null && dataQuery.IsConnected)
                    {
                        try
                        {
                            PipeInfo pipeInfo = IApp.theApp.HistoryTimeDataQuery.GetPipeRecord(dateTime, true);
                            if (pipeInfo == null)
                            {
                                MessageBox.Show(Resources.IDS_NODATA_TO_TIME, this.Text);
                                return;
                            }

                            // Drive Pipe Index
                            if (toolStripComboBoxPipes.Items.Count > pipeInfo.PipeId)
                            {
                                toolStripComboBoxPipes.SelectedIndex = pipeInfo.PipeId;
                            }

                            // Update the track bar value
                            // How to get a track bar value by the date time
                            
                            // Drive Model
                            DriveModel(pipeInfo);

                            // Update Animation Text
                            UpdateAnimationLabelText();
                        }
                        catch (Exception ex)
                        {
                            MessageBox.Show(Resources.IDS_NODATA_TO_TIME, this.Text);
                            string errMsg = ex.Message + "\n" + ex.StackTrace;
                            vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                            return;
                        }
                    }
                }
            }
        }

        void showNonePipeObjects_Click(object sender, EventArgs e)
        {
            SetNonePipeObjectsVisiblity(showNonePipeObjects.Checked);
        }

        private void SetNonePipeObjectsVisiblity(bool bVisible)
        {
            // Visibility for none pipe models
            foreach (CStaticModel staticModel in IApp.theApp.DataModel.StaticsModels)
            {
                if (staticModel.ModelNode != null)
                {
                    staticModel.ModelNode.Visibility = bVisible;
                }
            }

            // Force to reset camera clipping range to avoid some models to be cut when switch this option.
            vtk.vtkRenderer MainRenderer = IApp.theApp.RendererManager.MainRenderer;
            MainRenderer.ResetCameraClippingRange();

            IApp.theApp.RenderScene();
            ApplicationOptions.Instance().ViewOptions.ShowNonePipeObjects = bVisible;
        }

        void showOrigin_Click(object sender, EventArgs e)
        {
            ShowOriginVisibility(showOrigin.Checked);
        }

        private void ShowOriginVisibility(bool bVisible)
        {
            ShowHideProp(originCaption, bVisible);
            IApp.theApp.RenderScene();
            ApplicationOptions.Instance().ViewOptions.ShowReferenceOrigin = bVisible;
        }

        void showWCS_Click(object sender, EventArgs e)
        {
            SetWCSVisibility(showWCS.Checked);
        }

        private void SetWCSVisibility(bool bVisible)
        {
            ApplicationOptions.Instance().ViewOptions.ShowCoordinateSystem = bVisible;

            // Update the visibility for different renderer layout
            // This is supposed be done in the derived class, but I don't have more time to refactor it.
            IRendererLayoutStrategy RendererLayoutStrategy = IApp.theApp.RendererManager.RendererLayoutStrategy;
            if (RendererLayoutStrategy is CMaximizeActiverRendererLayoutStrategy)
            {
                vtk.vtkRenderer activeRenderer = IApp.theApp.RendererManager.ActiveRenderer;

                ShowHideProp(axesWidgetaMain.GetOrientationMarker(), false);
                ShowHideProp(axesWidgetFrontView.GetOrientationMarker(), false);
                ShowHideProp(axesWidgetTopView.GetOrientationMarker(), false);
                ShowHideProp(axesWidgetRightView.GetOrientationMarker(), false);

                // Active One
                if (activeRenderer == IApp.theApp.RendererManager.MainRenderer)
                {
                    ShowHideProp(axesWidgetaMain.GetOrientationMarker(), bVisible);
                    axesWidgetaMain.SetViewport(0.0, 0.0, 0.25, 0.25);
                }
                else if (activeRenderer == IApp.theApp.RendererManager.TopViewRenderer)
                {
                    ShowHideProp(axesWidgetTopView.GetOrientationMarker(), bVisible);
                    axesWidgetTopView.SetViewport(0.0, 0.0, 0.25, 0.25);
                }
                else if (activeRenderer == IApp.theApp.RendererManager.FrontViewRenderer)
                {
                    ShowHideProp(axesWidgetFrontView.GetOrientationMarker(), bVisible);
                    axesWidgetFrontView.SetViewport(0.0, 0.0, 0.25, 0.25);
                }
                else if (activeRenderer == IApp.theApp.RendererManager.RightViewRenderer)
                {
                    ShowHideProp(axesWidgetRightView.GetOrientationMarker(), bVisible);
                    axesWidgetRightView.SetViewport(0.0, 0.0, 0.25, 0.25);
                }
            }
            else
            {
                ShowHideProp(axesWidgetaMain.GetOrientationMarker(), bVisible);
                ShowHideProp(axesWidgetFrontView.GetOrientationMarker(), bVisible);
                ShowHideProp(axesWidgetTopView.GetOrientationMarker(), bVisible);
                ShowHideProp(axesWidgetRightView.GetOrientationMarker(), bVisible);
            }
            IApp.theApp.RenderScene();
        }

        void showWarningTextDisplayer_Click(object sender, EventArgs e)
        {
            SetWarningTextDisplayerVisibility(showWarningTextDisplayer.Checked);
        }

        private void SetWarningTextDisplayerVisibility(bool bVisible)
        {
            //ShowHideProp(IApp.theApp.WarningTextDisplayer.TextActor, bVisible);
            //IApp.theApp.RenderScene();
            //ApplicationOptions.Instance().ViewOptions.ShowWarningText = bVisible;
        }

        void showStatisticTextDisplayer_Click(object sender, EventArgs e)
        {
            SetStatisticTextDisplayerVisibility(showStatisticTextDisplayer.Checked);
        }

        private void SetStatisticTextDisplayerVisibility(bool bVisible)
        {
            ShowHideProp(IApp.theApp.StatisticTextDisplayer.TextActor, bVisible);
            ShowHideProp(IApp.theApp.StatisticTextDisplayerAdditional.TextActor, bVisible);
            IApp.theApp.RenderScene();
            ApplicationOptions.Instance().ViewOptions.ShowDisplayStatiticsText = bVisible;
        }

        private void ShowHideProp(vtk.vtkProp prop, bool vis)
        {
            if (vis)
            {
                prop.VisibilityOn();
            }
            else
            {
                prop.VisibilityOff();
            }
        }

        void viewToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            // Visbility for parallel and pespective project
            vtk.vtkCamera activeCamera = IApp.theApp.RendererManager.ActiveRenderer.GetActiveCamera();
            showParallelCamera.Enabled = (activeCamera != null);
            showPerspectiveCamera.Enabled = (activeCamera != null);
            if (activeCamera != null)
            {
                showPerspectiveCamera.Checked = (activeCamera.GetParallelProjection() == 0);
                showParallelCamera.Checked = (activeCamera.GetParallelProjection() != 0);
            }

            // Visibility for statistic text displayer
            showStatisticTextDisplayer.Enabled = !(string.IsNullOrEmpty(IApp.theApp.StatisticTextDisplayer.TextActor.GetInput()));
            showStatisticTextDisplayer.Checked = (IApp.theApp.StatisticTextDisplayer.TextActor.GetVisibility() != 0);

            //// Visibility for statistic text displayer
            //showWarningTextDisplayer.Enabled = !(string.IsNullOrEmpty(IApp.theApp.WarningTextDisplayer.TextActor.GetInput()));
            //showWarningTextDisplayer.Checked = (IApp.theApp.WarningTextDisplayer.TextActor.GetVisibility() != 0);

            // Visibility for WCS
            showWCS.Checked = ApplicationOptions.Instance().ViewOptions.ShowCoordinateSystem;

            // Visibility for Origin
            showOrigin.Enabled = (originCaption != null);
            bool bOriginVisible = false;
            if (originCaption != null)
            {
                bOriginVisible = (originCaption.GetVisibility() != 0);
            }
            showOrigin.Checked = bOriginVisible;

            // Visibility for none pipe models
            // They should work at the same.
            showNonePipeObjects.Enabled = (IApp.theApp.DataModel.StaticsModels.Count != 0);
            bool bNonePipeObjectsVisbile = false;
            try
            {
                foreach (CStaticModel staticModel in IApp.theApp.DataModel.StaticsModels)
                {
                    if (staticModel.ModelNode.Visibility)
                    {
                        bNonePipeObjectsVisbile = true;
                        break;
                    }
                }
            }
            catch
            {
                bNonePipeObjectsVisbile = false;
            }
            showNonePipeObjects.Checked = bNonePipeObjectsVisbile; 

            // Renderer layout switch
            showActiveRendererMaximize.Visible = !(IApp.theApp.RendererManager.RendererLayoutStrategy is CMaximizeActiverRendererLayoutStrategy);
            showActiveRendererBackToOriginal.Visible = !(IApp.theApp.RendererManager.RendererLayoutStrategy is CRenderersLayoutStrategy);
        }

        private void showPerspectiveCamera_Click(object sender, EventArgs e)
        {
            SetPerspectiveCamera(true);
        }

        private void SetPerspectiveCamera(bool bPerspective)
        {
            // Visbility for parallel and pespective project
            vtk.vtkCamera activeCamera = IApp.theApp.RendererManager.ActiveRenderer.GetActiveCamera();
            if (activeCamera != null)
            {
                activeCamera.SetParallelProjection(bPerspective ? 0 : 1);
            }

            IApp.theApp.RenderScene();

            ApplicationOptions.Instance().ViewOptions.PerpectiveProjection = bPerspective;
        }

        private void showParallelCamera_Click(object sender, EventArgs e)
        {
            SetPerspectiveCamera(false);
        }

        private void SettingsMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kSettings, m_settingsMenuItem);
        }

        private void ConnectionSettingMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kConnectionSetting, m_connSettingMenuItem);
        }

        private void AngleWarningToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kAngleWarningConfig, AngleWarningToolStripMenuItem);
        }

        private void showActiveRendererMaximize_Click(object sender, EventArgs e)
        {
            CMaximizeActiverRendererLayoutStrategy maximizeActiverRenderLayoutStrategy = new CMaximizeActiverRendererLayoutStrategy(IApp.theApp.RendererManager);
            IApp.theApp.RendererManager.RendererLayoutStrategy = maximizeActiverRenderLayoutStrategy;
            UpdateWCS();
            IApp.theApp.RenderScene();
        }

        private void showActiveRendererBackToOriginal_Click(object sender, EventArgs e)
        {
            CRenderersLayoutStrategy renderersLayoutStrategy = new CRenderersLayoutStrategy(IApp.theApp.RendererManager);
            IApp.theApp.RendererManager.RendererLayoutStrategy = renderersLayoutStrategy;
            UpdateWCS();
            IApp.theApp.RenderScene();
        }

        private void fillToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kFillSimulation, sender);
        }

        private void fillToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            if (fillToolStripMenuItem.DropDownItems.Count != IApp.theApp.DataModel.PipeModels.Count)
            {
                fillToolStripMenuItem.DropDownItems.Clear();
                for (int iPipeIndex = 0; iPipeIndex < IApp.theApp.DataModel.PipeModels.Count; ++iPipeIndex)
                {
                    ToolStripMenuItem subMenuItem = new System.Windows.Forms.ToolStripMenuItem();
                    subMenuItem.Tag = iPipeIndex;
                    subMenuItem.Text = string.Format(Resources.IDS_PIPE_FILL_INDEX, iPipeIndex + 1);
                    //subMenuItem.CheckOnClick = true;

                    subMenuItem.Click += new EventHandler(fillToolStripMenuItem_Click);
                    this.fillToolStripMenuItem.DropDownItems.Add(subMenuItem);
                }
            }
        }

        private void processToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            fillToolStripMenuItem_DropDownOpening(fillToolStripMenuItem, null);
            zhujiangToolStripMenuItem_DropDownOpening(zhujiangToolStripMenuItem, null);
        }

        private void zhujiangToolStripMenuItem_Click(object sender, EventArgs e)
        {
            IApp.theApp.CommandManager.ExecuteCommand((ulong)CommandIds.kZhujiangSimulation, sender);
        }

        private void zhujiangToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            if (zhujiangToolStripMenuItem.DropDownItems.Count != IApp.theApp.DataModel.PipeModels.Count)
            {
                zhujiangToolStripMenuItem.DropDownItems.Clear();
                for (int iPipeIndex = 0; iPipeIndex < IApp.theApp.DataModel.PipeModels.Count; ++iPipeIndex)
                {
                    ToolStripMenuItem subMenuItem = new System.Windows.Forms.ToolStripMenuItem();
                    subMenuItem.Tag = iPipeIndex;
                    subMenuItem.Text = string.Format(Resources.IDS_PIPE_FILL_INDEX, iPipeIndex + 1);
                    //subMenuItem.CheckOnClick = true;

                    subMenuItem.Click += new EventHandler(zhujiangToolStripMenuItem_Click);
                    this.zhujiangToolStripMenuItem.DropDownItems.Add(subMenuItem);
                }
            }
        }

        private void showImmersingInformation_Click(object sender, EventArgs e)
        {
            if (m_immersingInformationForm == null)
            {
                m_immersingInformationForm = new ImmersingInformation();
                m_immersingInformationForm.UpdateData(IApp.theApp.DataDriven.CurrentData);
                m_immersingInformationForm.Show(this);
                m_immersingInformationForm.FormClosed += new FormClosedEventHandler(m_immersingInformationForm_FormClosed);
            }
            else
            {
                m_immersingInformationForm.Visible = !m_immersingInformationForm.Visible;
            }
        }

        void m_immersingInformationForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            m_immersingInformationForm.Dispose();
            m_immersingInformationForm = null;
        }
    }
}
