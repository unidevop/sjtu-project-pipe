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
            m_hasDataSource.Checked = true;
        }

        private void AutoConnectCheckedChanged(object sender, EventArgs e)
        {
            m_autoConnInterval.Enabled = m_autoConnect.Checked;
        }

        private void ConnectButtonClick(object sender, EventArgs e)
        {

        }

        private void HasDataSourceCheckedChanged(object sender, EventArgs e)
        {
            m_configGroup.Enabled = m_hasDataSource.Checked;
            m_connGroup.Enabled = m_hasDataSource.Checked;
        }
    }
}
