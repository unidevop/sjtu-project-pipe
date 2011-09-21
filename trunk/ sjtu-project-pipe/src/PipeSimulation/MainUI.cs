﻿using System;
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

namespace PipeSimulation
{
    public partial class MainUI : Form
    {
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
            t.SetFileName(System.IO.Path.GetTempPath() + /*MSG0*/"PipeSimulation.error");
            //t.SetAppend(1);
            vtk.vtkOutputWindow.SetInstance(t);
#endif

            InitializeComponent();
        }

        // Handle the OnIdle event
        public void OnIdle(object sender, EventArgs e)
        {
            // Update Obsever mode
            UpdateObserverMode();

            // Update Database Status
            UpdateDatabaseStatus();
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
            catch
            {
            }
        }

        private void UpdateDatabaseStatus()
        {
            // Get DataQuery
            IHistoryDataQuery hisDataQuery = IApp.theApp.HistoryTimeDataQuery;
            IRealtimeDataQuery realTimeDataQuery = IApp.theApp.RealTimeDataQuery;

            // Very low performance if the database is not connected
            //try
            //{
            //    if (IApp.theApp.ConnectionCfg.IsAutoConnect)
            //    {
            //        if (hisDataQuery != null && !hisDataQuery.IsConnected)
            //            hisDataQuery.Connect();

            //        if (realTimeDataQuery != null && !realTimeDataQuery.IsConnected)
            //        {
            //            realTimeDataQuery.Connect();

            //            if (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eMonitorMode)
            //                realTimeDataQuery.Activate();
            //        }
            //    }
            //}
            //catch
            //{
            //}

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
            catch
            {
            }
        }

        // Handler for form load
        private void MainForm_Load(object sender, EventArgs e)
        {
            // Initialize the IApp
            IApp.theApp = new AppImpl(this);

            // Initialize commands
            InitializeCommands();

            // Initalize the Data Query, must be called before InitializeObserverMode
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

            // Initialzie Observer mode
            InitializeObserverMode();
            
            SplashScreen.UdpateStatusText(Resources.IDS_START_APP);
            Thread.Sleep(1500);

            // Activate this form
            this.Activate();
            SplashScreen.CloseSplashScreen();

            // Set Maximized
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized; 
            this.Show();

            // Initialize the scene
            InitializeScene();
        }

        // Handler the form closing 
        private void MainUI_FormClosing(object sender, FormClosingEventArgs e)
        {
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

            // Step 3: Deinitialize the event and free the memory of our objects. to do...
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

            // Initialize the text for warning
            CTextSceneDisplayer warningTextDisplayer = IApp.theApp.WarningTextDisplayer as CTextSceneDisplayer;
            if (warningTextDisplayer != null)
            {
                warningTextDisplayer.Setup();
                warningTextDisplayer.TextActor.GetTextProperty().SetFontSize(18);
                warningTextDisplayer.TextActor.GetTextProperty().SetJustificationToRight();
                warningTextDisplayer.TextActor.GetTextProperty().SetVerticalJustificationToTop();
                warningTextDisplayer.TextActor.GetTextProperty().SetColor(1.0, 0.0, 0.0);
            }
            
            // Watch the size changed to reposition the text actors
            IApp.theApp.vtkControl.SizeChanged += OnControlSizeChanged;
        }

        void InitializeRenderWindow(vtk.vtkRenderWindow renWin)
        {
            CRendererManager renderManager = IApp.theApp.RendererManager as CRendererManager;
            if (renderManager == null) return;

            renderManager.ActiveRenderChanged += new CRendererManager.ActiveRenderChangedHandler(renderManager_ActiveRenderChanged);

            // Main Renderer
            vtk.vtkRenderer mainRenderer = renderManager.MainRenderer;
            mainRenderer.SetBackground(0.1f, 0.2f, 0.4f);
            renWin.AddRenderer(mainRenderer);

            // TopView Renderer
            vtk.vtkRenderer topViewRender = renderManager.TopViewRenderer;
            topViewRender.SetBackground(0.1f, 0.2f, 0.4f);
            renWin.AddRenderer(topViewRender);

            // Main Renderer
            vtk.vtkRenderer frontViewRenderer = renderManager.FrontViewRenderer;
            frontViewRenderer.SetBackground(0.1f, 0.2f, 0.4f);
            renWin.AddRenderer(frontViewRenderer);

            // Main Renderer
            vtk.vtkRenderer rightViewRenderer = renderManager.RightViewRenderer;
            rightViewRenderer.SetBackground(0.1f, 0.2f, 0.4f);
            renWin.AddRenderer(rightViewRenderer);

            // Set up layout strategy
            CRenderersLayoutStrategy renderersLayoutStrategy = new CRenderersLayoutStrategy(renderManager);
            IApp.theApp.vtkControl.SizeChanged += renderersLayoutStrategy.OnControlSizeChanged;
            renderManager.RendererLayoutStrategy = renderersLayoutStrategy;
        }

        void renderManager_ActiveRenderChanged(vtk.vtkRenderer previousRender, vtk.vtkRenderer newRenderer)
        {
            if (previousRender != null && previousRender.HasViewProp(m_activerRenderOutlineActor) != 0)
            {
                previousRender.RemoveViewProp(m_activerRenderOutlineActor);
            }

            if (newRenderer != null && previousRender.HasViewProp(m_activerRenderOutlineActor) == 0)
            {
                newRenderer.AddViewProp(m_activerRenderOutlineActor);
            }
        }

        protected void OnControlSizeChanged(object sender, EventArgs e)
        {
            UpdateWCS();

            Control control = sender as Control;
            if (control == null) return;

            vtk.vtkTextActor textActorStatistic = IApp.theApp.StatisticTextDisplayer.TextActor;
            vtk.vtkTextActor textActorWarning = IApp.theApp.WarningTextDisplayer.TextActor;

            Size sizeControl = control.Size;
            if (sizeControl.Width <= CTextSceneDisplayer.sMinX
            || sizeControl.Height <= CTextSceneDisplayer.sMinY)
            {
                textActorStatistic.VisibilityOff();
                textActorWarning.VisibilityOff();
            }
            else
            {
                textActorStatistic.VisibilityOn();
                textActorWarning.VisibilityOn();

                // Update statistic text display positon
                textActorStatistic.SetDisplayPosition(CTextSceneDisplayer.sMinX, (sizeControl.Height - CTextSceneDisplayer.sMinY));
                textActorWarning.SetDisplayPosition(sizeControl.Width - CTextSceneDisplayer.sMinX, (sizeControl.Height - CTextSceneDisplayer.sMinY));

                textActorStatistic.VisibilityOn();
                IApp.theApp.StatisticTextDisplayerAdditional.TextActor.SetDisplayPosition(CTextSceneDisplayer.sMinX + 110, (sizeControl.Height - CTextSceneDisplayer.sMinY));
            }

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
            }
            catch
            {
                MessageBox.Show(new Form(){TopMost = true}, Resources.IDS_ERROR_DATAENGINE_CONNECT, this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
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
                IApp.theApp.DataDriven.DriveModel(queryResult);
            }
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
            axesWidgetRightView.SetViewport(rightViewport[0], rightViewport[1], rightViewport[0]+0.08, rightViewport[1] + 0.2);
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
            IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().AddActor(originCaption);
        }

        private void InitializeScene()
        {
            // Initialize WCS
            UpdateWCS();

            // Initialize Reference Origin
            InitializeReferenceOrigin();

            // Let the scene show SW Isometric
            IApp.theApp.vtkControl.ShowSWIsoMetricView(IApp.theApp.RendererManager.MainRenderer);
            IApp.theApp.vtkControl.ShowTopView(IApp.theApp.RendererManager.TopViewRenderer);
            IApp.theApp.vtkControl.ShowFrontView(IApp.theApp.RendererManager.FrontViewRenderer);
            IApp.theApp.vtkControl.ShowRightView(IApp.theApp.RendererManager.RightViewRenderer);
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
            ObserverMode.ObserverMode eDefaultMode = ObserverMode.ObserverMode.eReplayMode;

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
            catch (SystemException)
            {
                MessageBox.Show(new Form(){TopMost = true}, string.Format(Resources.IDS_ERROR_LOAD_XML, xmlFile), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
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
            catch (SystemException)
            {
                MessageBox.Show(new Form(){TopMost = true}, Resources.IDS_ERROR_LOAD_MODEL, this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
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
                PipeInfo pipeInfo = dataQuery.GetPipeRecord(specificTime, false);

                // Drive the model
                IApp.theApp.DataDriven.DriveModel(pipeInfo);

                UpdateAnimationLabelText();
            }
        }

        private void UpdateAnimationLabelText()
        {
            // Get Current Record Index
            int iRecordIndex = trackBarAnimation.Value;
            string strAnimationTime = iRecordIndex.ToString();

            DateTime dateTime;

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
                    dateTime = (iRecordIndex != 0) ?
                        dataQuery.GetPipeTime(toolStripComboBoxPipes.SelectedIndex + 1, iRecordIndex) :
                        dataQuery.GetPipeStartTime(toolStripComboBoxPipes.SelectedIndex + 1);
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
            // CReplayMode.StartAnimation

            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.StartAnimation();
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
            // CReplayMode.StopAnimation

            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.StopAnimation();
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
                trackBarAnimation.Value = t;

                // Drive model
                DriveModeByTrackBarValue(replayMode, t);
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

                trackBarAnimation.Value = replayMode.ReplayAnimationEngine.AnimationProgress;
                UpdateAnimationLabelText();

                viewSpecificTimerScene.Enabled = true;
            }
        }

        private void observerManager_ModeChanged()
        {
            // Show/Hide the toolbar
            ObserverMode.ObserverMode mode = IApp.theApp.ObserverModeManager.ActiveModeType;

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
                    for (int i = 0; i < pipeModelCount; ++i)
                    {
                        if (dataQuery.IsPipeStarted(i + 1))
                        {
                            string strComboboxItem = string.Format(Resources.IDS_PIPE_INDEX, i + 1);
                            toolStripComboBoxPipes.Items.Add(strComboboxItem);
                        }
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
                    PipeInfo queryResult = dataQuery.FetchLatestData();

                    // Drive model
                    IApp.theApp.DataDriven.DriveModel(queryResult);

                    dataQuery.Activate();
                }
            }
        }

        private void toolStripComboBoxPipes_SelectedIndexChanged(object sender, EventArgs e)
        {
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
                    //// View specifc pipe and Get all count
                    //trackRange[1] = (int)dataQuery.GetPipeRecordCount(iSelectedIndex); // iSelectedIndex should start from 1

                    // Get the beginning time
                    beginingTime = dataQuery.GetPipeStartTime(iSelectedIndex);

                    // Get the end time
                    endTime = dataQuery.GetPipeEndTime(iSelectedIndex);
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
            
            trackBarAnimation.Value = trackRange[0];
            trackBarAnimation.SetRange(trackRange[0], trackRange[1]);

            // Update the replay animation engine total progress
            replayMode.ReplayAnimationEngine.AnimationTotalProgress = trackRange[1];

            // Save the beingging time and end time
            replayMode.ReplayAnimationEngine.AnimationStartTime = beginingTime;
            replayMode.ReplayAnimationEngine.AnimationEndTime = endTime;

            // Update the render window
            if (dataQuery != null && dataQuery.IsConnected)
            {
                PipeInfo pipeInfo = IApp.theApp.HistoryTimeDataQuery.GetPipeRecord(beginingTime, false);
                IApp.theApp.DataDriven.DriveModel(pipeInfo);

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
                    catch
                    {
                        
                        MessageBox.Show(string.Format(Resources.IDS_VIDEO_OPENFILE_FAIL, strFilePath), this.Text, MessageBoxButtons.OK, MessageBoxIcon.Error);
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
                pipeConnectionIndicator.Update(connectionPointPairList);

            }

            // Update the Text Display
            CStatisticData statisticData = new CStatisticData();
            statisticData.ConnectionPointPairList = connectionPointPairList;

            IApp.theApp.StatisticTextDisplayer.DisplayText(statisticData.ToTextString());

            // Make sure we make the StatisticTextDisplayerAdditional appeal after the StatisticTextDisplayer
            IApp.theApp.StatisticTextDisplayerAdditional.DisplayText(statisticData.ToDataString());

            // Update the WarningTextDisplayer
            CAngleWarningData angleWarningData = new CAngleWarningData();
            IApp.theApp.WarningTextDisplayer.DisplayText(angleWarningData.ToString());

            // Update the Video record
            if (IApp.theApp.VideoWriter.IsRecording)
            {
                IApp.theApp.VideoWriter.CaptureData();
            }

            // Draw a outline
            if (m_activerRenderOutlineActor == null)
            {
                m_activerRenderOutlineActor = new vtk.vtkActor2D();

                m_activerRenderOutlinePoints = new vtk.vtkPolyData();
                m_activerRenderOutlinePoints.Allocate(5, 0);
                //vtk.vtkIdTypeArray
                //m_activerRenderOutlinePoints.Allocate();

                vtk.vtkIdList idList = new vtk.vtkIdList();
                idList.SetNumberOfIds(5);
                
                vtk.vtkPoints points = new vtk.vtkPoints();
                idList.InsertId(0, points.InsertNextPoint(1, 1, 0));
                idList.InsertId(1, points.InsertNextPoint(2, 1, 0));
                idList.InsertId(2, points.InsertNextPoint(2, 2, 0));
                idList.InsertId(3, points.InsertNextPoint(1, 2, 0));
                idList.InsertId(4, idList.GetId(0));

                m_activerRenderOutlinePoints.SetPoints(points);
                m_activerRenderOutlinePoints.InsertNextCell(4, idList);

                vtk.vtkCoordinate coordinate = new vtk.vtkCoordinate();
                coordinate.SetCoordinateSystemToDisplay();
                vtk.vtkPolyDataMapper2D mapper = new vtk.vtkPolyDataMapper2D();
                mapper.SetInput(m_activerRenderOutlinePoints);
                mapper.SetTransformCoordinate(coordinate);

                m_activerRenderOutlineActor.SetMapper(mapper);
                m_activerRenderOutlineActor.SetPosition(0, 0);
                m_activerRenderOutlineActor.SetPosition2(1, 1);

                m_activerRenderOutlineActor.GetProperty().SetColor(1, 1, 0);
                m_activerRenderOutlineActor.GetProperty().SetLineWidth(3);
            }

            if (IApp.theApp.RendererManager.ActiveRenderer.HasViewProp(m_activerRenderOutlineActor) == 0)
            {
                IApp.theApp.RendererManager.ActiveRenderer.AddActor(m_activerRenderOutlineActor);
            }

            double[] vp = IApp.theApp.RendererManager.ActiveRenderer.GetViewport();
            IApp.theApp.RendererManager.ActiveRenderer.NormalizedDisplayToDisplay(ref vp[0], ref vp[1]);
            IApp.theApp.RendererManager.ActiveRenderer.NormalizedDisplayToDisplay(ref vp[2], ref vp[3]);

            m_activerRenderOutlinePoints.GetPoints().SetPoint(0, vp[0] + 1, vp[1] + 1, 0);
            m_activerRenderOutlinePoints.GetPoints().SetPoint(1, vp[2] - 1, vp[1] + 1, 0);
            m_activerRenderOutlinePoints.GetPoints().SetPoint(2, vp[2] - 1, vp[3] - 1, 0);
            m_activerRenderOutlinePoints.GetPoints().SetPoint(3, vp[0] + 1, vp[3] - 1, 0);
        }

        private vtk.vtkPolyData m_activerRenderOutlinePoints = null;
        private vtk.vtkActor2D m_activerRenderOutlineActor = null;

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
                            IApp.theApp.DataDriven.DriveModel(pipeInfo);

                            // Update Animation Text
                            UpdateAnimationLabelText();
                        }
                        catch (SystemException)
                        {
                            MessageBox.Show(Resources.IDS_NODATA_TO_TIME, this.Text);
                            return;
                        }
                    }
                }
            }
        }

        void showNonePipeObjects_Click(object sender, EventArgs e)
        {
            bool bChecked = showNonePipeObjects.Checked;

            // Visibility for none pipe models
            foreach (CStaticModel staticModel in IApp.theApp.DataModel.StaticsModels)
            {
                if (staticModel.ModelNode != null)
                {
                    staticModel.ModelNode.Visibility = bChecked;
                }
            }

            IApp.theApp.RenderScene();
        }

        void showOrigin_Click(object sender, EventArgs e)
        {
            if (null == originCaption) return;

            ShowHideProp(originCaption, showOrigin.Checked);
        }

        void showWCS_Click(object sender, EventArgs e)
        {
            bool bChecked = showWCS.Checked;
            if (axesWidgetaMain != null)
            {
                ShowHideProp(axesWidgetaMain.GetOrientationMarker(), bChecked);
            }
            if (axesWidgetFrontView != null)
            {
                ShowHideProp(axesWidgetFrontView.GetOrientationMarker(), bChecked);
            }
            if (axesWidgetTopView != null)
            {
                ShowHideProp(axesWidgetTopView.GetOrientationMarker(), bChecked);
            }
            if (axesWidgetRightView != null)
            {
                ShowHideProp(axesWidgetRightView.GetOrientationMarker(), bChecked);
            }
        }

        void showWarningTextDisplayer_Click(object sender, EventArgs e)
        {
            ShowHideProp(IApp.theApp.WarningTextDisplayer.TextActor, showWarningTextDisplayer.Checked);
        }

        void showStatisticTextDisplayer_Click(object sender, EventArgs e)
        {
            bool bChecked = showStatisticTextDisplayer.Checked;
            ShowHideProp(IApp.theApp.StatisticTextDisplayer.TextActor, bChecked);
            ShowHideProp(IApp.theApp.StatisticTextDisplayerAdditional.TextActor, bChecked);
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

            IApp.theApp.RenderScene();
        }

        void viewToolStripMenuItem_DropDownOpening(object sender, EventArgs e)
        {
            // Visbility for parallel and pespective project
            vtk.vtkCamera activeCamera = IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().GetActiveCamera();
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

            // Visibility for statistic text displayer
            showWarningTextDisplayer.Enabled = !(string.IsNullOrEmpty(IApp.theApp.WarningTextDisplayer.TextActor.GetInput()));
            showWarningTextDisplayer.Checked = (IApp.theApp.WarningTextDisplayer.TextActor.GetVisibility() != 0);

            // Visibility for WCS
            showWCS.Enabled = (axesWidgetaMain != null);
            bool bWCSVisible = false;
            if (axesWidgetaMain != null)
            {
                bWCSVisible = (axesWidgetaMain.GetOrientationMarker().GetVisibility() != 0);
            }
            showWCS.Checked = bWCSVisible;

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
        }

        private void showPerspectiveCamera_Click(object sender, EventArgs e)
        {
            // Visbility for parallel and pespective project
            vtk.vtkCamera activeCamera = IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().GetActiveCamera();
            if (activeCamera != null && activeCamera.GetParallelProjection() != 0)
            {
                activeCamera.SetParallelProjection(0);
            }

            IApp.theApp.RenderScene();
        }

        private void showParallelCamera_Click(object sender, EventArgs e)
        {
            // Visbility for parallel and pespective project
            vtk.vtkCamera activeCamera = IApp.theApp.RenderWindow.GetRenderers().GetFirstRenderer().GetActiveCamera();
            if (activeCamera != null && activeCamera.GetParallelProjection() == 0)
            {
                activeCamera.SetParallelProjection(1);
            }

            IApp.theApp.RenderScene();
        }

        private void ConnectionSettingMenuItem_Click(object sender, EventArgs e)
        {
            using (ConnectionSetting form = new ConnectionSetting())
            {
                if (DialogResult.OK == form.ShowDialog())
                {
                }
            }
        }

        private void AngleWarningToolStripMenuItem_Click(object sender, EventArgs e)
        {
            using (AngleWarningConfiguration configForm = new AngleWarningConfiguration())
            {
                configForm.ShowDialog();

                IApp.theApp.RenderScene();
            }
        }
    }
}
