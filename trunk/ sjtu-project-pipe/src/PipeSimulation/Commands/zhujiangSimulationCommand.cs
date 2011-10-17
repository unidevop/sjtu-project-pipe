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
                if (zhujiangSimulationDlg == null)
                {
                    zhujiangSimulationDlg = new ZhujiangAnimationSimulationForm();
                    zhujiangSimulationDlg.Show(IApp.theApp.MainUI);

                    zhujiangSimulationDlg.FormClosed += new FormClosedEventHandler(zhujiangSimulationDlg_FormClosed);
                }
            }
            catch (SystemException e)
            {
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
