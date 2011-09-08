////
// This file is used to define the interface for application.
////
using System;
using System.Windows.Forms;
using PipeSimulation.Commands;
using PipeSimulation.DataModel;
using PipeSimulation.ObserverMode;
using PipeSimulation.DataQuery;
using PipeSimulation.DataDriven;
using PipeSimulation.Utility;
using PipeSimulation.SceneGraph;
using vtk;

namespace PipeSimulation
{
    namespace PipeApp
    {
        public abstract class IApp : IDisposable
        {
            abstract public MainUI MainUI { get; }
            abstract public vtkFormsWindowControl vtkControl { get; }
            abstract public vtk.vtkRenderWindow RenderWindow { get; }
            abstract public ICommandManager CommandManager { get; }
            abstract public IDataModel DataModel { get; }
            abstract public void SetStatusBarText(string statusBarText);
            abstract public IObserverModeManager ObserverModeManager { get; }
            abstract public IRealtimeDataQuery RealTimeDataQuery { get; }
            abstract public IHistoryDataQuery HistoryTimeDataQuery { get; }
            abstract public IDataDriven DataDriven { get; }
            abstract public ITextDisplayer StatisticTextDisplayer { get; }
            abstract public ITextDisplayer WarningTextDisplayer { get; }
            abstract public IVideoWriter VideoWriter { get; }
            abstract public CPipeConnectionIndicator PipeConnectionIndicator { get; }
            public static IApp theApp
            {
                get;
                set;
            }

            public void Dispose()
            {
                Dispose(true);
                GC.SuppressFinalize(this);
            }

            protected abstract void Dispose(bool disposing);

            abstract public void RenderScene();
        }
    }
}