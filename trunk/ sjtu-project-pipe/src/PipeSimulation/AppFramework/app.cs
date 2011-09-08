using System;
using System.Windows.Forms;
using System.Configuration;
using PipeSimulation.Commands;
using PipeSimulation.DataModel;
using PipeSimulation.ObserverMode;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;
using PipeSimulation.Utility;
using PipeSimulation.SceneGraph;
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
        private CTextSceneDisplayer m_StatisticTextDisplayer = new CTextSceneDisplayer();
        private CTextSceneDisplayer m_warningTextDisplayer = new CTextSceneDisplayer();
        private IVideoWriter m_videoWriter = new CAVIWriter();
        private IRealtimeDataQuery  m_realTimeQuery = null;
        private IHistoryDataQuery m_historyQuery = null;
        private CPipeConnectionIndicator m_PipeConnectionIndicator = null;

        public AppImpl(MainUI mainUI)
        {
            m_mainUI = mainUI;
            m_vtkControl = m_mainUI.vtkControl;
            m_vtkRenderWindow = m_vtkControl.GetRenderWindow();

            try
            {
                string dbConnStr = ConfigurationManager.ConnectionStrings["SQLDBConn"].ConnectionString;
                double readInterval = Convert.ToDouble(ConfigurationManager.AppSettings["ReadInterval"]);

                m_realTimeQuery = DataQueryManager.GetRealTimeQuery(dbConnStr, readInterval);
                m_historyQuery = DataQueryManager.GetHistoricalQuery(dbConnStr);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Exception: {0}", ex.Message);
                Console.WriteLine("Exception: {0}", ex.StackTrace);
            }
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (m_realTimeQuery != null)
                {
                    m_realTimeQuery.Dispose();
                    m_realTimeQuery = null;
                }

                if (m_historyQuery != null)
                {
                    m_historyQuery.Dispose();
                    m_historyQuery = null;
                }
            }
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

        public override IRealtimeDataQuery RealTimeDataQuery 
        {
            get { return m_realTimeQuery; }
        }

        public override IHistoryDataQuery HistoryTimeDataQuery 
        {
            get { return m_historyQuery; }
        }

        public override IDataDriven DataDriven 
        {
            get { return m_dataDriven; }
        }

        public override ITextDisplayer StatisticTextDisplayer
        {
            get { return m_StatisticTextDisplayer; }
        }

        public override ITextDisplayer WarningTextDisplayer
        {
            get { return m_warningTextDisplayer; }
        }

        public override IVideoWriter VideoWriter 
        {
            get { return m_videoWriter; }
        }

        public override CPipeConnectionIndicator PipeConnectionIndicator 
        {
            get 
            {
                if (null == m_PipeConnectionIndicator)
                {
                    m_PipeConnectionIndicator = new CPipeConnectionIndicator(RenderWindow.GetRenderers().GetFirstRenderer());
                }
                return m_PipeConnectionIndicator; 
            }
        }

        public override void SetStatusBarText(string statusBarText)
        {
            StatusStrip statusBar = IApp.theApp.MainUI.StatusStrip;
            try
            {
                ToolStripLabel labelControl = statusBar.Items[0] as ToolStripLabel;

                if (string.IsNullOrEmpty(statusBarText))
                {
                    labelControl.Text = global::PipeSimulation.Properties.Resources.IDS_STATUS_READY;
                }
                else
                {
                    labelControl.Text = statusBarText;
                }
            }
            catch (NullReferenceException)
            {
            }
        }

        public override void RenderScene()
        {
            if (vtkControl != null)
            {
                vtkControl.Invalidate();
            }
        }
    }
}
