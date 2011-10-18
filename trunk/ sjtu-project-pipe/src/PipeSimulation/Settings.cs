using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace PipeSimulation
{
    public partial class Settings : Form
    {
        public Settings()
        {
            InitializeComponent();
        }

        private void SelectIndexChanged(object sender, EventArgs e)
        {
            switch (m_tabControl.SelectedIndex)
            {
                case 0:
                    ConnectionSetting connectForm = new ConnectionSetting();
                    //currentForm.FormBorderStyle = FormBorderStyle.None;
                    //currentForm.Dock = DockStyle.Fill;
                    //currentForm.TopLevel = false;
                    this.m_connectTabPage.Controls.Clear();
                    this.m_connectTabPage.Controls.Add(connectForm);
                    connectForm.Show();
                    break;
                case 1:
                    AngleWarningConfiguration angleForm = new AngleWarningConfiguration();
                    //currentForm.FormBorderStyle = FormBorderStyle.None;
                    //currentForm.Dock = DockStyle.Fill;
                    //currentForm.TopLevel = false;
                    this.m_angleTabPage.Controls.Clear();
                    this.m_angleTabPage.Controls.Add(angleForm);
                    angleForm.Show();
                    break;
            }
        }
    }
}
