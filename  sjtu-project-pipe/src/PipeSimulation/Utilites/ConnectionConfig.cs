using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;
using System.Text.RegularExpressions;

namespace PipeSimulation.Utility
{
    public class ConnectionConfig
    {
        static private ConnectionConfig m_instance = null;
        private Configuration m_config = ConfigurationManager.OpenExeConfiguration(ConfigurationUserLevel.None);
        private bool m_modified = false;

        static public ConnectionConfig Instance()
        {
            if (m_instance == null)
                m_instance = new ConnectionConfig();

            return m_instance;
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
                //ConnectionSection oldConnSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;
                //ConnectionSection newConnSec = new ConnectionSection();

                //newConnSec.AutoConnect = oldConnSec.AutoConnect;
                //newConnSec.ReadInterval = oldConnSec.ReadInterval;

                //m_config.Sections.Remove("connectionSection");
                //m_config.Sections.Add("connectionSection", newConnSec);
                m_config.Save(ConfigurationSaveMode.Full);

                ConfigurationManager.RefreshSection("ConnectionStrings");
                ConfigurationManager.RefreshSection("connectionSection");
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
                //Hashtable ht = m_config.GetSection("connectionSection") as Hashtable;

                //Hashtable ht = ConfigurationManager.GetSection("connectionSection") as Hashtable;

                //return Convert.ToBoolean(ht["AutoConnect"]);
                ConnectionSection connSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;

                return connSec.AutoConnect;

                //System.Collections.Specialized.NameValueCollection nv = ConfigurationManager.GetSection("connectionSection")
                //    as System.Collections.Specialized.NameValueCollection;
                //return Convert.ToBoolean(nv["AutoConnect"]);
            }
            set
            {
                //m_config.Sections.Remove("connectionSection");
                ConnectionSection connSec = m_config.GetSection("connectionSection") as ConnectionSection;

                //connSec.SectionInformation.ForceSave = true;
                connSec.AutoConnect = value;
                m_modified = true;
            }
        }

        internal double ReadInterval
        {
            get
            {
                ConnectionSection connSec = ConfigurationManager.GetSection("connectionSection") as ConnectionSection;

                return connSec.ReadInterval.TotalMilliseconds;
                //Hashtable ht = ConfigurationManager.GetSection("connectionSection") as Hashtable;

                //return Convert.ToDouble(ht["ReadInterval"]);
                //System.Collections.Specialized.NameValueCollection nv = ConfigurationManager.GetSection("connectionSection")
                //    as System.Collections.Specialized.NameValueCollection;

                //return Convert.ToDouble(nv["ReadInterval"]);
            }
            set
            {
                ConnectionSection connSec = m_config.GetSection("connectionSection") as ConnectionSection;

                //connSec.SectionInformation.ForceSave = true;
                connSec.ReadInterval = TimeSpan.FromMilliseconds(value);
                m_modified = true;
            }
        }

    }

    // Define a custom section.
    // The CustomSection type allows to define a custom section 
    // programmatically.
    public sealed class ConnectionSection : ConfigurationSection
    {
        // CustomSection constructor.
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

        [ConfigurationProperty("ReadInterval", DefaultValue = "0:0:0.500", IsRequired = true)]
        [TimeSpanValidator(MinValueString = "0:0:0.100", MaxValueString = "0:10:0", ExcludeRange = false)]
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
