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
                m_config.Save(ConfigurationSaveMode.Modified);

                ConfigurationManager.RefreshSection("ConnectionStrings");
                //ConfigurationManager.RefreshSection("ConnectionStrings");
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

                Hashtable ht = ConfigurationManager.GetSection("connectionSection") as Hashtable;

                return Convert.ToBoolean(ht["AutoConnect"]);

                //System.Collections.Specialized.NameValueCollection nv = ConfigurationManager.GetSection("connectionSection")
                //    as System.Collections.Specialized.NameValueCollection;
                //return Convert.ToBoolean(nv["AutoConnect"]);
            }
            set
            {
                m_config.Sections.Remove("connectionSection");
//                m_config.Sections.Add(new );
            }
        }

        internal double ReadInterval
        {
            get
            {
                Hashtable ht = ConfigurationManager.GetSection("connectionSection") as Hashtable;

                return Convert.ToDouble(ht["ReadInterval"]);
                //System.Collections.Specialized.NameValueCollection nv = ConfigurationManager.GetSection("connectionSection")
                //    as System.Collections.Specialized.NameValueCollection;

                //return Convert.ToDouble(nv["ReadInterval"]);
            }
        }

    }
}
