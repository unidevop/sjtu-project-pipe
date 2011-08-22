using System;
using PipeSimulation.Commands;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using PipeSimulation.Utility;

namespace PipeSimulation
{
    namespace Commands
    {
        public class CSaveAsPictureCmd : CCommand
        {
            public CSaveAsPictureCmd(ICommandManager commandManager)
                : base(commandManager, (ulong)CommandIds.kSaveAsPicture)
            {
            }

            protected override void OnActivate()
            {
                try
                {
                    // Step 1: Pop up a file save dialog to get a output path
                    SaveFileDialog saveDlg = new SaveFileDialog();
                    saveDlg.Filter = "PNG Image|*.png";
                    saveDlg.Title = "Save current scene";
                    saveDlg.ShowDialog();

                    // Step 2: Output a png image
                    if (saveDlg.FileName != "")
                    {
                        CImageOutputUtil.OutputImageFromCurrentSence(IApp.theApp.RenderWindow, saveDlg.FileName);
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