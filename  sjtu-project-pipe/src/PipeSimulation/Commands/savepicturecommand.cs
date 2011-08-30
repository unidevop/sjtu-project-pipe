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
                    saveDlg.Filter = Resources.IDS_PNG_FILTER;
                    saveDlg.Title = Resources.IDS_SAVE_PICTURE_TITLE;
                    saveDlg.ShowDialog();

                    // Step 2: Output a png image
                    if (saveDlg.FileName != /*MSG0*/"")
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