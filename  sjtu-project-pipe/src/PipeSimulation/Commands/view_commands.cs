using PipeSimulation.Commands;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;

namespace PipeSimulation.Commands
{

// Copy from vtkInteractorStyle.h
//#define VTKIS_ROTATE       1
//#define VTKIS_PAN          2
//#define VTKIS_SPIN         3
//#define VTKIS_DOLLY        4
//#define VTKIS_ZOOM         5
//#define VTKIS_USCALE       6
//#define VTKIS_TIMER        7
//#define VTKIS_FORWARDFLY   8
//#define VTKIS_REVERSEFLY   9
    
    /// <summary>
    /// Rotate command
    /// </summary>
    public class CRotateCommand : CCommand
    {
        public CRotateCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kRotate)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            WatchEvents();
        }

        protected override void OnTerminate()
        {
            StopWatchEvents();
        }

        protected override void OnSuspend()
        {
            StopWatchEvents();
        }

        protected override void OnResume()
        {
            WatchEvents();
        }

        private void WatchEvents()
        {
            IApp.theApp.vtkControl.SetInteractorTrackBall();
            IApp.theApp.vtkControl.MouseDown += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseDown);
            IApp.theApp.vtkControl.MouseMove += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseMove);
            IApp.theApp.vtkControl.MouseUp += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseUp);
            IApp.theApp.vtkControl.MouseWheel += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseWheel);

            SetStatusBarText(Resources.IDS_ROTATE_DESC);
            SetCursor(Resources.SWOrbit);
        }

        void vtkControl_MouseWheel(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseWheel(e);
        }

        void vtkControl_MouseUp(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(0); // for none
            IApp.theApp.vtkControl.FireMouseUp(e);
       }

        void vtkControl_MouseMove(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseMove(e);
        }

        void vtkControl_MouseDown(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(1); // for rotate
            IApp.theApp.vtkControl.FireMouseDown(e);
        }

        private void StopWatchEvents()
        {
            IApp.theApp.vtkControl.MouseDown -= vtkControl_MouseDown;
            IApp.theApp.vtkControl.MouseMove -= vtkControl_MouseMove;
            IApp.theApp.vtkControl.MouseUp -= vtkControl_MouseUp;
        }
    }

    /// <summary>
    /// Pan command
    /// </summary>
    public class CPanCommand : CCommand
    {
        public CPanCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kPan)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            WatchEvents();
        }

        protected override void OnTerminate()
        {
            StopWatchEvents();
        }

        protected override void OnSuspend()
        {
            StopWatchEvents();
        }

        protected override void OnResume()
        {
            WatchEvents();
        }

        private void WatchEvents()
        {
            IApp.theApp.vtkControl.SetInteractorTrackBall();
            IApp.theApp.vtkControl.MouseDown += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseDown);
            IApp.theApp.vtkControl.MouseMove += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseMove);
            IApp.theApp.vtkControl.MouseUp += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseUp);
            IApp.theApp.vtkControl.MouseWheel += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseWheel);
            SetStatusBarText(Resources.IDS_PAN_DESC);
            SetCursor(Resources.SWPan);
        }

        void vtkControl_MouseWheel(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseWheel(e);
        }

        void vtkControl_MouseUp(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(0); // for none
            IApp.theApp.vtkControl.FireMouseUp(e);
        }

        void vtkControl_MouseMove(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseMove(e);
        }

        void vtkControl_MouseDown(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(2); // for rotate
            IApp.theApp.vtkControl.FireMouseDown(e);
        }

        private void StopWatchEvents()
        {
            IApp.theApp.vtkControl.MouseDown -= vtkControl_MouseDown;
            IApp.theApp.vtkControl.MouseMove -= vtkControl_MouseMove;
            IApp.theApp.vtkControl.MouseUp -= vtkControl_MouseUp;
        }
    }

    /// <summary>
    /// Zoom Command
    /// </summary>
    public class CZoomCommand : CCommand
    {
        public CZoomCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kZoom)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            WatchEvents();
        }

        protected override void OnTerminate()
        {
            StopWatchEvents();
        }

        protected override void OnSuspend()
        {
            StopWatchEvents();
        }

        protected override void OnResume()
        {
            WatchEvents();
        }

        private void WatchEvents()
        {
            IApp.theApp.vtkControl.SetInteractorTrackBall();
            IApp.theApp.vtkControl.MouseDown += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseDown);
            IApp.theApp.vtkControl.MouseMove += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseMove);
            IApp.theApp.vtkControl.MouseUp += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseUp);
            IApp.theApp.vtkControl.MouseWheel += new System.Windows.Forms.MouseEventHandler(vtkControl_MouseWheel);
            SetStatusBarText(Resources.IDS_ZOOM_DESC);
            SetCursor(Resources.SWZoom);
        }

        void vtkControl_MouseWheel(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseWheel(e);
        }

        void vtkControl_MouseUp(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(0); // for none
            IApp.theApp.vtkControl.FireMouseUp(e);
        }

        void vtkControl_MouseMove(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.FireMouseMove(e);
        }

        void vtkControl_MouseDown(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            IApp.theApp.vtkControl.SetInteractorStyleState(4); // for rotate
            IApp.theApp.vtkControl.FireMouseDown(e);
        }

        private void StopWatchEvents()
        {
            IApp.theApp.vtkControl.MouseDown -= vtkControl_MouseDown;
            IApp.theApp.vtkControl.MouseMove -= vtkControl_MouseMove;
            IApp.theApp.vtkControl.MouseUp -= vtkControl_MouseUp;
        }
    }

    /// <summary>
    /// ZoomAll Command
    /// </summary>
    public class CZoomAllCommand : CCommand
    {
        public CZoomAllCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kZoomAll)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ResetCamera();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// TopView Command
    /// </summary>
    public class CTopViewCommand : CCommand
    {
        public CTopViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kTopView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowTopView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// BottomView Command
    /// </summary>
    public class CBottomViewCommand : CCommand
    {
        public CBottomViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kBottomView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowBottomView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// FrontView Command
    /// </summary>
    public class CFrontViewCommand : CCommand
    {
        public CFrontViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kFrontView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowFrontView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// BackView Command
    /// </summary>
    public class CBackViewCommand : CCommand
    {
        public CBackViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kBackView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowBackView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// LeftView Command
    /// </summary>
    public class CLeftViewCommand : CCommand
    {
        public CLeftViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kLeftView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowLeftView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// RightView Command
    /// </summary>
    public class CRightViewCommand : CCommand
    {
        public CRightViewCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kRightView)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowRightView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// SW Isometric Command
    /// </summary>
    public class CSWIsometricCommand : CCommand
    {
        public CSWIsometricCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kSWIsometric)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowSWIsoMetricView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// SE Isometric Command
    /// </summary>
    public class CSEIsometricCommand : CCommand
    {
        public CSEIsometricCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kSEIsometric)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowSEIsoMetricView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// NE Isometric Command
    /// </summary>
    public class CNEIsometricCommand : CCommand
    {
        public CNEIsometricCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kNEIsometric)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowNEIsoMetricView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }

    /// <summary>
    /// NW Isometric Command
    /// </summary>
    public class CNWIsometricCommand : CCommand
    {
        public CNWIsometricCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kNWIsometric)
        {
            m_bIsViewCommand = true;
        }

        protected override void OnActivate()
        {
            IApp.theApp.vtkControl.ShowNWIsoMetricView();
            Terminate();
        }

        protected override void OnTerminate()
        {
        }
    }
}