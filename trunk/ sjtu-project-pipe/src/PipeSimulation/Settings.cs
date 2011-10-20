using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.Properties;
using PipeSimulation.DataModel;
using PipeSimulation.PipeApp;

namespace PipeSimulation
{
    public partial class Settings : Form
    {
        private ConnectionSetting m_connectForm = new ConnectionSetting();
        private AngleWarningConfiguration m_angleForm = new AngleWarningConfiguration();
        private bool m_backgroundModified = false;

        private bool Modified
        {
            get
            {
                return m_connectForm.Modified || m_angleForm.Modified || m_backgroundModified;
            }
        }

        public Settings()
        {
            InitializeComponent();

            //  add connection setting tab page
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

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            //  init background color
            InitBackgroundSetting();
        }

        private void InitBackgroundSetting()
        {
            double[] clrBackground = ApplicationOptions.Instance().ViewOptions.BackgroundColor;

            m_backgroundColorBox.BackColor = System.Drawing.Color.FromArgb(Convert.ToInt32(clrBackground[0] * 255),
                                                                           Convert.ToInt32(clrBackground[1] * 255),
                                                                           Convert.ToInt32(clrBackground[2] * 255));
        }
        private void OnSettingsChanged()
        {
            m_ok.Enabled = Modified;
            m_resetBtn.Enabled = Modified;
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
                m_backgroundModified = true;
                OnSettingsChanged();
            }
        }

        private void Ok_Click(object sender, EventArgs e)
        {
            m_connectForm.SaveButton_Click(sender, e);
            m_angleForm.OkButton_Click(sender, e);

            if (m_backgroundModified)
            {
                ApplicationOptions.Instance().ViewOptions.BackgroundColor =
                    new double[] {m_backgroundColorBox.BackColor.R/255.0,
                                  m_backgroundColorBox.BackColor.G/255.0,
                                  m_backgroundColorBox.BackColor.B/255.0};

                IApp.theApp.MainUI.OnBackgroundChanged();
            }
        }

        private void Cancel_Click(object sender, EventArgs e)
        {
            if (Modified && DialogResult.Yes == MessageBox.Show(Resources.IDS_WARNING_SAVE_CONFIG, this.Text,
                    MessageBoxButtons.YesNo, MessageBoxIcon.Question))
                Ok_Click(sender, e);
        }

        private void ResetButton_Click(object sender, EventArgs e)
        {
            if (m_connectForm.Modified)
                m_connectForm.LoadConfig();

            if (m_angleForm.Modified)
                m_angleForm.LoadConfig();

            //  init background color
            InitBackgroundSetting();
            m_backgroundModified = false;

            OnSettingsChanged();
        }
    }
}
