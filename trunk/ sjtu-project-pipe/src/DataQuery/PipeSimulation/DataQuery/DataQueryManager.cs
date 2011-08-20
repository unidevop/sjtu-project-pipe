using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace PipeSimulation.DataQuery
{
    public class DataQueryManager
    {
        public static IDataQuery GetRealTimeQuery(string dbAdress, string dbName, string userName, string password, double interval)
        {
            return new RealTimeDataQuery(dbAdress, dbName, userName, password, interval);
        }

        public static IDataQuery GetRealTimeQuery(string connString, double interval)
        {
            return new RealTimeDataQuery(connString, interval);
        }

        public static IDataQuery GetHistoricalQuery(string dbAdress, string dbName, string userName, string password, double interval)
        {
            return new HistoricalDataQuery(dbAdress, dbName, userName, password, interval);
        }

        public static IDataQuery GetHistoricalQuery(string connString, double interval)
        {
            return new HistoricalDataQuery(connString, interval);
        }
    }
}
