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
            // Deal with the un handled exception and thread exception
            // We need to tell the developers what's wrong happened to the program.
            AppDomain.CurrentDomain.UnhandledException += new UnhandledExceptionEventHandler(CurrentDomain_UnhandledException);
            Application.ThreadException += new System.Threading.ThreadExceptionEventHandler(Application_ThreadException);

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            System.Threading.Thread.CurrentThread.CurrentUICulture = new System.Globalization.CultureInfo(/*MSG0*/"zh-chs");

            MainUI mainFrm = new MainUI(s);
            Application.Idle += new EventHandler(mainFrm.OnIdle);
            Application.Run(mainFrm);
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private static void CurrentDomain_UnhandledException(object sender, UnhandledExceptionEventArgs e)
        {
            try
            {
                Exception ex = (Exception)e.ExceptionObject;

                ;
                MessageBox.Show(Resources.IDS_FATAL_ERROR_TEXT + "\r\n" + ex.Message + ex.StackTrace,
                   Resources.IDS_FATAL_ERROR_TITLE, MessageBoxButtons.OK, MessageBoxIcon.Stop);
            }
            finally
            {
                Application.Exit();
            }
        }

        private static void Application_ThreadException
           (object sender, System.Threading.ThreadExceptionEventArgs e)
        {
            DialogResult result = DialogResult.Abort;
            try
            {
                result = MessageBox.Show(Resources.IDS_FATAL_ERROR_TEXT + "\r\n" + e.Exception.Message
                 + e.Exception.StackTrace, Resources.IDS_FATAL_ERROR_TITLE,
                 MessageBoxButtons.AbortRetryIgnore, MessageBoxIcon.Stop);
            }
            finally
            {
                if (result == DialogResult.Abort)
                {
                    Application.Exit();
                }
            }
        } 
    }
}
