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
using PipeSimulation.Properties;
using System.Data.SqlClient;

namespace PipeSimulation
{
    public partial class ConnectionSetting : Form
    {
        private bool m_loaded = false;
        private bool m_modified = false;

        internal event Action SettingChanged;

        internal bool Modified
        {
            get
            {
                return m_modified;
            }
        }

        public ConnectionSetting()
        {
            InitializeComponent();
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            LoadConfig();
            IApp.theApp.ConnectionCfg.ConnectionChanged += OnConnectionChanged;
        }

        internal void LoadConfig()
        {
            m_loaded = false;
            ConnectionConfig connCfg = IApp.theApp.ConnectionCfg;

            m_dbServer.Text = connCfg.DbAdress;
            m_userName.Text = connCfg.UserName;
            m_password.Text = connCfg.Password;
            m_autoConnect.Checked = connCfg.IsAutoConnect;
            m_autoConnInterval.Value = (decimal)(connCfg.AutoConnectInterval.TotalMilliseconds / 1000.0);
            m_readInterval.Value = (decimal)(connCfg.ReadInterval.TotalMilliseconds / 1000.0);

            m_autoConnInterval.Enabled = m_autoConnect.Checked;
            m_connConfigGroup.Enabled = true;

            IRealtimeDataQuery realTimeDataQuery = IApp.theApp.RealTimeDataQuery;
            m_connectBtn.Enabled = (realTimeDataQuery == null || !realTimeDataQuery.IsConnected);

            m_modified = false;
            m_loaded = true;
            OnModified();
        }

        private void Connect_ButtonClick(object sender, EventArgs e)
        {
            try
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
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, IApp.theApp.MainUI.Text);
                m_dbServer.Focus();
            }
        }

        private void OnConnectionChanged(bool connected)
        {
            m_connectBtn.Enabled = !connected;
        }

        private void ResetButton_Click(object sender, EventArgs e)
        {
            LoadConfig();
        }

        internal void SaveButton_Click(object sender, EventArgs e)
        {
            if (m_modified)
            {
                //  check on invalid values
                if (!TestConnect())
                    return;

                try
                {
                    ConnectionConfig connCfg = IApp.theApp.ConnectionCfg;

                    connCfg.SetConnectionString(m_dbServer.Text, m_userName.Text, m_password.Text);
                    connCfg.IsAutoConnect = m_autoConnect.Checked;
                    connCfg.AutoConnectInterval = TimeSpan.FromMilliseconds((double)m_autoConnInterval.Value * 1000.0);
                    connCfg.ReadInterval = TimeSpan.FromMilliseconds((double)m_readInterval.Value * 1000.0);

                    connCfg.Save();
                    m_modified = false;
                    OnModified();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message, IApp.theApp.MainUI.Text);
                    m_dbServer.Focus();
                }
            }
        }

        private bool TestConnect()
        {
            string connString = String.Format("Data Source={0};Initial Catalog={1};User Id={2};Password={3};",
                m_dbServer.Text, IApp.theApp.ConnectionCfg.DbName, m_userName.Text, m_password.Text);

            bool success = false;

            try
            {
                using (SqlConnection dbConn = new SqlConnection(connString))
                {
                    dbConn.Open();
                }
                success = true;
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, IApp.theApp.MainUI.Text);
                m_dbServer.Focus();
                success = false;
            }

            return success;
        }

        void OnModified()
        {
            m_resetBtn.Enabled = m_modified;
            m_saveBtn.Enabled = m_modified;

            if (SettingChanged != null && m_loaded)
                SettingChanged();
        }

        private void ConnectSettingChanged(object sender, EventArgs e)
        {
            m_modified = true;
            OnModified();
        }

        private void AutoConnect_CheckedChanged(object sender, EventArgs e)
        {
            m_autoConnInterval.Enabled = m_autoConnect.Checked;
            ConnectSettingChanged(sender, e);
        }

        internal void CancelBtn_Click(object sender, EventArgs e)
        {
            if (m_modified && DialogResult.Yes == MessageBox.Show(Resources.IDS_WARNING_SAVE_CONFIG, this.Text,
                    MessageBoxButtons.YesNo, MessageBoxIcon.Question))
            {
                SaveButton_Click(sender, e);
            }
        }
    }
}
