using System;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.Properties;
using PipeSimulation.PipeApp;

namespace PipeSimulation.Commands
{
    public class CZhujiangSimulationCommand : CCommand
    {
        private ZhujiangAnimationSimulationForm zhujiangSimulationDlg = null;
        public CZhujiangSimulationCommand(ICommandManager commandManager)
            : base(commandManager, (ulong)CommandIds.kZhujiangSimulation)
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
                
                if (zhujiangSimulationDlg == null)
                {
                    zhujiangSimulationDlg = new ZhujiangAnimationSimulationForm();
                    zhujiangSimulationDlg.PipeIndex = iPipeIndex;
                    zhujiangSimulationDlg.Show(IApp.theApp.MainUI);

                    zhujiangSimulationDlg.FormClosed += new FormClosedEventHandler(zhujiangSimulationDlg_FormClosed);
                }
            }
            catch (SystemException e)
            {
                if (zhujiangSimulationDlg != null)
                {
                    zhujiangSimulationDlg.Dispose();
                } 
                MessageBox.Show(e.Message);
            }
        }

        private void zhujiangSimulationDlg_FormClosed(object sender, FormClosedEventArgs e)
        {
            zhujiangSimulationDlg = null;
            Terminate();
        }

        protected override void OnTerminate()
        {
            if (zhujiangSimulationDlg != null)
            {
                zhujiangSimulationDlg.Dispose();
                zhujiangSimulationDlg = null;
            }
        }
    }
}
