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
    public partial class ConnectionSetting : Form
    {
        public ConnectionSetting()
        {
            InitializeComponent();
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            m_autoConnect.Checked = true;
            m_isConfigConn.Checked = false;

            AutoConnect_CheckedChanged(m_autoConnect, null);
            IsConfigConnection_CheckedChanged(m_isConfigConn, null);
        }

        private void AutoConnect_CheckedChanged(object sender, EventArgs e)
        {
            m_autoConnInterval.Enabled = m_autoConnect.Checked;
        }

        private void Connect_ButtonClick(object sender, EventArgs e)
        {

        }

        private void IsConfigConnection_CheckedChanged(object sender, EventArgs e)
        {
            m_connConfigGroup.Enabled = m_isConfigConn.Checked;
            //m_configGroup.Enabled = m_isConfigConn.Checked;
            //m_connGroup.Enabled = m_isConfigConn.Checked;
        }
    }
}
