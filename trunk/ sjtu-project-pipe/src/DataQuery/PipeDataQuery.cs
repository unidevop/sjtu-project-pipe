#define NEW_DATA_APPROACH

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using System.Data.SqlClient;
using System.Windows.Media.Media3D;
using System.Timers;

namespace PipeSimulation.DataQuery
{
    abstract class PipeDataQuery : IBaseDataQuery
    {
        private string m_connString;

        protected SqlConnection m_dbConn;

#if !NEW_DATA_APPROACH
        // default incline to GPS time tolerance is 0.3s
        protected static TimeSpan m_inclineGPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 300);

        // default incline and GPS time tolerance is 0.01s
        protected static TimeSpan m_GPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 10);
#endif

        // interval is in milliseconds
        public PipeDataQuery(string dbAdress, string dbName, string userName, string password)
        {
            m_connString =
                String.Format("Data Source={0};Initial Catalog={1};User Id={2};Password={3};",
                dbAdress, dbName, userName, password);

            //Connect();
        }

        // interval is in milliseconds
        public PipeDataQuery(string connString)
        {
            m_connString = connString;

            //Connect();
        }

        ~PipeDataQuery()
        {
            Dispose();
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
                Disconnect();
            }
        }

        public void Connect()
        {
            if (IsConnected)
                return;

            if (m_dbConn == null)
                m_dbConn = new SqlConnection(m_connString);

            m_dbConn.Open();

            BeginReadData();
        }

        public void Disconnect()
        {
            EndReadData();

            if (m_dbConn != null)
            {
                m_dbConn.Close();
                m_dbConn = null;
            }
        }

        //public SqlDataReader TestDataConn()
        //{
        //    //try
        //    //{
        //    SqlCommand sqlcom = new SqlCommand("SELECT * FROM GPSMeasure", m_dbConn);

        //    return sqlcom.ExecuteReader();
        //    //}
        //    //catch (Exception a)
        //    //{

        //    //}
        //}

        // Flag to indicate if connect to data engine successfully
        public bool IsConnected
        {
            get
            {
                return (m_dbConn != null) && (m_dbConn.State & ConnectionState.Open) != 0;
            }
        }

        protected virtual void BeginReadData()
        {
        }

        protected virtual void EndReadData()
        {
        }
        
#if NEW_DATA_APPROACH
        protected PipeInfo ToPipeInfo(SqlDataReader sqlDataReader, out int lastGPSMeasureId, out int lastInclineMeasureId)
        {
            PipeInfo pipeInfo = null;

            if (sqlDataReader.Read())
            {
                pipeInfo = new PipeInfo((int)(sqlDataReader.GetDecimal(0)));

                pipeInfo.Time = sqlDataReader.GetDateTime(1);
                pipeInfo.StartPoint = new Point3D((double)(sqlDataReader.GetDecimal(2)),
                                                  (double)(sqlDataReader.GetDecimal(3)),
                                                  (double)(sqlDataReader.GetDecimal(4)));
                pipeInfo.EndPoint = new Point3D((double)(sqlDataReader.GetDecimal(5)),
                                                 (double)(sqlDataReader.GetDecimal(6)),
                                                 (double)(sqlDataReader.GetDecimal(7)));
                pipeInfo.Alpha = (double)(sqlDataReader.GetDecimal(8));
                pipeInfo.Beta = (double)(sqlDataReader.GetDecimal(9));

                if (sqlDataReader.FieldCount > 10)
                {
                    lastGPSMeasureId = (int)(sqlDataReader.GetDecimal(10));
                    lastInclineMeasureId = (int)(sqlDataReader.GetDecimal(11));
                }
            }

            lastGPSMeasureId = 0;
            lastInclineMeasureId = 0;

            return pipeInfo;
        }

        protected PipeInfo ToPipeInfo(SqlDataReader sqlDataReader)
        {
            int lastGPSMeasureId;
            int lastInclineMeasureId;

            return ToPipeInfo(sqlDataReader, out lastGPSMeasureId, out lastInclineMeasureId);
        }

        protected PipeInfo ReadLatestData()
        {
            string strSql = @"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
              GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, InclineMeasure.Angle1, InclineMeasure.Angle2
              FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON (GPS1.PipeID=GPS2.PipeID AND
              GPS1.MeasureTime = GPS2.MeasureTime AND GPS1.ProjectPointID < GPS2.ProjectPointID) 
              INNER JOIN InclineMeasure ON (GPS1.PipeID=InclineMeasure.PipeID AND GPS1.MeasureTime=InclineMeasure.MeasureTime)
              ORDER BY GPS1.MeasureID DESC";

            lock (m_dbConn)
            {
                //  read GPS records
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        return ToPipeInfo(sqlDataReader);
                    }
                } 
            }
        }

#else
        protected List<GPSRecord> ToGPSRecords(SqlDataReader sqlDataReader)
        {
            List<GPSRecord> lstRecords = null;
            GPSRecord record = new GPSRecord();

            while (sqlDataReader.Read())
            {
                record.MeasureId = sqlDataReader.GetInt32(0);
                record.PipeId = sqlDataReader.GetInt32(1);
                record.ProjectPointId = sqlDataReader.GetInt32(2);
                record.MeasureTime = sqlDataReader.GetDateTime(3);
                record.Location = new Point3D(sqlDataReader.GetDouble(4),
                                              sqlDataReader.GetDouble(5),
                                              sqlDataReader.GetDouble(6));

                lstRecords.Add(record);
            }

            return lstRecords;
        }

        protected List<InclineRecord> ToInclineRecords(SqlDataReader sqlDataReader)
        {
            List<InclineRecord> lstRecords = null;
            InclineRecord record = new InclineRecord();

            while (sqlDataReader.Read())
            {
                record.MeasureId = sqlDataReader.GetInt32(0);
                record.PipeId = sqlDataReader.GetInt32(1);
                record.ProjectPointId = sqlDataReader.GetInt32(2);
                record.MeasureTime = sqlDataReader.GetDateTime(3);
                record.Alpha = sqlDataReader.GetDouble(4);
                record.Beta = sqlDataReader.GetDouble(5);

                lstRecords.Add(record);
            }

            return lstRecords;
        }

        protected PipeInfo ExtractPipeInfo(List<GPSRecord> lstGPSRecords, List<InclineRecord> lstInclineRecords,
                                          out int lastGPSMeasureId, out int lastInclineMeasureId)
        {
            for (int idx = lstInclineRecords.Count - 1; idx >= 0; idx++)
            {
                PipeInfo pipeInfo = ExtractPipeInfo(lstGPSRecords, lstInclineRecords[idx], out lastGPSMeasureId);

                if (pipeInfo != null)
                {
                    lastInclineMeasureId = lstInclineRecords[idx].MeasureId;

                    return pipeInfo;
                }
            }
            lastGPSMeasureId = 0;
            lastInclineMeasureId = 0;

            return null;
        }

        protected PipeInfo ExtractPipeInfo(List<GPSRecord> lstGPSRecords, InclineRecord inclineRcd, out int lastGPSMeasureId)
        {
            for (int idx = lstGPSRecords.Count - 1; idx >= 0; idx++)
            {
                // find first matching GPS Record
                if (inclineRcd.PipeId == lstGPSRecords[idx].PipeId &&
                    (inclineRcd.MeasureTime - lstGPSRecords[idx].MeasureTime).Duration() <= m_inclineGPSMeasureTimeTolerance)
                {
                    for (int jdx = idx - 1; jdx >= 0; jdx++)
                    {
                        //  find send matching GPS Record
                        if (inclineRcd.PipeId == lstGPSRecords[jdx].PipeId &&
                            lstGPSRecords[idx].ProjectPointId != lstGPSRecords[jdx].ProjectPointId &&
                            (lstGPSRecords[idx].MeasureTime - lstGPSRecords[jdx].MeasureTime).Duration() <= m_GPSMeasureTimeTolerance)
                        {
                            GPSRecord gpsPrjPt1 = (lstGPSRecords[idx].ProjectPointId < lstGPSRecords[jdx].ProjectPointId) ?
                                lstGPSRecords[idx] : lstGPSRecords[jdx];
                            GPSRecord gpsPrjPt2 = (lstGPSRecords[idx].ProjectPointId < lstGPSRecords[jdx].ProjectPointId) ?
                                lstGPSRecords[jdx] : lstGPSRecords[idx];

                            PipeInfo pipeInfo = new PipeInfo(inclineRcd.PipeId, gpsPrjPt1.Location, gpsPrjPt2.Location,
                                inclineRcd.Alpha, inclineRcd.Beta, inclineRcd.MeasureTime);
                            lastGPSMeasureId = lstGPSRecords[idx].MeasureId;

                            return pipeInfo;
                        }
                    }
                }
            }
            lastGPSMeasureId = 0;

            return null;
        }
#endif
    }

    class RealTimeDataQuery : PipeDataQuery, IRealtimeDataQuery
    {
        public event DataArrivedCallbackType DataArrivedCallback;

        //  100 milliseconds
        private Timer m_timer = new Timer(100);
        private bool m_isReading = false;

        protected int m_lastGPSMeasureId = 0;
        protected int m_lastInclineMeasureId = 0;

#if !NEW_DATA_APPROACH
        private static readonly int m_firstReadCnt = 10;
#endif

        public RealTimeDataQuery(string dbAdress, string dbName,
                                 string userName, string password,
                                 double interval)
            : base(dbAdress, dbName, userName, password)
        {
            m_timer.Interval = interval;
        }

        public RealTimeDataQuery(string connString, double interval)
            : base(connString)
        {
            m_timer.Interval = interval;
        }

        protected override void Dispose(bool disposing)
        {
            base.Dispose(disposing);

            if (disposing)
            {
                m_timer.Dispose();
            }
        }

        protected override void BeginReadData()
        {
            m_timer.Elapsed += new ElapsedEventHandler(ReadData);
            m_timer.AutoReset = true;
            m_timer.Enabled = true;
        }

        void ReadData(object sender, ElapsedEventArgs e)
        {
            lock (m_timer)  //  avoid self competition
            {
                try
                {
                    PipeInfo latestData = null;

                    if (!m_isReading)
                    {
                        latestData = ReadStartData();

                        if (latestData != null)
                            m_isReading = true;
                    }
                    else
#if NEW_DATA_APPROACH
                        latestData = ReadLatestUnReadData();
#else
                latestData = ReadLatestData();
#endif

                    if (latestData != null && DataArrivedCallback != null)
                        DataArrivedCallback(latestData);
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Exception: {0}", ex.Message);
                    Console.WriteLine("Exception: {0}", ex.StackTrace);
                }
            }
        }

        protected override void EndReadData()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(ReadData);
            m_timer.Enabled = false;

            m_isReading = false;
        }

#if NEW_DATA_APPROACH
        protected PipeInfo ReadStartData()
        {
            string strSql = @"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
              GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, InclineMeasure.Angle1, InclineMeasure.Angle2, GPS1.MeasureID, InclineMeasure.MeasureID 
              FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON (GPS1.PipeID=GPS2.PipeID AND
              GPS1.MeasureTime = GPS2.MeasureTime AND GPS1.ProjectPointID < GPS2.ProjectPointID) 
              INNER JOIN InclineMeasure ON (GPS1.PipeID=InclineMeasure.PipeID AND GPS1.MeasureTime=InclineMeasure.MeasureTime)
              ORDER BY GPS1.MeasureID DESC";

            lock (m_dbConn)
            {
                //  read GPS records
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        return ToPipeInfo(sqlDataReader, out m_lastGPSMeasureId, out m_lastInclineMeasureId);
                    }
                } 
            }
        }

        protected PipeInfo ReadLatestUnReadData()
        {
            string strSql = String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
              GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, InclineMeasure.Angle1, InclineMeasure.Angle2, GPS1.MeasureID, InclineMeasure.MeasureID 
              FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON (GPS1.PipeID=GPS2.PipeID AND
              GPS1.MeasureTime = GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID AND GPS1.MeasureID>{0}) 
              INNER JOIN InclineMeasure ON (GPS1.PipeID=InclineMeasure.PipeID AND
              GPS1.MeasureTime=InclineMeasure.MeasureTime AND InclineMeasure.MeasureID>{1})
              ORDER BY GPS1.MeasureID DESC", m_lastGPSMeasureId, m_lastInclineMeasureId);

            lock (m_dbConn)
            {
                //  read GPS records
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        return ToPipeInfo(sqlDataReader, out m_lastGPSMeasureId, out m_lastInclineMeasureId);
                    }
                } 
            }
        }

#else
        protected PipeInfo ReadStartData()
        {
            string strGpsSql = String.Format("SELECT TOP {0} * FROM GPSMeasure ORDER BY MeasureID DESC", m_firstReadCnt);
            string strInclineSql = String.Format("SELECT TOP {0} * FROM InclineMeasure ORDER BY MeasureID DESC", m_firstReadCnt);

            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            //  read GPS records
            sqlCmd = new SqlCommand(strGpsSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            List<GPSRecord> lstGPSRecords = ToGPSRecords(sqlDataReader);
            //  reverse data
            lstGPSRecords.Reverse();

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            List<InclineRecord> lstInclineRecords = ToInclineRecords(sqlDataReader);
            lstInclineRecords.Reverse();

            return ExtractPipeInfo(lstGPSRecords, lstInclineRecords, out m_lastGPSMeasureId, out m_lastInclineMeasureId);
        }

        PipeInfo ReadLatestData()
        {
            if (!m_isReading)
                return null;

            string strGpsSql = String.Format("SELECT * FROM GPSMeasure WHERE MeasureID > {0}", m_lastGPSMeasureId);
            string strInclineSql = String.Format("SELECT * FROM InclineMeasure WHERE MeasureID > {0}", m_lastInclineMeasureId);

            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            //  read GPS records
            sqlCmd = new SqlCommand(strGpsSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            List<GPSRecord> lstGPSRecords = ToGPSRecords(sqlDataReader);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            List<InclineRecord> lstInclineRecords = ToInclineRecords(sqlDataReader);

            return ExtractPipeInfo(lstGPSRecords, lstInclineRecords, out m_lastGPSMeasureId, out m_lastInclineMeasureId);
        }
#endif

        public PipeInfo FetchLatestData()
        {
            return ReadLatestData();
        }
    }

    class HistoricalDataQuery : PipeDataQuery, IHistoryDataQuery
    {
        // default time tolerance is 0.5s
        protected static TimeSpan m_timeTolerance = new TimeSpan(0, 0, 0, 0, 500);

        public HistoricalDataQuery(string dbAdress, string dbName,
                                   string userName, string password)
            : base(dbAdress, dbName, userName, password)
        {
        }

        public HistoricalDataQuery(string connString)
            : base(connString)
        {
        }

#if NEW_DATA_APPROACH
        /// <summary>
        /// 
        /// </summary>
        /// <param name="iPipeId"></param>
        /// <returns></returns>
        public bool IsPipeStarted(int iPipeId)
        {
            PipeInfo pipeInfo = ReadLatestData();

            return pipeInfo != null ? pipeInfo.PipeId >= iPipeId : false;
        }
#else
         //Query
        public bool IsPipeStarted(int iPipeId)
        {
            string strGpsSql = "SELECT TOP 1 PipeID FROM GPSMeasure ORDER BY MeasureID DESC";

            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            //  read GPS records
            sqlCmd = new SqlCommand(strGpsSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read() && (sqlDataReader.GetInt32(0)) >= iPipeId)
                return true;

            string strInclineSql = "SELECT TOP 1 PipeID FROM InclineMeasure ORDER BY MeasureID DESC";

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read() && (sqlDataReader.GetInt32(0)) >= iPipeId)
                return true;

            return false;
        }
#endif

        /// <summary>
        /// Cannot work with last pipe
        /// </summary>
        /// <param name="iPipeId"></param>
        /// <returns></returns>
        public bool IsPipeEnded(int iPipeId)
        {
            return IsPipeStarted(iPipeId + 1);
        }

        public long GetPipeRecordCount(int iPipeId)
        {
            string strInclineSql = String.Format(@"SELECT COUNT(MeasureID) FROM InclineMeasure
                                                   WHERE PipeID={0}", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        if (sqlDataReader.Read())
                            return sqlDataReader.GetInt32(0);
                    }
                } 
            }
            return 0;
        }

#if NEW_DATA_APPROACH
        public PipeInfo GetPipeRecord(int iPipeId, int iRecordIndex)
        {
            string strSql = String.Format(@"SELECT GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2
                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime AND IM1.MeasureID=
                (SELECT TOP 1 * FROM (SELECT TOP {0} MeasureID FROM InclineMeasure AS IM2 WHERE IM2.PipeID = {1} 
                ORDER BY MeasureID ASC) InclineMeasure ORDER BY MeasureID DESC))",
                iRecordIndex, iPipeId);

            lock (m_dbConn)
            {
                //  read record
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        return ToPipeInfo(sqlDataReader);
                    }
                } 
            }
        }

        public PipeInfo GetPipeRecord(DateTime dateTime)
        {
            string strSql = String.Format(@"SELECT GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2
                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime AND 
                ABS(DATEDIFF(MILLISECOND, IM1.MeasureTime, '{0}')) < {1}) ORDER BY
                ABS(DATEDIFF(MILLISECOND, IM1.MeasureTime, '{2}'))",
                dateTime, m_timeTolerance.TotalMilliseconds, dateTime);

            lock (m_dbConn)
            {
                //  read record
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        return ToPipeInfo(sqlDataReader);
                    }
                } 
            }
        }
#else
        public PipeInfo GetPipeRecord(int iPipeId, int iRecordIndex)
        {
            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            string strInclineSql = String.Format("SELECT TOP 1 * FROM (SELECT TOP {0} * FROM InclineMeasure WHERE PipeID = {1}) InclineMeasure ORDER BY MeasureTime DESC",
                iRecordIndex, iPipeId);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            List<InclineRecord> lstInclineRecords = ToInclineRecords(sqlDataReader);

            if (lstInclineRecords.Count == 1)
            {
                string strGpsSql = String.Format("SELECT * FROM GPSMeasure WHERE ABS(DATEDIFF(SECOND, MeasureTime, '{0}')) <= 1",
                                                 lstInclineRecords[0].MeasureTime);

                //  read GPS records
                sqlCmd = new SqlCommand(strGpsSql, m_dbConn);
                sqlDataReader = sqlCmd.ExecuteReader();

                List<GPSRecord> lstGPSRecords = ToGPSRecords(sqlDataReader);
                int lastGPSMeasureId;

                return ExtractPipeInfo(lstGPSRecords, lstInclineRecords[0], out lastGPSMeasureId);
            }

            return null;
        }

        public PipeInfo GetPipeRecord(DateTime dateTime)
        {
            return null;
        }
#endif

        public DateTime GetPipeStartTime(int iPipeId)
        {
            string strInclineSql = String.Format(@"SELECT TOP 1 MeasureTime FROM InclineMeasure
                                                   WHERE PipeID = {0}", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        if (sqlDataReader.Read())
                            return sqlDataReader.GetDateTime(0);
                    }
                } 
            }

            return new DateTime();
        }

        public DateTime GetPipeEndTime(int iPipeId)
        {
            string strInclineSql = String.Format(@"SELECT TOP 1 MeasureTime FROM InclineMeasure
                                                   WHERE PipeID = {0} ORDER BY MeasureTime DESC", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        if (sqlDataReader.Read())
                            return sqlDataReader.GetDateTime(0);
                    }
                } 
            }

            return new DateTime();
        }

        public DateTime GetPipeTime(int iPipeId, int iRecordIndex)
        {
            string strInclineSql = String.Format(@"SELECT TOP 1 * FROM (SELECT TOP {0} MeasureTime FROM InclineMeasure
                                                   WHERE PipeID = {1}) InclineMeasure ORDER BY MeasureTime DESC",
                                                 iRecordIndex, iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        if (sqlDataReader.Read())
                            return sqlDataReader.GetDateTime(0);
                    }
                } 
            }

            return new DateTime();
        }
    }
}
