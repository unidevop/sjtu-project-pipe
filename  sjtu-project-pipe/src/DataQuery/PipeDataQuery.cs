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

        // default incline to GPS time tolerance is 0.3s
        protected static TimeSpan m_inclineGPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 300);

        // default incline and GPS time tolerance is 0.01s
        protected static TimeSpan m_GPSMeasureTimeTolerance = new TimeSpan(0, 0, 0, 10);

        // interval is in milliseconds
        public PipeDataQuery(string dbAdress, string dbName, string userName, string password)
        {
            m_connString =
                String.Format("Data Source={0};Initial Catalog={1};User Id={2};Password={3};",
                dbAdress, dbName, userName, password);

            Connect();
        }

        // interval is in milliseconds
        public PipeDataQuery(string connString)
        {
            m_connString = connString;

            Connect();
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

        protected List<GPSRecord> ToGPSRecords(SqlDataReader sqlDataReader)
        {
            List<GPSRecord> lstRecords = null;
            GPSRecord record = new GPSRecord();

            while (sqlDataReader.Read())
            {
                record.MeasureId = sqlDataReader.GetInt32(0);
                record.PipeId = sqlDataReader.GetString(1);
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
                record.PipeId = sqlDataReader.GetString(1);
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
                    lastInclineMeasureId = idx;

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
                            lastGPSMeasureId = idx;

                            return pipeInfo;
                        }
                    }
                }
            }
            lastGPSMeasureId = 0;

            return null;
        }
    }

    class RealTimeDataQuery : PipeDataQuery, IRealtimeDataQuery
    {
        public event DataArrivedCallbackType DataArrivedCallback;

        //  100 milliseconds
        private Timer m_timer = new Timer(100);
        private bool m_isReading = false;

        protected int m_lastGPSMeasureId = 0;
        protected int m_lastInclineMeasureId = 0;

        private static readonly int m_firstReadCnt = 10;

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
            PipeInfo latestData = null;

            if (!m_isReading)
            {
                latestData = ReadStartData();

                if (latestData != null)
                    m_isReading = true;
            }
            else
                latestData = ReadLatestData();

            if (latestData != null && DataArrivedCallback != null)
                DataArrivedCallback(latestData);
        }

        protected override void EndReadData()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(ReadData);
            m_timer.Enabled = false;

            m_isReading = false;
        }

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

        public PipeInfo FetchLatestData()
        {
            return ReadLatestData();
        }

        // Query
        //public override bool IsPipeStarted(int iPipeId)
        //{
        //    string strGpsSql = "SELECT TOP 1 PipeID FROM GPSMeasure ORDER BY MeasureID DESC";

        //    SqlCommand sqlCmd = null;
        //    SqlDataReader sqlDataReader = null;

        //    //  read GPS records
        //    sqlCmd = new SqlCommand(strGpsSql, m_dbConn);
        //    sqlDataReader = sqlCmd.ExecuteReader();

        //    if (sqlDataReader.Read() && (sqlDataReader.GetInt32(0)) == iPipeId)
        //        return true;

        //    string strInclineSql = "SELECT TOP 1 PipeID FROM InclineMeasure ORDER BY MeasureID DESC";

        //    //  read Incline records
        //    sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
        //    sqlDataReader = sqlCmd.ExecuteReader();

        //    if (sqlDataReader.Read() && (sqlDataReader.GetInt32(0)) == iPipeId)
        //        return true;

        //    return false;
        //}

        //public override bool IsPipeEnded(int iPipeId)
        //{
        //    return !IsPipeStarted(iPipeId);
        //}
    }

    class HistoricalDataQuery : PipeDataQuery, IHistoryDataQuery
    {
        public HistoricalDataQuery(string dbAdress, string dbName,
                                   string userName, string password)
            : base(dbAdress, dbName, userName, password)
        {
        }

        public HistoricalDataQuery(string connString)
            : base(connString)
        {
        }

        // TODO: to be implemented
        public bool IsPipeStarted(int iPipeId)
        {
            return false;
        }

        // TODO: to be implemented
        public bool IsPipeEnded(int iPipeId)
        {
            return false;
        }

        public long GetPipeRecordCount(int iPipeId)
        {
            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            string strInclineSql = String.Format("SELECT COUNT(MeasureID) FROM InclineMeasure WHERE PipeID={0}", iPipeId);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read())
                return sqlDataReader.GetInt64(0);

            return 0;
        }

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

        public DateTime GetPipeStartTime(int iPipeId)
        {
            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            string strInclineSql = String.Format("SELECT TOP 1 MeasureTime FROM InclineMeasure WHERE PipeID = {0}", iPipeId);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read())
                return sqlDataReader.GetDateTime(0);

            return new DateTime();
        }

        public DateTime GetPipeEndTime(int iPipeId)
        {
            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            string strInclineSql = String.Format("SELECT TOP 1 MeasureTime FROM InclineMeasure WHERE PipeID = {0} ORDER BY MeasureTime DESC", iPipeId);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read())
                return sqlDataReader.GetDateTime(0);

            return new DateTime();
        }

        public DateTime GetPipeTime(int iPipeId, int iRecordIndex)
        {
            SqlCommand sqlCmd = null;
            SqlDataReader sqlDataReader = null;

            string strInclineSql = String.Format("SELECT TOP 1 * FROM (SELECT TOP {0} MeasureTime FROM InclineMeasure WHERE PipeID = {1}) InclineMeasure ORDER BY MeasureTime DESC",
                iRecordIndex, iPipeId);

            //  read Incline records
            sqlCmd = new SqlCommand(strInclineSql, m_dbConn);
            sqlDataReader = sqlCmd.ExecuteReader();

            if (sqlDataReader.Read())
                return sqlDataReader.GetDateTime(0);

            return new DateTime();
        }
    }
}
