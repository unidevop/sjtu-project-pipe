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
        private ConnectionSetting m_connectForm = new ConnectionSetting();
        private AngleWarningConfiguration m_angleForm = new AngleWarningConfiguration();

        public Settings()
        {
            InitializeComponent();

            //  add connection setting tab page
            //ConnectionSetting connectForm = new ConnectionSetting();
            m_connectForm.FormBorderStyle = FormBorderStyle.None;
            m_connectForm.Dock = DockStyle.Fill;
            m_connectForm.TopLevel = false;
            this.m_connectTabPage.Controls.Clear();
            this.m_connectTabPage.Controls.Add(m_connectForm);
            m_connectForm.Show();

            //  add angle warning setting
            m_angleForm.FormBorderStyle = FormBorderStyle.None;
            m_angleForm.Dock = DockStyle.Fill;
            m_angleForm.TopLevel = false;
            this.m_angleTabPage.Controls.Clear();
            this.m_angleTabPage.Controls.Add(m_angleForm);
            m_angleForm.Show();

            m_connectForm.SettingChanged += OnSettingsChanged;
            m_angleForm.SettingChanged += OnSettingsChanged;
            m_ok.Enabled = false;
        }

        private void OnSettingsChanged()
        {
            m_ok.Enabled = true;
        }

        private void SelectIndexChanged(object sender, EventArgs e)
        {
            switch (m_tabControl.SelectedIndex)
            {
                case 0:
                    //ConnectionSetting connectForm = new ConnectionSetting();
                    //connectForm.FormBorderStyle = FormBorderStyle.None;
                    //connectForm.Dock = DockStyle.Fill;
                    //connectForm.TopLevel = false;
                    //this.m_connectTabPage.Controls.Clear();
                    //this.m_connectTabPage.Controls.Add(connectForm);
                    //m_connectForm.Show();
                    break;
                case 1:
                    //AngleWarningConfiguration angleForm = new AngleWarningConfiguration();
                    //angleForm.FormBorderStyle = FormBorderStyle.None;
                    //angleForm.Dock = DockStyle.Fill;
                    //angleForm.TopLevel = false;
                    //this.m_angleTabPage.Controls.Clear();
                    //this.m_angleTabPage.Controls.Add(angleForm);
                    //m_angleForm.Show();
                    break;
            }
        }

        private void BackgroundColor_Click(object sender, EventArgs e)
        {
            ColorDialog colorDialog = new ColorDialog();

            colorDialog.AllowFullOpen = true;
            colorDialog.FullOpen = true;
            colorDialog.ShowHelp = true;
            colorDialog.Color = m_backgroundColorBox.BackColor;

            if (DialogResult.OK == colorDialog.ShowDialog())
            {
                m_backgroundColorBox.BackColor = colorDialog.Color;
            }
        }

        private void Ok_Click(object sender, EventArgs e)
        {
            m_connectForm.SaveButton_Click(sender, e);
            m_angleForm.OkButton_Click(sender, e);
        }

        private void Cancel_Click(object sender, EventArgs e)
        {
            m_connectForm.CancelBtn_Click(sender, e);
        }
    }
}
