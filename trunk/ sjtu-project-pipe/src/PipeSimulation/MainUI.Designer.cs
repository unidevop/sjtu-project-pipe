using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Printing;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;

using PipeSimulation.PipeApp;

namespace PipeSimulation
{
    partial class MainUI
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (components != null)
                    components.Dispose();

                if (IApp.theApp != null)
                {
                    IApp.theApp.Dispose();
                    IApp.theApp = null;
                }
            }
            base.Dispose(disposing);
        }


        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainUI));
            this.splitContainerMain = new System.Windows.Forms.SplitContainer();
            this.vtkFormsWindowControl = new vtk.vtkFormsWindowControl();
            this.toolStrip = new System.Windows.Forms.ToolStrip();
            this.toolStripRotate = new System.Windows.Forms.ToolStripButton();
            this.toolStripPan = new System.Windows.Forms.ToolStripButton();
            this.toolStripZoom = new System.Windows.Forms.ToolStripButton();
            this.toolStripZoomAll = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.toolStripTopView = new System.Windows.Forms.ToolStripButton();
            this.toolStripBottomView = new System.Windows.Forms.ToolStripButton();
            this.toolStripFrontView = new System.Windows.Forms.ToolStripButton();
            this.toolStripBackView = new System.Windows.Forms.ToolStripButton();
            this.toolStripLeftView = new System.Windows.Forms.ToolStripButton();
            this.toolStripRightView = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.toolStripSWIsoMetricView = new System.Windows.Forms.ToolStripButton();
            this.toolStripSEIsoMetricView = new System.Windows.Forms.ToolStripButton();
            this.toolStripNEIsoMetricView = new System.Windows.Forms.ToolStripButton();
            this.toolStripNWIsoMetricView = new System.Windows.Forms.ToolStripButton();
            this.menuStrip = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.AngleWarningToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();

            this.viewToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.showPerspectiveCamera = new System.Windows.Forms.ToolStripMenuItem();
            this.showParallelCamera = new System.Windows.Forms.ToolStripMenuItem();
            this.showStatisticTextDisplayer = new System.Windows.Forms.ToolStripMenuItem();
            this.showWarningTextDisplayer = new System.Windows.Forms.ToolStripMenuItem();
            this.showWCS = new System.Windows.Forms.ToolStripMenuItem();
            this.showNonePipeObjects = new System.Windows.Forms.ToolStripMenuItem();
            this.showOrigin = new System.Windows.Forms.ToolStripMenuItem();
            this.showActiveRendererMaximize = new System.Windows.Forms.ToolStripMenuItem();
            this.showActiveRendererBackToOriginal = new System.Windows.Forms.ToolStripMenuItem();

            this.modeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.monitorModeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.replayModeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.saveAsPNGToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.startRecordAVIToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.stopRecordAVIToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.showImmersingInformation = new System.Windows.Forms.ToolStripMenuItem();
            this.processToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.fillToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.zhujiangToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.helpToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusObserverMode = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusDatabaseStatus = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripReplay = new System.Windows.Forms.ToolStrip();
            this.toolStripComboBoxPipes = new System.Windows.Forms.ToolStripComboBox();
            this.toolStripSeparator3 = new System.Windows.Forms.ToolStripSeparator();
            this.toolStripButtonStartAnimation = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonPauseAnimation = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonStopAnimation = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonBegining = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonEnd = new System.Windows.Forms.ToolStripButton();
            this.viewSpecificTimerScene = new System.Windows.Forms.ToolStripButton();
            this.trackBarAnimation = new System.Windows.Forms.TrackBar();
            this.toolStripLabelAnimationTime = new System.Windows.Forms.ToolStripLabel();
            this.toolTipAnimation = new System.Windows.Forms.ToolTip(this.components);
            this.splitContainerMain.Panel2.SuspendLayout();
            this.toolStripSeparator4 = new System.Windows.Forms.ToolStripSeparator();
            this.toolStripSeparator5 = new System.Windows.Forms.ToolStripSeparator();
            this.m_connSettingMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.splitContainerMain.SuspendLayout();
            this.toolStrip.SuspendLayout();
            this.menuStrip.SuspendLayout();
            this.statusStrip1.SuspendLayout();
            this.toolStripReplay.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarAnimation)).BeginInit();
            this.SuspendLayout();
            // 
            // splitContainerMain
            // 
            this.splitContainerMain.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainerMain.Location = new System.Drawing.Point(0, 97);
            this.splitContainerMain.Name = "splitContainerMain";
            // 
            // splitContainerMain.Panel1
            // 
            this.splitContainerMain.Panel1.Controls.Add(this.vtkFormsWindowControl);
            // 
            // splitContainerMain.Panel2
            // 
            //this.splitContainerMain.Panel2.Controls.Add(this.richTextBox);
            //this.splitContainerMain.Panel2.Controls.Add(this.clearButton);
            //this.splitContainerMain.Size = new System.Drawing.Size(763, 464);
            //this.splitContainerMain.SplitterDistance = 540;
            //this.splitContainerMain.TabIndex = 0;
            //this.splitContainerMain.SplitterMoving += new System.Windows.Forms.SplitterCancelEventHandler(this.splitContainerMain_SplitterMoving);
            //this.splitContainerMain.SplitterMoved += new System.Windows.Forms.SplitterEventHandler(this.splitContainerMain_SplitterMoved);
            // 
            // 
            // vtkFormsWindowControl
            // 
            this.vtkFormsWindowControl.Dock = System.Windows.Forms.DockStyle.Fill;
            this.vtkFormsWindowControl.Location = new System.Drawing.Point(0, 0);
            this.vtkFormsWindowControl.Name = "vtkFormsWindowControl";
            this.vtkFormsWindowControl.Size = new System.Drawing.Size(297, 266);
            this.vtkFormsWindowControl.TabIndex = 0;
            this.vtkFormsWindowControl.Text = "vtkFormsWindowControl";
            // 
            // toolStrip
            // 
            this.toolStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripRotate,
            this.toolStripPan,
            this.toolStripZoom,
            this.toolStripZoomAll,
            this.toolStripSeparator1,
            this.toolStripTopView,
            this.toolStripBottomView,
            this.toolStripFrontView,
            this.toolStripBackView,
            this.toolStripLeftView,
            this.toolStripRightView,
            this.toolStripSeparator2,
            this.toolStripSWIsoMetricView,
            this.toolStripSEIsoMetricView,
            this.toolStripNEIsoMetricView,
            this.toolStripNWIsoMetricView});
            this.toolStrip.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStrip.Location = new System.Drawing.Point(0, 24);
            this.toolStrip.Name = "toolStrip";
            this.toolStrip.Size = new System.Drawing.Size(763, 64);
            this.toolStrip.TabIndex = 0;
            this.toolStrip.Text = "视图工具条";
            // 
            // toolStripRotate
            // 
            this.toolStripRotate.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripRotate.Image = global::PipeSimulation.Properties.Resources.NavBarOrbit;
            this.toolStripRotate.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripRotate.Name = "toolStripRotate";
            this.toolStripRotate.Size = new System.Drawing.Size(23, 22);
            this.toolStripRotate.Text = "旋转";
            this.toolStripRotate.ToolTipText = "旋转";
            this.toolStripRotate.Click += new System.EventHandler(this.toolStripRotate_Click);
            // 
            // toolStripPan
            // 
            this.toolStripPan.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripPan.Image = global::PipeSimulation.Properties.Resources.NavBarPan;
            this.toolStripPan.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripPan.Name = "toolStripPan";
            this.toolStripPan.Size = new System.Drawing.Size(23, 22);
            this.toolStripPan.Text = "平移";
            this.toolStripPan.ToolTipText = "平移";
            this.toolStripPan.Click += new System.EventHandler(this.toolStripPan_Click);
            // 
            // toolStripZoom
            // 
            this.toolStripZoom.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripZoom.Image = global::PipeSimulation.Properties.Resources.NavBarZoom;
            this.toolStripZoom.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripZoom.Name = "toolStripZoom";
            this.toolStripZoom.Size = new System.Drawing.Size(23, 22);
            this.toolStripZoom.Text = "缩放";
            this.toolStripZoom.ToolTipText = "缩放";
            this.toolStripZoom.Click += new System.EventHandler(this.toolStripZoom_Click);
            // 
            // toolStripZoomAll
            // 
            this.toolStripZoomAll.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripZoomAll.Image = global::PipeSimulation.Properties.Resources.NavBarZoomAll;
            this.toolStripZoomAll.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripZoomAll.Name = "toolStripZoomAll";
            this.toolStripZoomAll.Size = new System.Drawing.Size(23, 22);
            this.toolStripZoomAll.Text = "缩放全部";
            this.toolStripZoomAll.ToolTipText = "Z缩放全部";
            this.toolStripZoomAll.Click += new System.EventHandler(this.toolStripZoomAll_Click);
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(6, 25);
            // 
            // toolStripTopView
            // 
            this.toolStripTopView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripTopView.Image = global::PipeSimulation.Properties.Resources.TopView;
            this.toolStripTopView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripTopView.Name = "toolStripTopView";
            this.toolStripTopView.Size = new System.Drawing.Size(23, 22);
            this.toolStripTopView.Text = "俯视";
            this.toolStripTopView.ToolTipText = "查看俯视视图";
            this.toolStripTopView.Click += new System.EventHandler(this.toolStripTopView_Click);
            // 
            // toolStripBottomView
            // 
            this.toolStripBottomView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripBottomView.Image = global::PipeSimulation.Properties.Resources.BottomView;
            this.toolStripBottomView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripBottomView.Name = "toolStripBottomView";
            this.toolStripBottomView.Size = new System.Drawing.Size(23, 22);
            this.toolStripBottomView.Text = "仰视";
            this.toolStripBottomView.ToolTipText = "查看仰视视图";
            this.toolStripBottomView.Click += new System.EventHandler(this.toolStripBottomView_Click);
            // 
            // toolStripFrontView
            // 
            this.toolStripFrontView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripFrontView.Image = global::PipeSimulation.Properties.Resources.FrontView;
            this.toolStripFrontView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripFrontView.Name = "toolStripFrontView";
            this.toolStripFrontView.Size = new System.Drawing.Size(23, 22);
            this.toolStripFrontView.Text = "正视";
            this.toolStripFrontView.ToolTipText = "查看正视视图";
            this.toolStripFrontView.Click += new System.EventHandler(this.toolStripFrontView_Click);
            // 
            // toolStripBackView
            // 
            this.toolStripBackView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripBackView.Image = global::PipeSimulation.Properties.Resources.BackView;
            this.toolStripBackView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripBackView.Name = "toolStripBackView";
            this.toolStripBackView.Size = new System.Drawing.Size(23, 22);
            this.toolStripBackView.Text = "后视";
            this.toolStripBackView.ToolTipText = "查看后视视图";
            this.toolStripBackView.Click += new System.EventHandler(this.toolStripBackView_Click);
            // 
            // toolStripLeftView
            // 
            this.toolStripLeftView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripLeftView.Image = global::PipeSimulation.Properties.Resources.LeftView;
            this.toolStripLeftView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripLeftView.Name = "toolStripLeftView";
            this.toolStripLeftView.Size = new System.Drawing.Size(23, 22);
            this.toolStripLeftView.Text = "左视";
            this.toolStripLeftView.ToolTipText = "查看左视视图";
            this.toolStripLeftView.Click += new System.EventHandler(this.toolStripLeftView_Click);
            // 
            // toolStripRightView
            // 
            this.toolStripRightView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripRightView.Image = global::PipeSimulation.Properties.Resources.RightView;
            this.toolStripRightView.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripRightView.Name = "toolStripRightView";
            this.toolStripRightView.Size = new System.Drawing.Size(23, 22);
            this.toolStripRightView.Text = "右视";
            this.toolStripRightView.ToolTipText = "查看右视视图";
            this.toolStripRightView.Click += new System.EventHandler(this.toolStripRightView_Click);
            // 
            // toolStripSeparator2
            // 
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            this.toolStripSeparator2.Size = new System.Drawing.Size(6, 25);
            // 
            // toolStripSWIsoMetricView
            // 
            this.toolStripSWIsoMetricView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripSWIsoMetricView.Image = global::PipeSimulation.Properties.Resources.SWIsoMetric;
            this.toolStripSWIsoMetricView.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripSWIsoMetricView.Name = "toolStripSWIsoMetricView";
            this.toolStripSWIsoMetricView.Size = new System.Drawing.Size(23, 22);
            this.toolStripSWIsoMetricView.Text = "西南等轴测视图";
            this.toolStripSWIsoMetricView.ToolTipText = "查看西南等轴测视图";
            this.toolStripSWIsoMetricView.Click += new System.EventHandler(this.toolStripSWIsoMetricView_Click);
            // 
            // toolStripSEIsoMetricView
            // 
            this.toolStripSEIsoMetricView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripSEIsoMetricView.Image = global::PipeSimulation.Properties.Resources.SEIsoMetric;
            this.toolStripSEIsoMetricView.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripSEIsoMetricView.Name = "toolStripSEIsoMetricView";
            this.toolStripSEIsoMetricView.Size = new System.Drawing.Size(23, 22);
            this.toolStripSEIsoMetricView.Text = "东南等轴测视图";
            this.toolStripSEIsoMetricView.ToolTipText = "查看东南等轴测视图";
            this.toolStripSEIsoMetricView.Click += new System.EventHandler(this.toolStripSEIsoMetricView_Click);
            // 
            // toolStripNEIsoMetricView
            // 
            this.toolStripNEIsoMetricView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripNEIsoMetricView.Image = global::PipeSimulation.Properties.Resources.NEIsoMetric;
            this.toolStripNEIsoMetricView.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripNEIsoMetricView.Name = "toolStripNEIsoMetricView";
            this.toolStripNEIsoMetricView.Size = new System.Drawing.Size(23, 22);
            this.toolStripNEIsoMetricView.Text = "东北等轴测视图";
            this.toolStripNEIsoMetricView.ToolTipText = "查看东北等轴测视图";
            this.toolStripNEIsoMetricView.Click += new System.EventHandler(this.toolStripNEIsoMetricView_Click);
            // 
            // toolStripNWIsoMetricView
            // 
            this.toolStripNWIsoMetricView.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripNWIsoMetricView.Image = global::PipeSimulation.Properties.Resources.NWIsoMetric;
            this.toolStripNWIsoMetricView.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripNWIsoMetricView.Name = "toolStripNWIsoMetricView";
            this.toolStripNWIsoMetricView.Size = new System.Drawing.Size(23, 22);
            this.toolStripNWIsoMetricView.Text = "西北等轴测视图";
            this.toolStripNWIsoMetricView.ToolTipText = "查看西北等轴测视图";
            this.toolStripNWIsoMetricView.Click += new System.EventHandler(this.toolStripNWIsoMetricView_Click);
            // 
            // menuStrip
            // 
            this.menuStrip.GripStyle = System.Windows.Forms.ToolStripGripStyle.Visible;
            this.menuStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.viewToolStripMenuItem,
            //this.modeToolStripMenuItem,
            this.processToolStripMenuItem,
            this.toolsToolStripMenuItem,
            this.aboutToolStripMenuItem});
            this.menuStrip.Location = new System.Drawing.Point(0, 0);
            this.menuStrip.Name = "menuStrip";
            this.menuStrip.Size = new System.Drawing.Size(763, 24);
            this.menuStrip.TabIndex = 2;
            this.menuStrip.Text = "菜单工具条";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            m_connSettingMenuItem,this.AngleWarningToolStripMenuItem, toolStripSeparator4, this.exitToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "系统(&S)";
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(92, 22);
            this.exitToolStripMenuItem.Text = "退出(&x)";
            this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitToolStripMenuItem_Click);
            this.exitToolStripMenuItem.ShortcutKeys = Keys.Alt | Keys.F4;
            // 
            // AngleWarningToolStripMenuItem
            // 
            this.AngleWarningToolStripMenuItem.Name = "AngleWarningToolStripMenuItem";
            this.AngleWarningToolStripMenuItem.Size = new System.Drawing.Size(92, 22);
            this.AngleWarningToolStripMenuItem.Text = "倾角预警信息配置";
            this.AngleWarningToolStripMenuItem.Click += new System.EventHandler(this.AngleWarningToolStripMenuItem_Click);
            // 
            // modeToolStripMenuItem
            // 
            this.modeToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.monitorModeToolStripMenuItem,
            this.replayModeToolStripMenuItem,
            this.showImmersingInformation});
            this.modeToolStripMenuItem.Name = "modeToolStripMenuItem";
            this.modeToolStripMenuItem.Size = new System.Drawing.Size(50, 20);
            this.modeToolStripMenuItem.Text = "沉放过程";
            this.modeToolStripMenuItem.DropDownOpening += new System.EventHandler(this.modeToolStripMenuItem_DropDownOpening);
            // 
            // monitorModeToolStripMenuItem
            // 
            this.monitorModeToolStripMenuItem.Name = "monitorModeToolStripMenuItem";
            this.monitorModeToolStripMenuItem.Size = new System.Drawing.Size(151, 22);
            this.monitorModeToolStripMenuItem.Text = "实时监听模式";
            this.monitorModeToolStripMenuItem.Click += new System.EventHandler(this.monitorModeToolStripMenuItem_Click);
            this.monitorModeToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.M;
            // 
            // replayModeToolStripMenuItem
            // 
            this.replayModeToolStripMenuItem.Name = "replayModeToolStripMenuItem";
            this.replayModeToolStripMenuItem.Size = new System.Drawing.Size(151, 22);
            this.replayModeToolStripMenuItem.Text = "回放模式";
            this.replayModeToolStripMenuItem.Click += new System.EventHandler(this.replayModeToolStripMenuItem_Click);
            this.replayModeToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.R;
            // 
            // showImmersingInformation
            // 
            this.showImmersingInformation.Name = "showImmersingInformation";
            this.showImmersingInformation.Size = new System.Drawing.Size(151, 22);
            this.showImmersingInformation.Text = "查看详细沉放信息";
            this.showImmersingInformation.Click += new System.EventHandler(this.showImmersingInformation_Click);
            this.showImmersingInformation.ShortcutKeys = Keys.Control | Keys.I;
            // 
            // viewToolStripMenuItem
            // 
            this.viewToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.showParallelCamera,
            this.showPerspectiveCamera,
            this.toolStripSeparator5,
            this.showStatisticTextDisplayer,
            this.showWarningTextDisplayer,
            this.showWCS,
            this.showNonePipeObjects,
            this.showOrigin,
            this.showActiveRendererMaximize,
            this.showActiveRendererBackToOriginal});
            this.viewToolStripMenuItem.Name = "viewToolStripMenuItem";
            this.viewToolStripMenuItem.Size = new System.Drawing.Size(50, 20);
            this.viewToolStripMenuItem.Text = "视图(&V)";
            this.viewToolStripMenuItem.DropDownOpening += new EventHandler(viewToolStripMenuItem_DropDownOpening);
            // 
            // showParallelCamera
            // 
            this.showParallelCamera.Name = "showParallelCamera";
            this.showParallelCamera.Size = new System.Drawing.Size(151, 22);
            this.showParallelCamera.Text = "正视投影";
            this.showParallelCamera.Click += new EventHandler(showParallelCamera_Click);
            this.showParallelCamera.ShortcutKeys = Keys.Control | Keys.O;
            // 
            // showPerspectiveCamera
            // 
            this.showPerspectiveCamera.Name = "showPerspectiveCamera";
            this.showPerspectiveCamera.Size = new System.Drawing.Size(151, 22);
            this.showPerspectiveCamera.Text = "透视投影";
            this.showPerspectiveCamera.Click += new EventHandler(showPerspectiveCamera_Click);
            this.showPerspectiveCamera.ShortcutKeys = Keys.Control | Keys.P;
            // 
            // showStatisticTextDisplayer
            // 
            this.showStatisticTextDisplayer.Name = "showStatisticTextDisplayer";
            this.showStatisticTextDisplayer.Size = new System.Drawing.Size(151, 22);
            this.showStatisticTextDisplayer.Text = "显隐统计文本";
            this.showStatisticTextDisplayer.Click += new EventHandler(showStatisticTextDisplayer_Click);
            this.showStatisticTextDisplayer.ShortcutKeys = Keys.Control | Keys.D1;
            this.showStatisticTextDisplayer.CheckOnClick = true;
            // 
            // showWarningTextDisplayer
            // 
            this.showWarningTextDisplayer.Name = "showWarningTextDisplayer";
            this.showWarningTextDisplayer.Size = new System.Drawing.Size(151, 22);
            this.showWarningTextDisplayer.Text = "显隐报警文本";
            this.showWarningTextDisplayer.Click += new EventHandler(showWarningTextDisplayer_Click);
            this.showWarningTextDisplayer.ShortcutKeys = Keys.Control | Keys.D2;
            this.showWarningTextDisplayer.CheckOnClick = true;
            // 
            // showWCS
            // 
            this.showWCS.Name = "showWCS";
            this.showWCS.Size = new System.Drawing.Size(151, 22);
            this.showWCS.Text = "显隐坐标系";
            this.showWCS.Click += new EventHandler(showWCS_Click);
            this.showWCS.ShortcutKeys = Keys.Control | Keys.D3;
            this.showWCS.CheckOnClick = true;
            // 
            // showNonePipeObjects
            // 
            this.showNonePipeObjects.Name = "showNonePipeObjects";
            this.showNonePipeObjects.Size = new System.Drawing.Size(151, 22);
            this.showNonePipeObjects.Text = "显隐非沉管物体";
            this.showNonePipeObjects.Click += new EventHandler(showNonePipeObjects_Click);
            this.showNonePipeObjects.ShortcutKeys = Keys.Control | Keys.D4;
            this.showNonePipeObjects.CheckOnClick = true;
            // 
            // showOrigin
            // 
            this.showOrigin.Name = "showOrigin";
            this.showOrigin.Size = new System.Drawing.Size(151, 22);
            this.showOrigin.Text = "显隐参考原点";
            this.showOrigin.Click += new EventHandler(showOrigin_Click);
            this.showOrigin.ShortcutKeys = Keys.Control | Keys.D5;
            this.showOrigin.CheckOnClick = true;

            // 
            // showActiveRendererMaximize
            // 
            this.showActiveRendererMaximize.Name = "showActiveRendererMaximize";
            this.showActiveRendererMaximize.Size = new System.Drawing.Size(151, 22);
            this.showActiveRendererMaximize.Text = "最大化当前视角";
            this.showActiveRendererMaximize.Click += new EventHandler(showActiveRendererMaximize_Click);
            this.showActiveRendererMaximize.ShortcutKeys = Keys.Control | Keys.Shift | Keys.M;
            this.showActiveRendererMaximize.CheckOnClick = true;
            this.showActiveRendererMaximize.Visible = false;
            // 
            // showActiveRendererBackToOriginal
            // 
            this.showActiveRendererBackToOriginal.Name = "showActiveRendererBackToOriginal";
            this.showActiveRendererBackToOriginal.Size = new System.Drawing.Size(151, 22);
            this.showActiveRendererBackToOriginal.Text = "还原当前视角";
            this.showActiveRendererBackToOriginal.Click += new EventHandler(showActiveRendererBackToOriginal_Click);
            this.showActiveRendererBackToOriginal.ShortcutKeys = Keys.Control | Keys.Shift | Keys.B;
            this.showActiveRendererBackToOriginal.CheckOnClick = true;
            this.showActiveRendererBackToOriginal.Visible = false;
            // 
            // toolsToolStripMenuItem
            // 
            this.toolsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.saveAsPNGToolStripMenuItem,
            this.startRecordAVIToolStripMenuItem,
            this.stopRecordAVIToolStripMenuItem});
            this.toolsToolStripMenuItem.Name = "toolsToolStripMenuItem";
            this.toolsToolStripMenuItem.Size = new System.Drawing.Size(48, 20);
            this.toolsToolStripMenuItem.Text = "辅助工具(&T)";
            this.toolsToolStripMenuItem.DropDownOpening += new EventHandler(toolsToolStripMenuItem_DropDownOpening);
            // 
            // saveAsPNGToolStripMenuItem
            // 
            this.saveAsPNGToolStripMenuItem.Name = "saveAsPNGToolStripMenuItem";
            this.saveAsPNGToolStripMenuItem.Size = new System.Drawing.Size(154, 22);
            this.saveAsPNGToolStripMenuItem.Text = "截取当前屏幕";
            this.saveAsPNGToolStripMenuItem.Click += new System.EventHandler(this.saveAsPNGToolStripMenuItem_Click);
            this.saveAsPNGToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.P;
            // 
            // startRecordAVIToolStripMenuItem
            // 
            this.startRecordAVIToolStripMenuItem.Name = "startRecordAVIToolStripMenuItem";
            this.startRecordAVIToolStripMenuItem.Size = new System.Drawing.Size(154, 22);
            this.startRecordAVIToolStripMenuItem.Text = "开始录制视频";
            this.startRecordAVIToolStripMenuItem.Click += new EventHandler(startRecordAVIToolStripMenuItem_Click);
            //this.startRecordAVIToolStripMenuItem.Image = global::PipeSimulation.Properties.Resources.record_icon;
            this.startRecordAVIToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.R;
            // 
            // stopRecordAVIToolStripMenuItem
            // 
            this.stopRecordAVIToolStripMenuItem.Name = "stopRecordAVIToolStripMenuItem";
            this.stopRecordAVIToolStripMenuItem.Size = new System.Drawing.Size(154, 22);
            this.stopRecordAVIToolStripMenuItem.Text = "停止录制视频";
            this.stopRecordAVIToolStripMenuItem.Click += new EventHandler(stopRecordAVIToolStripMenuItem_Click);
            this.stopRecordAVIToolStripMenuItem.ShortcutKeys = Keys.Control | Keys.E;
            // 
            // processToolStripMenuItem
            // 
            this.processToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.modeToolStripMenuItem, this.fillToolStripMenuItem, this.zhujiangToolStripMenuItem});
            this.processToolStripMenuItem.Name = "processToolStripMenuItem";
            this.processToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.processToolStripMenuItem.Text = "工艺过程(&P)";
            // 
            // fillToolStripMenuItem
            // 
            this.fillToolStripMenuItem.Name = "fillToolStripMenuItem";
            this.fillToolStripMenuItem.Size = new System.Drawing.Size(107, 22);
            this.fillToolStripMenuItem.Text = "回填模拟";
            this.fillToolStripMenuItem.Click += new EventHandler(fillToolStripMenuItem_Click);
            //this.fillToolStripMenuItem.ShortcutKeys = Keys.F1;
            // 
            // zhujiangToolStripMenuItem
            // 
            this.zhujiangToolStripMenuItem.Name = "zhujiangToolStripMenuItem";
            this.zhujiangToolStripMenuItem.Size = new System.Drawing.Size(107, 22);
            this.zhujiangToolStripMenuItem.Text = "注浆模拟";
            this.zhujiangToolStripMenuItem.Click += new EventHandler(zhujiangToolStripMenuItem_Click);
            //this.fillToolStripMenuItem.ShortcutKeys = Keys.F1;
            // 
            // aboutToolStripMenuItem
            // 
            this.aboutToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.helpToolStripMenuItem,
            this.aboutToolStripMenuItem1});
            this.aboutToolStripMenuItem.Name = "aboutToolStripMenuItem";
            this.aboutToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.aboutToolStripMenuItem.Text = "帮助(&H)";
            // 
            // helpToolStripMenuItem
            // 
            this.helpToolStripMenuItem.Name = "helpToolStripMenuItem";
            this.helpToolStripMenuItem.Size = new System.Drawing.Size(107, 22);
            this.helpToolStripMenuItem.Text = "帮助";
            this.helpToolStripMenuItem.ShortcutKeys = Keys.F1;
            // 
            // aboutToolStripMenuItem1
            // 
            this.aboutToolStripMenuItem1.Name = "aboutToolStripMenuItem1";
            this.aboutToolStripMenuItem1.Size = new System.Drawing.Size(107, 22);
            this.aboutToolStripMenuItem1.Text = "关于(&A)";
            this.aboutToolStripMenuItem1.Click += new EventHandler(aboutToolStripMenuItem1_Click);
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel, this.toolStripStatusDatabaseStatus, this.toolStripStatusObserverMode});
            this.statusStrip1.Location = new System.Drawing.Point(0, 539);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(763, 22);
            this.statusStrip1.TabIndex = 3;
            this.statusStrip1.Text = "状态工具栏";
            // 
            // toolStripStatusLabel
            // 
            this.toolStripStatusLabel.Name = "toolStripStatusLabel";
            this.toolStripStatusLabel.Size = new System.Drawing.Size(300, 17);
            this.toolStripStatusLabel.AutoSize = false;
            this.toolStripStatusLabel.TextAlign = ContentAlignment.MiddleLeft;
            this.toolStripStatusLabel.Text = "准备就绪";
            this.toolStripStatusLabel.Spring = true;
            // 
            // toolStripStatusDatabaseStatus;
            // 
            this.toolStripStatusDatabaseStatus.Name = "toolStripStatusLabe3";
            this.toolStripStatusDatabaseStatus.Size = new System.Drawing.Size(130, 17);
            this.toolStripStatusDatabaseStatus.Text = "";
            this.toolStripStatusDatabaseStatus.BorderSides = ToolStripStatusLabelBorderSides.All;
            this.toolStripStatusDatabaseStatus.BorderStyle = Border3DStyle.SunkenInner;
            this.toolStripStatusDatabaseStatus.AutoSize = true;
            this.toolStripStatusDatabaseStatus.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // toolStripStatusObserverMode;
            // 
            this.toolStripStatusObserverMode.Name = "toolStripStatusLabe2";
            this.toolStripStatusObserverMode.Size = new System.Drawing.Size(80, 17);
            this.toolStripStatusObserverMode.Text = "";
            this.toolStripStatusObserverMode.BorderSides = ToolStripStatusLabelBorderSides.All;
            this.toolStripStatusObserverMode.BorderStyle = Border3DStyle.SunkenInner;
            this.toolStripStatusObserverMode.AutoSize = true;
            this.toolStripStatusObserverMode.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // toolStripReplay
            // 
            this.toolStripReplay.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripComboBoxPipes,
            this.toolStripSeparator3,
            this.toolStripButtonStartAnimation,
            this.toolStripButtonPauseAnimation,
            this.toolStripButtonStopAnimation,
            this.toolStripButtonBegining,
            this.toolStripButtonEnd,
            new System.Windows.Forms.ToolStripControlHost(this.trackBarAnimation, this.trackBarAnimation.Name),
            this.toolStripLabelAnimationTime,
            this.toolStripSeparator3,
            this.viewSpecificTimerScene});
            this.toolStripReplay.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStripReplay.Location = new System.Drawing.Point(0, 49);
            this.toolStripReplay.Name = "toolStripReplay";
            this.toolStripReplay.Size = new System.Drawing.Size(763, 48);
            this.toolStripReplay.TabIndex = 4;
            this.toolStripReplay.Text = "回放工具栏";
            // 
            // toolStripComboBoxPipes
            // 
            this.toolStripComboBoxPipes.Items.AddRange(new object[] { });
            this.toolStripComboBoxPipes.MaxDropDownItems = 80;
            this.toolStripComboBoxPipes.Name = "toolStripComboBoxPipes";
            this.toolStripComboBoxPipes.Size = new System.Drawing.Size(160, 48);
            this.toolStripComboBoxPipes.AutoSize = true;
            this.toolStripComboBoxPipes.DropDownStyle = ComboBoxStyle.DropDownList;
            this.toolStripComboBoxPipes.SelectedIndexChanged += new EventHandler(toolStripComboBoxPipes_SelectedIndexChanged);
            this.toolStripComboBoxPipes.FlatStyle = FlatStyle.Standard;
            // 
            // toolStripSeparator3
            // 
            this.toolStripSeparator3.Name = "toolStripSeparator3";
            this.toolStripSeparator3.Size = new System.Drawing.Size(6, 48);
            // 
            // toolStripButtonStartAnimation
            // 
            this.toolStripButtonStartAnimation.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonStartAnimation.Image = global::PipeSimulation.Properties.Resources.StartAnimation;
            this.toolStripButtonStartAnimation.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripButtonStartAnimation.Name = "toolStripButtonStartAnimation";
            this.toolStripButtonStartAnimation.Size = new System.Drawing.Size(23, 45);
            this.toolStripButtonStartAnimation.Text = "播放";
            this.toolStripButtonStartAnimation.Click += new EventHandler(toolStripButtonStartAnimation_Click);
            // 
            // toolStripButtonPauseAnimation
            // 
            this.toolStripButtonPauseAnimation.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonPauseAnimation.Image = global::PipeSimulation.Properties.Resources.PauseAnimation;
            this.toolStripButtonPauseAnimation.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripButtonPauseAnimation.Name = "toolStripButtonPauseAnimation";
            this.toolStripButtonPauseAnimation.Size = new System.Drawing.Size(23, 45);
            this.toolStripButtonPauseAnimation.Text = "暂停";
            this.toolStripButtonPauseAnimation.Click += new EventHandler(toolStripButtonPauseAnimation_Click);
            // 
            // toolStripButtonStopAnimation
            // 
            this.toolStripButtonStopAnimation.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonStopAnimation.Image = global::PipeSimulation.Properties.Resources.StopAnimation;
            this.toolStripButtonStopAnimation.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripButtonStopAnimation.Name = "toolStripButtonStopAnimation";
            this.toolStripButtonStopAnimation.Size = new System.Drawing.Size(23, 45);
            this.toolStripButtonStopAnimation.Text = "停止";
            this.toolStripButtonStopAnimation.Click += new EventHandler(toolStripButtonStopAnimation_Click);
            // 
            // toolStripButtonBegining
            // 
            this.toolStripButtonBegining.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonBegining.Image = global::PipeSimulation.Properties.Resources.BeginingAnimation;
            this.toolStripButtonBegining.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripButtonBegining.Name = "toolStripButtonBegining";
            this.toolStripButtonBegining.Size = new System.Drawing.Size(23, 45);
            this.toolStripButtonBegining.Text = "最前";
            this.toolStripButtonBegining.Click += new EventHandler(toolStripButtonBegining_Click);
            // 
            // toolStripButtonEnd
            // 
            this.toolStripButtonEnd.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonEnd.Image = global::PipeSimulation.Properties.Resources.EndAnimation;
            this.toolStripButtonEnd.ImageTransparentColor = System.Drawing.Color.White;
            this.toolStripButtonEnd.Name = "toolStripButtonEnd";
            this.toolStripButtonEnd.Size = new System.Drawing.Size(60, 80);
            this.toolStripButtonEnd.Text = "最后";
            this.toolStripButtonEnd.Click += new EventHandler(toolStripButtonEnd_Click);
            // 
            // viewSpecificTimerScene
            // 
            this.viewSpecificTimerScene.DisplayStyle = ToolStripItemDisplayStyle.Text;
            this.viewSpecificTimerScene.Name = "viewSpecificTimerScene";
            this.viewSpecificTimerScene.Size = new System.Drawing.Size(40, 45);
            this.viewSpecificTimerScene.Text = "查看任意时刻";
            this.viewSpecificTimerScene.Click += new EventHandler(viewSpecificTimerScene_Click);
            // 
            // trackBarAnimation
            // 
            this.trackBarAnimation.Location = new System.Drawing.Point(230, 1);
            this.trackBarAnimation.Name = "trackBarAnimation";
            this.trackBarAnimation.AutoSize = false;
            this.trackBarAnimation.Size = new System.Drawing.Size(186, 10);
            this.trackBarAnimation.TabIndex = 0;
            this.trackBarAnimation.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarAnimation.Value = 3;
            this.trackBarAnimation.Scroll += new System.EventHandler(this.trackBarAnimation_Scroll);
            this.trackBarAnimation.BackColor = Color.White;
            // 
            // toolStripLabelAnimationTime
            // 
            this.toolStripLabelAnimationTime.Name = "toolStripLabelAnimationTime";
            this.toolStripLabelAnimationTime.Size = new System.Drawing.Size(86, 45);
            this.toolStripLabelAnimationTime.Text = "";
            // 
            // toolTipAnimation
            // 
            this.toolTipAnimation.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(10)))));
            this.toolTipAnimation.IsBalloon = true;
            // 
            // toolStripSeparator4
            // 
            this.toolStripSeparator4.AccessibleDescription = null;
            this.toolStripSeparator4.AccessibleName = null;
            resources.ApplyResources(this.toolStripSeparator4, "toolStripSeparator4");
            this.toolStripSeparator4.Name = "toolStripSeparator4";
            // 
            // toolStripSeparator5
            // 
            this.toolStripSeparator5.AccessibleDescription = null;
            this.toolStripSeparator5.AccessibleName = null;
            resources.ApplyResources(this.toolStripSeparator5, "toolStripSeparator5");
            this.toolStripSeparator5.Name = "toolStripSeparator5";
            // 
            // m_connSettingMenuItem
            // 
            this.m_connSettingMenuItem.AccessibleDescription = null;
            this.m_connSettingMenuItem.AccessibleName = null;
            resources.ApplyResources(this.m_connSettingMenuItem, "m_connSettingMenuItem");
            this.m_connSettingMenuItem.BackgroundImage = null;
            this.m_connSettingMenuItem.Name = "m_connSettingMenuItem";
            this.m_connSettingMenuItem.ShortcutKeyDisplayString = null;
            this.m_connSettingMenuItem.Click += new System.EventHandler(this.ConnectionSettingMenuItem_Click);
            // 
            // MainUI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(763, 561);
            //this.Controls.Add(this.splitContainerMain);
            this.Controls.Add(this.vtkFormsWindowControl);
            this.Controls.Add(this.toolStripReplay);
            this.Controls.Add(this.toolStrip);
            this.Controls.Add(this.menuStrip);
            this.Controls.Add(this.statusStrip1);
            this.MainMenuStrip = this.menuStrip;
            this.Name = "MainUI";
            this.Text = "天津市滨海新区中央大道工程海河隧道监测仿真系统";
            Bitmap appicationBmp = global::PipeSimulation.Properties.Resources.application;
            this.Icon = Icon.FromHandle(appicationBmp.GetHicon());
            this.splitContainerMain.Panel2.ResumeLayout(false);
            this.splitContainerMain.ResumeLayout(false);
            this.toolStrip.ResumeLayout(false);
            this.toolStrip.PerformLayout();
            this.menuStrip.ResumeLayout(false);
            this.menuStrip.PerformLayout();
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.toolStripReplay.ResumeLayout(false);
            this.toolStripReplay.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarAnimation)).EndInit();
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.FormClosing += new FormClosingEventHandler(MainUI_FormClosing);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private System.Windows.Forms.SplitContainer splitContainerMain;
        private vtk.vtkFormsWindowControl vtkFormsWindowControl;
        //private vtk.vtkFormsWindowControl vtkFormsWindowControl2;
        private System.Windows.Forms.MenuStrip menuStrip;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem AngleWarningToolStripMenuItem;


        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private vtk.vtkCaptionActor2D originCaption;
        private ToolStripMenuItem processToolStripMenuItem;
        private ToolStripMenuItem fillToolStripMenuItem;
        private ToolStripMenuItem zhujiangToolStripMenuItem;
        private ToolStripMenuItem aboutToolStripMenuItem;
        private ToolStripMenuItem aboutToolStripMenuItem1;
        private ToolStripMenuItem toolsToolStripMenuItem;
        private ToolStripMenuItem saveAsPNGToolStripMenuItem;
        private ToolStripMenuItem startRecordAVIToolStripMenuItem;
        private ToolStripMenuItem stopRecordAVIToolStripMenuItem;
        private StatusStrip statusStrip1;
        private ToolStrip toolStrip;
        private ToolStripButton toolStripRotate;
        private ToolStripButton toolStripPan;
        private ToolStripButton toolStripZoom;
        private ToolStripButton toolStripZoomAll;
        private ToolStripButton toolStripTopView;
        private ToolStripButton toolStripBottomView;
        private ToolStripButton toolStripFrontView;
        private ToolStripButton toolStripBackView;
        private ToolStripButton toolStripLeftView;
        private ToolStripButton toolStripRightView;
        private ToolStripButton toolStripSWIsoMetricView;
        private ToolStripButton toolStripSEIsoMetricView;
        private ToolStripButton toolStripNEIsoMetricView;
        private ToolStripButton toolStripNWIsoMetricView;
        private ToolStripStatusLabel toolStripStatusLabel;
        private ToolStripStatusLabel toolStripStatusObserverMode;
        private ToolStripStatusLabel toolStripStatusDatabaseStatus;
        private ToolStripSeparator toolStripSeparator1;
        private ToolStripSeparator toolStripSeparator2;
        private ToolStripMenuItem helpToolStripMenuItem;
        private ToolStripMenuItem modeToolStripMenuItem;
        private ToolStripMenuItem monitorModeToolStripMenuItem;
        private ToolStripMenuItem replayModeToolStripMenuItem;
        private ToolStripMenuItem viewToolStripMenuItem;
        private ToolStripMenuItem showPerspectiveCamera;
        private ToolStripMenuItem showParallelCamera;
        private ToolStripMenuItem showStatisticTextDisplayer;
        private ToolStripMenuItem showWarningTextDisplayer;
        private ToolStripMenuItem showWCS;
        private ToolStripMenuItem showNonePipeObjects;
        private ToolStripMenuItem showOrigin;
        private ToolStripMenuItem showActiveRendererMaximize;
        private ToolStripMenuItem showActiveRendererBackToOriginal;
        private ToolStripMenuItem showImmersingInformation;
        private ToolStrip toolStripReplay;
        private ToolStripComboBox toolStripComboBoxPipes;
        private ToolStripSeparator toolStripSeparator3;
        private ToolStripButton toolStripButtonStartAnimation;
        private ToolStripButton toolStripButtonPauseAnimation;
        private ToolStripButton toolStripButtonStopAnimation;
        private ToolStripButton toolStripButtonBegining;
        private ToolStripButton toolStripButtonEnd;
        private ToolStripButton viewSpecificTimerScene;
        private TrackBar trackBarAnimation;
        private ToolStripLabel toolStripLabelAnimationTime;
        private ToolTip toolTipAnimation;
        private ToolStripMenuItem m_connSettingMenuItem;
        private ToolStripSeparator toolStripSeparator4;
        private ToolStripSeparator toolStripSeparator5;
    }
}