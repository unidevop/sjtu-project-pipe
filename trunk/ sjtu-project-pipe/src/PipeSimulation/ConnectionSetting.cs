using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.Utility;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;

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
            ConnectionConfig connCfg = IApp.theApp.ConnectionCfg;

            m_dbServer.Text = connCfg.DbAdress;
            m_userName.Text = connCfg.UserName;
            m_password.Text = connCfg.Password;
            m_autoConnect.Checked = connCfg.IsAutoConnect;
            m_autoConnInterval.Value = (decimal)(connCfg.ReadInterval.TotalMilliseconds / 1000.0);

            m_isConfigConn.Checked = false;

            m_autoConnInterval.Enabled = m_autoConnect.Checked;
            IsConfigConnection_CheckedChanged(m_isConfigConn, null);

            m_modified = false;
            OnModified();
        }

        private void Connect_ButtonClick(object sender, EventArgs e)
        {
            // Get DataQuery
            IHistoryDataQuery hisDataQuery = IApp.theApp.HistoryTimeDataQuery;
            IRealtimeDataQuery realTimeDataQuery = IApp.theApp.RealTimeDataQuery;

            if (hisDataQuery != null && !hisDataQuery.IsConnected)
                hisDataQuery.Connect();

            if (realTimeDataQuery != null && !realTimeDataQuery.IsConnected)
            {
                realTimeDataQuery.Connect();

                if (IApp.theApp.ObserverModeManager.ActiveModeType == ObserverMode.ObserverMode.eMonitorMode)
                    realTimeDataQuery.Activate();
            }
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
                ConnectionConfig connCfg = IApp.theApp.ConnectionCfg;

                connCfg.SetConnectionString(m_dbServer.Text, m_userName.Text, m_password.Text);
                connCfg.IsAutoConnect = m_autoConnect.Checked;
                connCfg.ReadInterval = TimeSpan.FromMilliseconds((double)m_autoConnInterval.Value * 1000.0);

                //  TODO: check on invalid values
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
