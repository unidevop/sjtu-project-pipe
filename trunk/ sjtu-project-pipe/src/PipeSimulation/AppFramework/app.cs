using System;
using System.Windows.Forms;
using PipeSimulation.Commands;
using PipeSimulation.DataModel;
using PipeSimulation.ObserverMode;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;
using PipeSimulation.Utility;
using vtk;

namespace PipeSimulation.PipeApp
{
    public class AppImpl : IApp
    {
        private MainUI m_mainUI;
        private vtkFormsWindowControl m_vtkControl;
        private vtkRenderWindow m_vtkRenderWindow;
        private ICommandManager m_commandManager = new CCommandManager();
        private IDataModel m_dataModel = new CDataModel();
        private IObserverModeManager m_observerModeManager = new CObserverModeManager();
        private IDataDriven m_dataDriven = new CDataDriven();
        private CStatisticTextSceneDisplayer m_StatisticTextDisplayer = new CStatisticTextSceneDisplayer();
        private IVideoWriter m_videoWriter = new CAVIWriter();

        public AppImpl(MainUI mainUI)
        {
            m_mainUI = mainUI;
            m_vtkControl = m_mainUI.vtkControl;
            m_vtkRenderWindow = m_vtkControl.GetRenderWindow();
        }

        public override MainUI MainUI
        {
            get { return m_mainUI; }
        }

        public override vtkFormsWindowControl vtkControl
        {
            get { return m_mainUI.vtkControl; }
        }

        public override vtkRenderWindow RenderWindow
        {
            get { return m_vtkRenderWindow; }
        }

        public override ICommandManager CommandManager
        {
            get { return m_commandManager; }
        }

        public override IDataModel DataModel
        {
            get { return m_dataModel; }
        }

        public override IObserverModeManager ObserverModeManager 
        {
            get { return m_observerModeManager; }
        }

        public override IDataQuery DataQuery 
        {
            get { return null; }
        }

        public override IDataDriven DataDriven 
        {
            get { return m_dataDriven; }
        }

        public override IStatisticTextDisplayer StatisticTextDisplayer
        {
            get { return m_StatisticTextDisplayer; }
        }

        public override IVideoWriter VideoWriter 
        {
            get { return m_videoWriter; }
        }

        public override void SetStatusBarText(string statusBarText)
        {
            StatusStrip statusBar = IApp.theApp.MainUI.StatusStrip;
            try
            {
                ToolStripLabel labelControl = statusBar.Items[0] as ToolStripLabel;
                labelControl.Text = statusBarText;
            }
            catch (NullReferenceException)
            {
            }
        }
    }
}
