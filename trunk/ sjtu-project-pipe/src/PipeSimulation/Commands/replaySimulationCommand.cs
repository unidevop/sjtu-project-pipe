using System;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.Properties;
using PipeSimulation.PipeApp;
using PipeSimulation.ObserverMode;

namespace PipeSimulation.Commands
{
    public class CReplaySimulationCommand : CCommand
    {
        public CReplaySimulationCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kReplaySimulation)
        {
        }

        protected override void OnActivate()
        {
            try
            {
                // The current observer mode instance must be CReplayMode
                CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
                if (replayMode == null) return;

                replayMode.ReplayAnimationEngine.StartAnimation();
            }
            catch (SystemException e)
            {
                MessageBox.Show(e.Message);
            }
        }

        protected override void OnTerminate()
        {
            // The current observer mode instance must be CReplayMode
            CReplayMode replayMode = IApp.theApp.ObserverModeManager.ActiveModeInstance as CReplayMode;
            if (replayMode == null) return;

            replayMode.ReplayAnimationEngine.StopAnimation();
        }
    }
}
