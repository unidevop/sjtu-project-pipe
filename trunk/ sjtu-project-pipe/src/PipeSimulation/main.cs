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
            System.Threading.Thread.CurrentThread.CurrentUICulture = new System.Globalization.CultureInfo(/*MSG0*/"zh-chs");

            Application.Run(new EntryUI());
        }
    }
}
