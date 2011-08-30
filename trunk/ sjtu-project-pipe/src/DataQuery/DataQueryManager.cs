using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace PipeSimulation.DataQuery
{
    public class DataQueryManager
    {
        public static IRealtimeDataQuery GetRealTimeQuery(string dbAdress, string dbName, string userName, string password, double interval)
        {
            return new RealTimeDataQuery(dbAdress, dbName, userName, password, interval);
        }

        public static IRealtimeDataQuery GetRealTimeQuery(string connString, double interval)
        {
            return new RealTimeDataQuery(connString, interval);
        }

        public static IHistoryDataQuery GetHistoricalQuery(string dbAdress, string dbName, string userName, string password)
        {
            return new HistoricalDataQuery(dbAdress, dbName, userName, password);
        }

        public static IHistoryDataQuery GetHistoricalQuery(string connString)
        {
            return new HistoricalDataQuery(connString);
        }
    }
}
