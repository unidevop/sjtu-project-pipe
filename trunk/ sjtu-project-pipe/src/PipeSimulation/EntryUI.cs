using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.Properties;
using PipeSimulation.Utility;

namespace PipeSimulation
{
    public partial class EntryUI : Form
    {
        public EntryUI()
        {
            InitializeComponent();
        }

        private void openProjectToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Pop up dialog to select a psm file
            OpenFileDialog openDlg = new OpenFileDialog();
            openDlg.Filter = Resources.IDS_PSM_FILTER;
            openDlg.Title = Resources.IDS_OPEN_PROJECT_TITLE;
            openDlg.InitialDirectory = CFolderUtility.DataFolder();
            
            if (DialogResult.OK == openDlg.ShowDialog())
            {
                // Start a thread to open the main ui form and close this form
                System.Threading.Thread t = new System.Threading.Thread(new System.Threading.ParameterizedThreadStart(ThreadProc));
                t.Start(openDlg.FileName);

                this.Close();
            }
        }

        private static void ThreadProc(object s)
        {
            MainUI mainFrm = new MainUI(s);
            Application.Idle += new EventHandler(mainFrm.OnIdle);
            Application.Run(mainFrm);
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
