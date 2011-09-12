using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.Utility;

namespace PipeSimulation
{
    public partial class ConnectionSetting : Form
    {
        private bool m_modified = false;

        public ConnectionSetting()
        {
            InitializeComponent();
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            LoadConfig();
        }

        private void LoadConfig()
        {
            ConnectionConfig connCfg = ConnectionConfig.Instance();

            m_dbServer.Text = connCfg.DbAdress;
            m_userName.Text = connCfg.UserName;
            m_password.Text = connCfg.Password;
            m_autoConnect.Checked = connCfg.IsAutoConnect;
            m_autoConnInterval.Value = (decimal)(connCfg.ReadInterval / 1000.0);

            m_isConfigConn.Checked = false;

            m_autoConnInterval.Enabled = m_autoConnect.Checked;
            IsConfigConnection_CheckedChanged(m_isConfigConn, null);

            m_modified = false;
            OnModified();
        }

        private void Connect_ButtonClick(object sender, EventArgs e)
        {

        }

        private void IsConfigConnection_CheckedChanged(object sender, EventArgs e)
        {
            m_connConfigGroup.Enabled = m_isConfigConn.Checked;
        }

        private void ResetButton_Click(object sender, EventArgs e)
        {
            LoadConfig();
        }

        private void SaveButton_Click(object sender, EventArgs e)
        {
            if (m_modified)
            {
                ConnectionConfig connCfg = ConnectionConfig.Instance();

                connCfg.SetConnectionString(m_dbServer.Text, m_userName.Text, m_password.Text);
                connCfg.Save();

                m_modified = false;
                OnModified();
            }
        }

        void OnModified()
        {
            m_resetBtn.Enabled = m_modified;
            m_saveBtn.Enabled = m_modified;
        }

        private void DbServer_TextChanged(object sender, EventArgs e)
        {
            m_modified = true;
            OnModified();
        }

        private void UserName_TextChanged(object sender, EventArgs e)
        {
            m_modified = true;
            OnModified();
        }

        private void Password_TextChanged(object sender, EventArgs e)
        {
            m_modified = true;
            OnModified();
        }

        private void AutoConnInterval_ValueChanged(object sender, EventArgs e)
        {
            m_modified = true;
            OnModified();
        }

        private void AutoConnect_CheckedChanged(object sender, EventArgs e)
        {
            m_autoConnInterval.Enabled = m_autoConnect.Checked;
            m_modified = true;
            OnModified();
        }
    }
}
