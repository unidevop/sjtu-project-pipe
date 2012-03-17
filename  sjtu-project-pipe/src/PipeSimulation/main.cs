using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;
using PipeSimulation.Properties;

namespace PipeSimulation
{
    static class PipeSimulation
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            // Deal with the un handled exception and thread exception
            // We need to tell the developers what's wrong happened to the program.
            AppDomain.CurrentDomain.UnhandledException += new UnhandledExceptionEventHandler(CurrentDomain_UnhandledException);
            Application.ThreadException += new System.Threading.ThreadExceptionEventHandler(Application_ThreadException);
 
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            System.Threading.Thread.CurrentThread.CurrentUICulture = new System.Globalization.CultureInfo(/*MSG0*/"zh-chs");

            Application.Run(new EntryUI());
        }

        static void CurrentDomain_UnhandledException
         (object sender, UnhandledExceptionEventArgs e)
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

        public static void Application_ThreadException
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
