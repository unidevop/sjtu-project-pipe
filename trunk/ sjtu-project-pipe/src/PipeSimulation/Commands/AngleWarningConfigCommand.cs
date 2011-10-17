using System;
using PipeSimulation.Commands;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.Properties;

namespace PipeSimulation
{
    namespace Commands
    {
        public class CAngleWarningConfigCommand : CCommand
        {
            public CAngleWarningConfigCommand(ICommandManager commandManager)
                : base(commandManager, (ulong)CommandIds.kAngleWarningConfig)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    using (AngleWarningConfiguration configForm = new AngleWarningConfiguration())
                    {
                        configForm.ShowDialog();
                        IApp.theApp.RenderScene();
                    }
                }
                catch (SystemException e)
                {
                    MessageBox.Show(e.Message);
                }
                finally
                {
                    Terminate();
                }
            }
        }
    }
}