using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using System.Data.SqlClient;
using System.Windows.Media.Media3D;
using System.Timers;

namespace DataSimulation
{
    class PipeDataSim : IDisposable
    {
        private string m_connString;
        protected SqlConnection m_dbConn = null;
        //private DataSet m_dataSet = null;
        //SqlDataAdapter m_gpsDataAdapter = null;
        //SqlDataAdapter m_inclineDataAdapter = null;

        //  100 milliseconds
        private Timer m_timer = null; //new Timer(300);

        private PipeDataGenerator[] m_pipeDataGenArray = null;

        private int m_curPipeId = -1;

        public PipeDataSim(string connString, TimeSpan writeInterval,
                           DateTime startTime, DateTime endTime, TimeSpan measureInterval, TimeSpan backfillTimeSpan,
                           PipeDataGenerator[] pipeDataGenArray)
        {
            if ((startTime <= endTime) || (backfillTimeSpan >= endTime - startTime) ||
                (measureInterval >= endTime - startTime) || pipeDataGenArray.Length == 0)
                new Exception("Invalid input");

            m_connString = connString;
            m_timer = new Timer(writeInterval.TotalMilliseconds);

            m_pipeDataGenArray = pipeDataGenArray;

            TimeSpan pipeMeasureSpan = TimeSpan.FromSeconds((endTime - startTime).TotalSeconds / m_pipeDataGenArray.Length);
            for (int idx = 0; idx < m_pipeDataGenArray.Length; idx++ )
            {
                m_pipeDataGenArray[idx].MeasureInterval = measureInterval;
                m_pipeDataGenArray[idx].MeasureStartTime = startTime + TimeSpan.FromSeconds(idx * pipeMeasureSpan.TotalSeconds);
                m_pipeDataGenArray[idx].MeasureEndTime = m_pipeDataGenArray[idx].MeasureStartTime + pipeMeasureSpan;
                m_pipeDataGenArray[idx].BackfillTime = m_pipeDataGenArray[idx].MeasureEndTime - backfillTimeSpan;
            }
            //Connect();
        }

        ~PipeDataSim()
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
            //InitDataSet();
            //Activate();
        }

        public void Disconnect()
        {
            Deactivate();

            if (m_dbConn != null)
            {
                m_dbConn.Close();
                m_dbConn = null;
            }
        }

        public void Activate()
        {
            m_timer.Elapsed += new ElapsedEventHandler(WriteData);
            m_timer.AutoReset = true;
            m_timer.Enabled = true;
            Console.WriteLine("Start Writing data. Start time: {0:yyyy-MM-dd HH:mm:ss.fff}", DateTime.Now);
        }

        void WriteData(object sender, ElapsedEventArgs e)
        {
            lock (m_timer)
            {
                try
                {
                    //  pipe data started
                    if (m_curPipeId < 0)
                    {
                        RemoveData();
                        m_curPipeId = 0;
                    }

                    if (m_curPipeId < m_pipeDataGenArray.Length)
                    {
                        m_pipeDataGenArray[m_curPipeId].GeneratePipeData(m_dbConn);

                        //m_gpsDataAdapter.Update(m_dataSet, "GPSMeasure");
                        //m_inclineDataAdapter.Update(m_dataSet, "InclineMeasure");

                        //Console.WriteLine("Thread id: {0}, current pipe id: {1}",
                        //    System.Threading.Thread.CurrentThread.ManagedThreadId, m_curPipeId + 1);

                        if (m_pipeDataGenArray[m_curPipeId].IsEnded)
                            ++m_curPipeId;
                    }
                    else // (m_curPipeId >= m_pipeDataGenArray.Length)  //  pipe data ended
                    {
                        Deactivate();
                        return;
                    }
                }
                catch (System.Exception ex)
                {
                    Console.WriteLine("Exception: {0}", ex.Message);
                    Console.WriteLine("Exception: {0}", ex.StackTrace);
                }
            }
        }

        public void Deactivate()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(WriteData);
            m_timer.Enabled = false;
            Console.WriteLine("End Writing data. End time: {0:yyyy-MM-dd HH:mm:ss.fff}", DateTime.Now);
        }

        //protected void InitDataSet()
        //{
        //    if (m_gpsDataAdapter == null)
        //        m_gpsDataAdapter = new SqlDataAdapter();

        //    if (m_inclineDataAdapter == null)
        //        m_inclineDataAdapter = new SqlDataAdapter();

        //    //  read GPS records
        //    SqlCommandBuilder gpsCmdBuilder = new SqlCommandBuilder(m_gpsDataAdapter);
        //    SqlCommandBuilder inclineCmdBuilder = new SqlCommandBuilder(m_inclineDataAdapter);

        //    if (m_dataSet == null)
        //        m_dataSet = new DataSet();

        //    m_gpsDataAdapter.SelectCommand = new SqlCommand("SELECT * FROM GPSMeasure", m_dbConn);
        //    m_gpsDataAdapter.Fill(m_dataSet, "GPSMeasure");

        //    m_inclineDataAdapter.SelectCommand = new SqlCommand("SELECT * FROM InclineMeasure", m_dbConn);
        //    m_inclineDataAdapter.Fill(m_dataSet, "InclineMeasure");

        //    gpsCmdBuilder.GetUpdateCommand();
        //    inclineCmdBuilder.GetUpdateCommand();
        //}

        void RemoveData()
        {
            SqlCommand delCmd = new SqlCommand("DELETE FROM GPSMeasure;DELETE FROM InclineMeasure", m_dbConn);
            delCmd.CommandTimeout = 300;
            delCmd.ExecuteNonQuery();

            //delCmd.CommandText = "DELETE FROM InclineMeasure";
            //delCmd.ExecuteNonQuery();
        }
    }

    class PipeDataGenerator
    {
        SqlCommand m_sqlCmd = new SqlCommand();
        int m_id;
        Point3D m_startPt1;
        Point3D m_startPt2;
        Point3D m_endPt1;
        Point3D m_endPt2;

        private DateTime m_measureStartTime = DateTime.Now;
        private DateTime m_measureEndTime = DateTime.Now;

        private DateTime m_curMeasureTime = new DateTime(0);

        private TimeSpan m_measureInterval = TimeSpan.FromMilliseconds(500);
        private DateTime m_backfillTime = DateTime.Now;

        private static readonly double m_maxAngle = 6.0;

        public PipeDataGenerator(int id, Point3D startPt1, Point3D startPt2, Point3D endPt1, Point3D endPt2)
        {
            m_id = id;
            m_startPt1 = startPt1;
            m_startPt2 = startPt2;
            m_endPt1 = endPt1;
            m_endPt2 = endPt2;
        }

        public DateTime MeasureStartTime
        {
            get
            {
                return m_measureStartTime;
            }
            set
            {
                m_measureStartTime = value;
            }
        }

        public DateTime MeasureEndTime
        {
            get
            {
                return m_measureEndTime;
            }
            set
            {
                m_measureEndTime = value;
            }
        }

        DateTime CurrentMeasureTime
        {
            get
            {
                return m_curMeasureTime;
            }
            set
            {
                m_curMeasureTime = value;
            }
        }

        public TimeSpan MeasureInterval
        {
            get
            {
                return m_measureInterval;
            }
            set
            {
                m_measureInterval = value;
            }
        }

        public DateTime BackfillTime
        {
            get
            {
                return m_backfillTime;
            }
            set
            {
                m_backfillTime = value;
            }
        }

        public bool IsStarted
        {
            get
            {
                DateTime initTime = new DateTime(0);

                return m_curMeasureTime != initTime &&
                    m_curMeasureTime >= m_measureStartTime/* && m_curMeasureTime < m_measureEndTime*/;
            }
        }

        public bool IsEnded
        {
            get
            {
                return m_curMeasureTime >= m_measureEndTime;
            }
        }

        double MeasurePointsDistance
        {
            get
            {
                return (m_endPt2 - m_endPt1).Length;
            }
        }

        internal void GeneratePipeData(SqlConnection dbConn/*DataSet dataSet*/)
        {
            if (IsEnded)
                return;

            if (!IsStarted)
                m_curMeasureTime = m_measureStartTime;

            Point3D pt1 = new Point3D();
            Point3D pt2 = new Point3D();

            string strSql = GenerateGPSData1(ref pt1) + ";" +
                GenerateGPSData2(pt1, ref pt2) + ";" +
                GenerateInclineData(pt1, pt2);

            m_sqlCmd.CommandText = strSql;
            m_sqlCmd.Connection = dbConn;
            m_sqlCmd.ExecuteNonQuery();

            m_curMeasureTime += m_measureInterval;
        }

        private string GenerateGPSData1(ref Point3D pt1)
        {
            //DataRow newRow = dataSet.Tables["GPSMeasure"].NewRow();

            //newRow["PipeID"] = m_id;
            //newRow["ProjectPointID"] = 1;

            //Point3D pt1;

            if (m_curMeasureTime < m_backfillTime)
            {
                // interpolation point of 1st point's track
                pt1 = m_startPt1 + (m_endPt1 - m_startPt1) *
                    (m_curMeasureTime - m_measureStartTime).TotalSeconds / (m_backfillTime - m_measureStartTime).TotalSeconds;
                //newRow["X"] = pt1.X;
                //newRow["Y"] = pt1.Y;
                //newRow["Z"] = pt1.Z;
            }
            else
            {
                pt1 = m_endPt1;
                //newRow["X"] = m_endPt1.X;
                //newRow["Y"] = m_endPt1.Y;
                //newRow["Z"] = m_endPt1.Z;
            }
            //newRow["MeasureTime"] = m_curMeasureTime;//DateTime.Now;

            //dataSet.Tables["GPSMeasure"].Rows.Add(newRow);

            return String.Format("INSERT INTO GPSMeasure VALUES({0}, {1}, '{2:yyyy-MM-dd HH:mm:ss.fff}', {3}, {4}, {5})",
                m_id, 1, m_curMeasureTime/*DateTime.Now*/, pt1.X, pt1.Y, pt1.Z);
            //Console.Write("Pipe id: {0}, time: {1}, gps1:({2}, {3}, {4})", 
            //    m_id, m_curMeasureTime, newRow["X"], newRow["Y"], newRow["Z"]);
        }

        private string GenerateGPSData2(Point3D pt1, ref Point3D pt2)
        {
            //DataRow newRow = dataSet.Tables["GPSMeasure"].NewRow();

            //newRow["PipeID"] = m_id;
            //newRow["ProjectPointID"] = 2;

            if (m_curMeasureTime < m_backfillTime)
            {
                // interpolation point of 2nd point's track
                Point3D interpolationPt2 = m_startPt2 + (m_endPt2 - m_startPt2) *
                    (m_curMeasureTime - m_measureStartTime).TotalSeconds / (m_backfillTime - m_measureStartTime).TotalSeconds;

                //Point3D pt1;
                //Point3D pt2;

                //DataRowCollection gpsDataRows = dataSet.Tables["GPSMeasure"].Rows;

                //if (gpsDataRows.Count >= 1)
                //{
                //    pt1 = new Point3D((double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["X"]),
                //                      (double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["Y"]),
                //                      (double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["Z"]));
                //}
                //else
                //{
                //    // interpolation point of 1st point's track
                //    pt1 = m_startPt1 + (m_endPt1 - m_startPt1) *
                //        (m_curMeasureTime - m_measureStartTime).TotalSeconds / (m_backfillTime - m_measureStartTime).TotalSeconds;
                //}

                Vector3D pipeDir = interpolationPt2 - pt1;

                pipeDir.Normalize();

                pt2 = pt1 + MeasurePointsDistance * pipeDir;

                //newRow["X"] = pt2.X;
                //newRow["Y"] = pt2.Y;
                //newRow["Z"] = pt2.Z;
            }
            else
            {
                pt2 = m_endPt2;
                //newRow["X"] = m_endPt2.X;
                //newRow["Y"] = m_endPt2.Y;
                //newRow["Z"] = m_endPt2.Z;
            }
            //newRow["MeasureTime"] = m_curMeasureTime;//DateTime.Now;

            //dataSet.Tables["GPSMeasure"].Rows.Add(newRow);

            return String.Format("INSERT INTO GPSMeasure VALUES({0}, {1}, '{2:yyyy-MM-dd HH:mm:ss.fff}', {3}, {4}, {5})",
                m_id, 2, m_curMeasureTime/*DateTime.Now*/, pt2.X, pt2.Y, pt2.Z);

            //Console.Write(" gps2:({0}, {1}, {2})",
            //    newRow["X"], newRow["Y"], newRow["Z"]);
        }

        string GenerateInclineData(Point3D pt1, Point3D pt2)
        {
            //DataRow newRow = dataSet.Tables["InclineMeasure"].NewRow();

            //newRow["PipeID"] = m_id;
            //newRow["ProjectPointID"] = 1;
            //newRow["MeasureTime"] = m_curMeasureTime;// DateTime.Now;

            double rollAngle, pitchAngle;

            if (m_curMeasureTime < m_backfillTime)
            {
                rollAngle = m_maxAngle * Math.Sin((m_curMeasureTime - m_measureStartTime).TotalSeconds *
                                                         Math.PI / 180);

                //DataRowCollection gpsDataRows = dataSet.Tables["GPSMeasure"].Rows;
                //if (gpsDataRows.Count >= 2)
                //{
                //    Point3D pt1 = new Point3D((double)(decimal)(gpsDataRows[gpsDataRows.Count - 2]["X"]),
                //                              (double)(decimal)(gpsDataRows[gpsDataRows.Count - 2]["Y"]),
                //                              (double)(decimal)(gpsDataRows[gpsDataRows.Count - 2]["Z"]));

                //    Point3D pt2 = new Point3D((double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["X"]),
                //                              (double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["Y"]),
                //                              (double)(decimal)(gpsDataRows[gpsDataRows.Count - 1]["Z"]));

                    pitchAngle = Math.Asin((pt2.Z - pt1.Z) / MeasurePointsDistance) * 180 / Math.PI;
                //}
                //else
                //    newRow["Angle2"] = 0;
            }
            else
            {
                rollAngle = 0;
                pitchAngle = 0;
            }

            //dataSet.Tables["InclineMeasure"].Rows.Add(newRow);

            return String.Format("INSERT INTO InclineMeasure VALUES({0}, {1}, '{2:yyyy-MM-dd HH:mm:ss.fff}', {3}, {4})",
                m_id, 1, m_curMeasureTime/*DateTime.Now*/, pitchAngle, rollAngle);

            //Console.WriteLine("Angle1: {0}, Angle2: {1}", newRow["Angle1"], newRow["Angle2"]);
        }
    }

#if OLD_IMPL
    class PipeDataSim : IDisposable
    {
        private string m_connString;
        protected SqlConnection m_dbConn = null;
        private DataSet m_dataSet = null;
        SqlDataAdapter m_gpsDataAdapter = null;
        SqlDataAdapter m_inclineDataAdapter = null;

        //  100 milliseconds
        private Timer m_timer = null; //new Timer(300);

        private int m_gpsSampleMark = 0;
        private int m_curPipeId = 0;

        private static readonly double m_maxAngle = 8.0;
        private static readonly double m_prjDistance = 60.0;

        public PipeDataSim(string connString, TimeSpan interval)
        {
            m_connString = connString;
            m_timer = new Timer(interval.TotalMilliseconds);

            Connect();
        }

        ~PipeDataSim()
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
            InitSampleLocation();
            BeginWriteData();
        }

        public void Disconnect()
        {
            EndWriteData();

            if (m_dbConn != null)
            {
                m_dbConn.Close();
                m_dbConn = null;
            }
        }

        void BeginWriteData()
        {
            m_timer.Elapsed += new ElapsedEventHandler(WriteData);
            m_timer.AutoReset = true;
            m_timer.Enabled = true;
        }

        void WriteData(object sender, ElapsedEventArgs e)
        {
            lock (m_timer)
            {
                try
                {
                    //  pipe data started
                    if (m_curPipeId < 1)
                    {
                        RemoveData();
                        m_curPipeId = 1;
                    }

                    GenerateGPSData();
                    GenerateInclineData();
                    m_gpsDataAdapter.Update(m_dataSet, "GPSMeasure");
                    m_inclineDataAdapter.Update(m_dataSet, "InclineMeasure");

                    Console.WriteLine("Thread id: {0}, current pipe id: {1}, gps sample mark: {2}",
                        System.Threading.Thread.CurrentThread.ManagedThreadId, m_curPipeId, m_gpsSampleMark);

                    DataRowCollection sampleDataRows = m_dataSet.Tables["GPSMeasureSample"].Rows;

                    if (m_gpsSampleMark == sampleDataRows.Count - 1)
                        ++m_curPipeId;

                    m_gpsSampleMark = (m_gpsSampleMark + 1) % sampleDataRows.Count;

                    //  pipe data ended
                    if (m_curPipeId > 4)
                    {
                        EndWriteData();
                        return;
                    }

                }
                catch (System.Exception ex)
                {
                    Console.WriteLine("Exception: {0}", ex.Message);
                    Console.WriteLine("Exception: {0}", ex.StackTrace);
                }
            }
        }

        void EndWriteData()
        {
            m_timer.Elapsed -= new ElapsedEventHandler(WriteData);
            m_timer.Enabled = false;
        }

        protected void InitSampleLocation()
        {
            string strGpsSql = "SELECT X, Y, Z FROM GPSMeasureSample";

            //SqlDataReader sqlDataReader = null;

            if (m_gpsDataAdapter == null)
                m_gpsDataAdapter = new SqlDataAdapter();

            if (m_inclineDataAdapter == null)
                m_inclineDataAdapter = new SqlDataAdapter();

            //  read GPS records
            m_gpsDataAdapter.SelectCommand = new SqlCommand(strGpsSql, m_dbConn);
            //sqlDataReader = sqlCmd.ExecuteReader();
            SqlCommandBuilder gpsCmdBuilder = new SqlCommandBuilder(m_gpsDataAdapter);
            SqlCommandBuilder inclineCmdBuilder = new SqlCommandBuilder(m_inclineDataAdapter);

            if (m_dataSet == null)
                m_dataSet = new DataSet();

            m_gpsDataAdapter.Fill(m_dataSet, "GPSMeasureSample");

            m_gpsDataAdapter.SelectCommand = new SqlCommand("SELECT * FROM GPSMeasure", m_dbConn);
            m_gpsDataAdapter.Fill(m_dataSet, "GPSMeasure");

            m_inclineDataAdapter.SelectCommand = new SqlCommand("SELECT * FROM InclineMeasure", m_dbConn);
            m_inclineDataAdapter.Fill(m_dataSet, "InclineMeasure");

            gpsCmdBuilder.GetUpdateCommand();
            inclineCmdBuilder.GetUpdateCommand();
        }

        void GenerateGPSData()
        {
            //GPSRecord  prjStartRcd = new GPSRecord();
            //GPSRecord  prjEndRcd   = new GPSRecord();

            DataRowCollection sampleDataRows = m_dataSet.Tables["GPSMeasureSample"].Rows;

            //System.Type type = sampleDataRows[m_gpsSampleMark]["X"].GetType();
            //decimal decVal = (decimal)(sampleDataRows[m_gpsSampleMark]["X"]);
            //double testVal = (double)decVal;

            Point3D ptA = new Point3D((double)(decimal)(sampleDataRows[m_gpsSampleMark]["X"]),
                                      (double)(decimal)(sampleDataRows[m_gpsSampleMark]["Y"]),
                                      (double)(decimal)(sampleDataRows[m_gpsSampleMark]["Z"]));

            Vector3D dir = new Vector3D(1, 0, 0);

            ptA = ptA + m_curPipeId * m_prjDistance * dir;

            DataRow newRow = m_dataSet.Tables["GPSMeasure"].NewRow();

            newRow["PipeID"] = m_curPipeId;
            newRow["ProjectPointID"] = 1;
            newRow["X"] = ptA.X;
            newRow["Y"] = ptA.Y;
            newRow["Z"] = ptA.Z;
            newRow["MeasureTime"] = DateTime.Now;

            m_dataSet.Tables["GPSMeasure"].Rows.Add(newRow);

            newRow = m_dataSet.Tables["GPSMeasure"].NewRow();

            dir = new Vector3D(1, 0, -0.1);

            dir.Normalize();

            Point3D ptB = ptA + m_prjDistance * dir;

            newRow["PipeID"] = m_curPipeId;
            newRow["ProjectPointID"] = 2;
            newRow["X"] = ptB.X;
            newRow["Y"] = ptB.Y;
            newRow["Z"] = ptB.Z;
            newRow["MeasureTime"] = DateTime.Now;

            m_dataSet.Tables["GPSMeasure"].Rows.Add(newRow);
        }

        void GenerateInclineData()
        {
            //InclineRecord inclineRcd = new InclineRecord();

            //inclineRcd.PipeId = m_curPipeId;
            //inclineRcd.Alpha = m_maxAngle * Math.Sin(m_gpsSampleMark * Math.PI / 180);
            //inclineRcd.Beta = m_maxAngle * Math.Cos(m_gpsSampleMark * Math.PI / 180);
            //inclineRcd.MeasureTime = DateTime.Now;

            DataRow newRow = m_dataSet.Tables["InclineMeasure"].NewRow();

            newRow["PipeID"] = m_curPipeId;
            newRow["ProjectPointID"] = 1;
            newRow["MeasureTime"] = DateTime.Now;
            newRow["Angle1"] = m_maxAngle * Math.Sin(m_gpsSampleMark * Math.PI / 180);
            newRow["Angle2"] = m_maxAngle * Math.Cos(m_gpsSampleMark * Math.PI / 180);

            m_dataSet.Tables["InclineMeasure"].Rows.Add(newRow);
        }

        void RemoveData()
        {
            //foreach (DataRow dataRow in m_dataSet.Tables["GPSMeasure"].Rows)
            //{
            //    dataRow.Delete();
            //}
            //foreach (DataRow dataRow in m_dataSet.Tables["InclineMeasure"].Rows)
            //{
            //    dataRow.Delete();
            //}

            //m_gpsDataAdapter.Update(m_dataSet, "GPSMeasure");
            //m_inclineDataAdapter.Update(m_dataSet, "InclineMeasure");

            //m_dataSet.AcceptChanges();

            SqlCommand delCmd = new SqlCommand("DELETE FROM GPSMeasure", m_dbConn);
            delCmd.ExecuteNonQuery();

            delCmd.CommandText = "DELETE FROM InclineMeasure";
            delCmd.ExecuteNonQuery();
        }
    }
#endif
}
