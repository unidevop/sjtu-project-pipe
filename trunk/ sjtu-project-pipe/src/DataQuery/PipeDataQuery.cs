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

        #region comment
#if !NEW_DATA_APPROACH
        // default incline to GPS time tolerance is 0.3s
        protected static TimeSpan m_inclineGPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 300);

        // default incline and GPS time tolerance is 0.01s
        protected static TimeSpan m_GPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 10);
#endif
        #endregion

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

            //BeginReadData();
        }

        public virtual void Disconnect()
        {
            //EndReadData();

            if (m_dbConn != null)
            {
                m_dbConn.Close();
                m_dbConn = null;
            }
        }

        // Flag to indicate if connect to data engine successfully
        public bool IsConnected
        {
            get
            {
                return (m_dbConn != null) && (m_dbConn.State == ConnectionState.Open);
            }
        }

        protected virtual void SetMaxAngle(PipeInfo pipeInfo)
        {
            if (pipeInfo == null)
                return;

            double maxAbsRoll;
            double maxAbsPitch;

            QueryMaxAngle(pipeInfo, out maxAbsRoll, out maxAbsPitch);

            pipeInfo.MaxAbsRoll = maxAbsRoll;
            pipeInfo.MaxAbsPitch = maxAbsPitch;
        }

        protected void QueryMaxAngle(PipeInfo pipeInfo, out double maxAbsRoll, out double maxAbsPitch)
        {
            maxAbsRoll = 0.0;
            maxAbsPitch = 0.0;

            if (pipeInfo == null)
                return;

            string strInclineSql = String.Format(@"SELECT MAX(ABS(Angle1)) AS MaxAlpha, MAX(ABS(Angle2)) AS MaxBeta 
                                                   FROM InclineMeasure WHERE PipeID='{0}' AND MeasureID <='{1}'",
                                                   pipeInfo.PipeId, pipeInfo.InclineMeasureId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        if (sqlDataReader.Read())
                        {
                            maxAbsRoll = (double)(sqlDataReader.GetDecimal(0));
                            maxAbsPitch = (double)(sqlDataReader.GetDecimal(1));
                        }
                    }
                }
            }
        }

        protected PipeInfo QueryRecord(string strSql, bool queryMaxAngle)
        {
            lock (m_dbConn)
            {
                PipeInfo pipeInfo = null;

                //  read pipe records
                using (SqlCommand sqlCmd = new SqlCommand(strSql, m_dbConn))
                {
                    using (SqlDataReader sqlDataReader = sqlCmd.ExecuteReader())
                    {
                        pipeInfo = ToPipeInfo(sqlDataReader);
                    }
                }

                if (queryMaxAngle)
                    SetMaxAngle(pipeInfo);

                return pipeInfo;
            }
        }

#if NEW_DATA_APPROACH
        private PipeInfo ToPipeInfo(SqlDataReader sqlDataReader)
        {
            PipeInfo pipeInfo = null;

            if (sqlDataReader.Read() && sqlDataReader.FieldCount > 11)
            {
                pipeInfo = new PipeInfo((int)(sqlDataReader.GetDecimal(0)),
                                        (int)(sqlDataReader.GetDecimal(10)),
                                        (int)(sqlDataReader.GetDecimal(11)));

                pipeInfo.Time = sqlDataReader.GetDateTime(1);
                pipeInfo.StartPoint = new Point3D((double)(sqlDataReader.GetDecimal(2)),
                                                  (double)(sqlDataReader.GetDecimal(3)),
                                                  (double)(sqlDataReader.GetDecimal(4)));
                pipeInfo.EndPoint = new Point3D((double)(sqlDataReader.GetDecimal(5)),
                                                 (double)(sqlDataReader.GetDecimal(6)),
                                                 (double)(sqlDataReader.GetDecimal(7)));
                pipeInfo.PitchInclineAngle = (double)(sqlDataReader.GetDecimal(8));
                pipeInfo.RollInclineAngle = (double)(sqlDataReader.GetDecimal(9));
            }

            return pipeInfo;
        }

        protected PipeInfo ReadLatestData(bool queryMaxAngle)
        {
            string strSql = @"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
              GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM.Angle1, IM.Angle2, GPS1.MeasureID, IM.MeasureID 
              FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON (GPS1.PipeID=GPS2.PipeID AND
              GPS1.MeasureTime = GPS2.MeasureTime AND GPS1.ProjectPointID < GPS2.ProjectPointID) 
              INNER JOIN InclineMeasure AS IM ON (GPS1.PipeID=IM.PipeID AND GPS1.MeasureTime=IM.MeasureTime)
              ORDER BY GPS1.MeasureID DESC";

            return QueryRecord(strSql, queryMaxAngle);
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

        private int m_currentPipeId = 0;
        private double m_maxAbsRoll = 0.0;
        private double m_maxAbsPitch = 0.0;

#if !NEW_DATA_APPROACH
        private static readonly int m_firstReadCnt = 10;
#endif

        public RealTimeDataQuery(string dbAdress, string dbName,
                                 string userName, string password,
                                 TimeSpan interval)
            : base(dbAdress, dbName, userName, password)
        {
            m_timer.Interval = interval.TotalMilliseconds;
        }

        public RealTimeDataQuery(string connString, TimeSpan interval)
            : base(connString)
        {
            m_timer.Interval = interval.TotalMilliseconds;
        }

        protected override void Dispose(bool disposing)
        {
            base.Dispose(disposing);

            if (disposing)
            {
                m_timer.Dispose();
            }
        }

        public override void Disconnect()
        {
            Deactivate();

            base.Disconnect();
        }

        public void Activate()
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

                    latestData = FetchLatestData();

                    if (latestData != null && DataArrivedCallback != null)
                        DataArrivedCallback(latestData);
                }
                catch (Exception ex)
                {
                    string errMsg = "Real time fetch data failed:\n" + ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }
        }

        public void Deactivate()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(ReadData);
            m_timer.Enabled = false;

            m_isReading = false;
        }

#if NEW_DATA_APPROACH
        protected PipeInfo ReadStartData()
        {
            PipeInfo pipeInfo = ReadLatestData(true);

            if (pipeInfo != null)
            {
                m_lastGPSMeasureId = pipeInfo.GpsMeasureId;
                m_lastInclineMeasureId = pipeInfo.InclineMeasureId;

                m_currentPipeId = pipeInfo.PipeId;
                QueryMaxAngle(pipeInfo, out m_maxAbsRoll, out m_maxAbsPitch);

                m_isReading = true;
            }

            return pipeInfo;
        }

        protected PipeInfo ReadLatestUnReadData()
        {
            string strSql = String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
              GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM.Angle1, IM.Angle2, GPS1.MeasureID, IM.MeasureID 
              FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON (GPS1.PipeID=GPS2.PipeID AND
              GPS1.MeasureTime = GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID AND GPS1.MeasureID>'{0}') 
              INNER JOIN InclineMeasure AS IM ON (GPS1.PipeID=IM.PipeID AND
              GPS1.MeasureTime=IM.MeasureTime AND IM.MeasureID>'{1}')
              ORDER BY GPS1.MeasureID DESC", m_lastGPSMeasureId, m_lastInclineMeasureId);

            PipeInfo pipeInfo = QueryRecord(strSql, true);

            if (pipeInfo != null)
            {
                m_lastGPSMeasureId = pipeInfo.GpsMeasureId;
                m_lastInclineMeasureId = pipeInfo.InclineMeasureId;
            }

            return pipeInfo;
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
            return m_isReading ? ReadLatestUnReadData() : ReadStartData();
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="pipeInfo"></param>
        protected override void SetMaxAngle(PipeInfo pipeInfo)
        {
            if (pipeInfo == null)
                return;

            if (pipeInfo.PipeId > m_currentPipeId)
            {
                m_maxAbsRoll = pipeInfo.RollInclineAngle;
                m_maxAbsPitch = pipeInfo.PitchInclineAngle;
            }
            else if (pipeInfo.PipeId == m_currentPipeId)
            {
                if (Math.Abs(pipeInfo.RollInclineAngle) > m_maxAbsRoll)
                    m_maxAbsRoll = pipeInfo.RollInclineAngle;

                if (Math.Abs(pipeInfo.PitchInclineAngle) > m_maxAbsPitch)
                    m_maxAbsPitch = pipeInfo.PitchInclineAngle;
            }

            pipeInfo.MaxAbsRoll = m_maxAbsRoll;
            pipeInfo.MaxAbsPitch = m_maxAbsPitch;
        }
    }

    class HistoricalDataQuery : PipeDataQuery, IHistoryDataQuery
    {
        // default time tolerance is 0.5s
        protected static TimeSpan m_timeTolerance = new TimeSpan(0, 0, 0, 1);

        private int m_latestPipeId = 0;

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
            if (iPipeId > m_latestPipeId)
            {
                PipeInfo pipeInfo = ReadLatestData(false);

                m_latestPipeId = pipeInfo != null ? pipeInfo.PipeId : 0;

                return m_latestPipeId >= iPipeId;
            }

            return true;
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
                                                   WHERE PipeID='{0}'", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    return (Int32)sqlCmd.ExecuteScalar();
                } 
            }
        }

#if NEW_DATA_APPROACH
        public PipeInfo GetPipeRecord(int iPipeId, int iRecordIndex)
        {
            string strSql = String.Format(@"SELECT GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2, GPS1.MeasureID, IM1.MeasureID 
                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime AND IM1.MeasureID=
                (SELECT TOP 1 * FROM (SELECT TOP {0} MeasureID FROM InclineMeasure AS IM2 WHERE IM2.PipeID='{1}' 
                ORDER BY MeasureID ASC) InclineMeasure ORDER BY MeasureID DESC))",
                iRecordIndex, iPipeId);

            return QueryRecord(strSql, true);
        }

        public PipeInfo GetPipeRecord(DateTime dateTime, bool bFindNearest)
        {
//            string strSql = bFindNearest ? String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
//                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2, GPS1.MeasureID, IM1.MeasureID 
//                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
//                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
//                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime) ORDER BY
//                ABS(DATEDIFF(MILLISECOND, IM1.MeasureTime, '{0:yyyy-MM-dd HH:mm:ss.fff}'))", dateTime) :
//            String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
//                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2, GPS1.MeasureID, IM1.MeasureID 
//                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
//                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
//                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime AND 
//                ABS(DATEDIFF(MILLISECOND, IM1.MeasureTime, '{0:yyyy-MM-dd HH:mm:ss.fff}')) < {1}) ORDER BY
//                ABS(DATEDIFF(MILLISECOND, IM1.MeasureTime, '{0:yyyy-MM-dd HH:mm:ss.fff}'))",
//                dateTime, m_timeTolerance.TotalMilliseconds);
            string strSql = bFindNearest ? String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2, GPS1.MeasureID, IM1.MeasureID 
                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime) AND
                IM1.MeasureTime>='{0:yyyy-MM-dd HH:mm:ss.fff}' ORDER BY IM1.MEASURETIME ASC", dateTime) :
            String.Format(@"SELECT TOP 1 GPS1.PipeID, GPS1.MeasureTime, GPS1.X AS X1, GPS1.Y AS Y1, GPS1.Z AS Z1,
                GPS2.X AS X2, GPS2.Y AS Y2, GPS2.Z AS Z3, IM1.Angle1, IM1.Angle2, GPS1.MeasureID, IM1.MeasureID 
                FROM GPSMeasure AS GPS1 INNER JOIN GPSMeasure AS GPS2 ON 
                (GPS1.PipeID=GPS2.PipeID AND GPS1.MeasureTime=GPS2.MeasureTime AND GPS1.ProjectPointID<GPS2.ProjectPointID) 
                INNER JOIN InclineMeasure AS IM1 ON (GPS1.PipeID=IM1.PipeID AND GPS1.MeasureTime=IM1.MeasureTime AND 
                IM1.MeasureTime>='{0:yyyy-MM-dd HH:mm:ss.fff}' AND IM1.MeasureTime<'{1:yyyy-MM-dd HH:mm:ss.fff}') AND
                IM1.MeasureTime>='{0:yyyy-MM-dd HH:mm:ss.fff}' ORDER BY IM1.MEASURETIME ASC",
                dateTime, dateTime + m_timeTolerance + m_timeTolerance);

            return QueryRecord(strSql, true);
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
                                                   WHERE PipeID='{0}'", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    Object dateTime = sqlCmd.ExecuteScalar();

                    return (dateTime != null) ? (DateTime)dateTime : new DateTime();
                } 
            }
        }

        public DateTime GetPipeEndTime(int iPipeId)
        {
            string strInclineSql = String.Format(@"SELECT TOP 1 MeasureTime FROM InclineMeasure
                                                   WHERE PipeID='{0}' ORDER BY MeasureTime DESC", iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    Object dateTime = sqlCmd.ExecuteScalar();

                    return (dateTime != null) ? (DateTime)dateTime : new DateTime();
                }
            }
        }

        public DateTime GetPipeTime(int iPipeId, int iRecordIndex)
        {
            string strInclineSql = String.Format(@"SELECT TOP 1 * FROM (SELECT TOP {0} MeasureTime FROM InclineMeasure
                                                   WHERE PipeID='{1}') InclineMeasure ORDER BY MeasureTime DESC",
                                                 iRecordIndex, iPipeId);

            lock (m_dbConn)
            {
                //  read Incline records
                using (SqlCommand sqlCmd = new SqlCommand(strInclineSql, m_dbConn))
                {
                    Object dateTime = sqlCmd.ExecuteScalar();

                    return (dateTime != null) ? (DateTime)dateTime : new DateTime();
                }
            }
        }
    }
}
