using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;
using System.Text.RegularExpressions;
using System.Timers;

namespace PipeSimulation.Utility
{
    public class ConnectionConfig : IDisposable
    {
        private Configuration m_config = ConfigurationManager.OpenExeConfiguration(ConfigurationUserLevel.None);
        private bool m_modified = false;

        //  default auto connect timer. 100 milliseconds
        private Timer m_timer = new Timer();

        public event Action ConfigChanged;
        public event Action AutoConnect;
        public event Action<bool> ConnectionChanged;

        internal ConnectionConfig()
        {
            m_timer.Interval = AutoConnectInterval.TotalMilliseconds;

            if (IsAutoConnect)
                StartAutoConnect();
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        protected virtual void Dispose(bool disposing)
        {
            if (disposing)
            {
                m_timer.Dispose();
            }
        }

        public void OnConnectionChanged(bool connectionStatus)
        {
            if (ConnectionChanged != null)
                ConnectionChanged(connectionStatus);
        }

        private void StartAutoConnect()
        {
            m_timer.Elapsed += new ElapsedEventHandler(OnAutoConnect);
            m_timer.AutoReset = true;
            m_timer.Enabled = true;
        }

        private void EndAutoConnect()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(OnAutoConnect);
            m_timer.Enabled = false;
        }

        private void OnAutoConnect(object sender, ElapsedEventArgs e)
        {
            if (AutoConnect != null)
                AutoConnect();
        }

        internal void SetConnectionString(string dbAdress, string userName, string password)
        {
            ConnectionString = String.Format("Data Source={0};Initial Catalog=MeasureDB;User Id={1};Password={2};",
                dbAdress, userName, password);
        }

        internal void Save()
        {
            if (m_modified)
            {
                m_config.Save(ConfigurationSaveMode.Modified);

                ConfigurationManager.RefreshSection("connectionStrings");
                ConfigurationManager.RefreshSection("connectionSection");

                m_timer.Interval = AutoConnectInterval.TotalMilliseconds;
                if (IsAutoConnect)
                    StartAutoConnect();
                else
                    EndAutoConnect();

                m_modified = false;

                if (ConfigChanged != null)
                    ConfigChanged();
            }
        }

        internal string ConnectionString
        {
            get
            {
                //return m_config.ConnectionStrings.ConnectionStrings["SQLDBConn"].ConnectionString;
                return ConfigurationManager.ConnectionStrings["SQLDBConn"].ConnectionString;
            }
            set
            {
                m_config.ConnectionStrings.ConnectionStrings["SQLDBConn"].ConnectionString = value;
                m_modified = true;
            }
        }

        internal string DbAdress
        {
            get
            {
                string pattern = @"(?<=\b(Data Source|Server|Address|Addr|Network Address)\s*?=\s*?)(.+?)(?=;)";

                Match match = Regex.Match(ConnectionString, pattern);

                return match.Success ? match.Value : null;
            }
        }

        internal string UserName
        {
            get
            {
                string pattern = @"(?<=\b(User Id)\s*?=\s*?)(\w+?)(?=;)";

                Match match = Regex.Match(ConnectionString, pattern);

                return match.Success ? match.Value : null;
            }
        }

        internal string Password
        {
            get
            {
                string pattern = @"(?<=\b(Password|Pwd)\s*?=\s*?)(.+?)(?=;)";

                Match match = Regex.Match(ConnectionString, pattern);

                return match.Success ? match.Value : null;
            }
        }

        internal bool IsAutoConnect
        {
            get
            {
                ConnectionSection connSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;

                return connSec.AutoConnect;
            }
            set
            {
                ConnectionSection connSec = m_config.GetSection("connectionSection") as ConnectionSection;

                //connSec.SectionInformation.ForceSave = true;
                connSec.AutoConnect = value;
                m_modified = true;
            }
        }

        internal TimeSpan ReadInterval
        {
            get
            {
                ConnectionSection connSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;

                return connSec.ReadInterval;
            }
            set
            {
                ConnectionSection connSec = m_config.GetSection("connectionSection") as ConnectionSection;

                //connSec.SectionInformation.ForceSave = true;
                connSec.ReadInterval = value;
                m_modified = true;
            }
        }

        internal TimeSpan AutoConnectInterval
        {
            get
            {
                ConnectionSection connSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;

                return connSec.AutoConnectInterval;
            }
            set
            {
                ConnectionSection connSec = m_config.GetSection("connectionSection") as ConnectionSection;

                //connSec.SectionInformation.ForceSave = true;
                connSec.AutoConnectInterval = value;
                m_modified = true;
            }
        }

    }

    // Define a custom section.
    // The CustomSection type allows to define a custom section programmatically.
    public sealed class ConnectionSection : ConfigurationSection
    {
        public ConnectionSection()
        {
        }

        [ConfigurationProperty("AutoConnect", DefaultValue = "true", IsRequired = true)]
        public bool AutoConnect
        {
            get
            {
                return (bool)this["AutoConnect"];
            }
            set
            {
                this["AutoConnect"] = value;
            }
        }

        [ConfigurationProperty("AutoConnectInterval", DefaultValue = "0:0:5", IsRequired = true)]
        //[TimeSpanValidator(MinValueString = "0:0:0.100", MaxValueString = "0:10:00.000", ExcludeRange = false)]
        public TimeSpan AutoConnectInterval
        {
            get
            {
                return (TimeSpan)this["AutoConnectInterval"];
            }
            set
            {
                this["AutoConnectInterval"] = value;
            }
        }

        [ConfigurationProperty("ReadInterval", DefaultValue = "0:0:0.500", IsRequired = true)]
        //[TimeSpanValidator(MinValueString = "0:0:0.100", MaxValueString = "0:10:00.000", ExcludeRange = false)]
        public TimeSpan ReadInterval
        {
            get
            {
                return (TimeSpan)this["ReadInterval"];
            }
            set
            {
                this["ReadInterval"] = value;
            }
        }

        public override bool IsReadOnly()
        {
            return false;
        }
    }
}
