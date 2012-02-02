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
        public class CModelingUCSToGPSUCSConverterCmd : CCommand
        {
            public CModelingUCSToGPSUCSConverterCmd(ICommandManager commandManager)
                : base(commandManager, (ulong)CommandIds.kModelingUCSToGPSUCSConverter)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    // Step 1: Pop up the dialog
                    ModelingUCS__GPSUCS_Converter dlg = new ModelingUCS__GPSUCS_Converter();
                    dlg.ShowDialog();
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