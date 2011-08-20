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
    abstract class PipeDataQuery : IDataQuery
    {
        private string m_connString;

        protected bool m_isReading = false;
        protected int m_lastGPSMeasureId = 0;
        protected int m_lastInclineMeasureId = 0;

        protected SqlConnection m_dbConn;
        private   Timer m_timer = new Timer(10000);

        // interval is in milliseconds
        public PipeDataQuery(string dbAdress, string dbName, string userName, string password, double interval)
        {
            m_connString =
                String.Format("Data Source={0};Initial Catalog={1};User Id={2};Password={3};",
                dbAdress, dbName, userName, password);
            m_timer.Interval = interval;

            Connect();
        }

        // interval is in milliseconds
        public PipeDataQuery(string connString, double interval)
        {
            m_connString = connString;

            m_timer.Interval = interval;

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
                m_timer.Dispose();
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
                m_isReading = false;
            }
        }

        public SqlDataReader TestDataConn()
        {
            //try
            //{
                SqlCommand sqlcom = new SqlCommand("SELECT * FROM GPSMeasure", m_dbConn);

                return sqlcom.ExecuteReader();
            //}
            //catch (Exception a)
            //{
                
            //}
        }

        // Flag to indicate if connect to data engine successfully
        public bool IsConnected
        {
            get
            {
                return (m_dbConn != null) && (m_dbConn.State & ConnectionState.Open) != 0;
            }
        }

        void BeginReadData()
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

        void EndReadData()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(ReadData);
            m_timer.Enabled = false;
        }

        protected abstract PipeInfo ReadStartData();

        protected PipeInfo ReadLatestData()
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

            return ExtractPipeInfo(lstGPSRecords, lstInclineRecords);
        }

        protected List<GPSRecord> ToGPSRecords(SqlDataReader sqlDataReader)
        {
            List<GPSRecord> lstRecords = null;
            GPSRecord record = new GPSRecord();

            while (sqlDataReader.Read())
            {
                record.MeasureId = (int)(sqlDataReader[0]);
                record.PipeId = (string)(sqlDataReader[1]);
                record.ProjectPointId = (int)(sqlDataReader[2]);
                record.MeasureTime = (DateTime)(sqlDataReader[3]);
                record.Location = new Point3D((Double)(sqlDataReader[4]),
                                              (Double)(sqlDataReader[5]),
                                              (Double)(sqlDataReader[6]));

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
                record.MeasureId = (int)(sqlDataReader[0]);
                record.PipeId = (string)(sqlDataReader[1]);
                record.ProjectPointId = (int)(sqlDataReader[2]);
                record.MeasureTime = (DateTime)(sqlDataReader[3]);
                record.Alpha = (double)(sqlDataReader[4]);
                record.Beta = (double)(sqlDataReader[5]);

                lstRecords.Add(record);
            }

            return lstRecords;
        }

        protected PipeInfo ExtractPipeInfo(List<GPSRecord> lstGPSRecords, List<InclineRecord> lstInclineRecords)
        {
            // TODO: to be implemented
            PipeInfo pipeInfo = null;

            return pipeInfo;
        }

        // Query
        public bool IsPipeStarted(int iPipeId)
        {
            return false;
        }

        public bool IsPipeEnded(int iPipeId)
        {
            return false;
        }

        public int GetPipeRecordCount(int iPipeId)
        {
            return 0;
        }

        public PipeInfo GetPipeRecord(int iPipeId, int iRecoredIndex)
        {
            return null;
        }

        public DateTime GetPipeStartTime(int iPipeId)
        {
            return new DateTime();
        }

        public DateTime GetPipeEndTime(int iPipeId)
        {
            return new DateTime();
        }

        public DateTime GetPipeTime(int iPipeId, int iRecordIndex)
        {
            return new DateTime();
        }

        public PipeInfo GetLatesetData()
        {
            return ReadLatestData();
        }

        public event DataArrivedCallbackType DataArrivedCallback;
    }

    class RealTimeDataQuery : PipeDataQuery
    {
        private static readonly int m_firstReadCnt = 10;

        public RealTimeDataQuery(string dbAdress, string dbName,
                                 string userName, string password,
                                 double interval) : base(dbAdress, dbName, userName, password, interval)
        {
        }

        public RealTimeDataQuery(string connString, double interval)
            : base(connString, interval)
        {
        }

        protected override PipeInfo ReadStartData()
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

            return ExtractPipeInfo(lstGPSRecords, lstInclineRecords);
        }
    }

    class HistoricalDataQuery : PipeDataQuery
    {


        public HistoricalDataQuery(string dbAdress, string dbName,
                                   string userName, string password,
                                   double interval)
            : base(dbAdress, dbName, userName, password, interval)
        {
        }

        public HistoricalDataQuery(string connString, double interval)
            : base(connString, interval)
        {
        }

        protected override PipeInfo ReadStartData()
        {
            // TODO: to be implemented
            PipeInfo pipeInfo = null;

            return pipeInfo;
        }
    }
}
