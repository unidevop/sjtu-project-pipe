// Build the control in GUISupport/WindowsForms. Then create a C# application,
// delete its default files, and replace them with these. Add a reference to the vtkFormsWindow
// project.

using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace ControlTest
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }
}