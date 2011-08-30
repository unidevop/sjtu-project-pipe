using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

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
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            System.Threading.Thread.CurrentThread.CurrentUICulture = new System.Globalization.CultureInfo(/*MSG0*/"zh-chs");
            Application.Run(new MainUI());
        }
    }
}
