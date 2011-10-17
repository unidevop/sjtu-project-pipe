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
        public class CConnectionSettingCommand : CCommand
        {
            public CConnectionSettingCommand(ICommandManager commandManager)
                : base(commandManager, (ulong)CommandIds.kConnectionSetting)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    using (ConnectionSetting form = new ConnectionSetting())
                    {
                        if (DialogResult.OK == form.ShowDialog())
                        {
                        }
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