using System;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.Properties;
using PipeSimulation.PipeApp;

namespace PipeSimulation.Commands
{
    public class CFillSimulationCommand : CCommand
    {
        private FillAnimationSimulationForm fillSimulationDlg = null;
        public CFillSimulationCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kFillSimulation)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    if (fillSimulationDlg == null)
                    {
                        fillSimulationDlg = new FillAnimationSimulationForm();
                        fillSimulationDlg.Show(IApp.theApp.MainUI);

                        fillSimulationDlg.FormClosed += new FormClosedEventHandler(fillSimulationDlg_FormClosed);
                    }
                }
                catch (SystemException e)
                {
                    MessageBox.Show(e.Message);
                }
            }

            private void fillSimulationDlg_FormClosed(object sender, FormClosedEventArgs e)
            {
                fillSimulationDlg = null;
                Terminate();
            }

            protected override void OnTerminate()
            {
                if (fillSimulationDlg != null)
                {
                    fillSimulationDlg.Dispose();
                    fillSimulationDlg = null;
                }
            }
    }
}
