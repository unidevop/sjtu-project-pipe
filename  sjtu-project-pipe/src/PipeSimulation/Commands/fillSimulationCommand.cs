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
                    // Parse the pipe index
                    int iPipeIndex = 0;

                    ToolStripMenuItem sender = Sender as ToolStripMenuItem;
                    if (sender != null)
                    {
                        iPipeIndex = int.Parse(sender.Tag.ToString());
                    }
                    if (iPipeIndex < 0 || iPipeIndex > IApp.theApp.DataModel.PipeModels.Count)
                    {
                        Terminate();
                        return;
                    }

                    if (fillSimulationDlg == null)
                    {
                        fillSimulationDlg = new FillAnimationSimulationForm();
                        fillSimulationDlg.PipeIndex = iPipeIndex;
                        fillSimulationDlg.Show(IApp.theApp.MainUI);

                        fillSimulationDlg.FormClosed += new FormClosedEventHandler(fillSimulationDlg_FormClosed);
                    }
                }
                catch (Exception e)
                {
                    if (fillSimulationDlg != null)
                    {
                        fillSimulationDlg.Dispose();
                    }
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
