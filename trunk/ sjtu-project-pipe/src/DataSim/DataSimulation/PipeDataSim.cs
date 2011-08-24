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
        private DataSet m_dataSet = null;
        SqlDataAdapter m_gpsDataAdapter = null;
        SqlDataAdapter m_inclineDataAdapter = null;

        //  100 milliseconds
        private Timer m_timer = new Timer(300);

        private int m_gpsSampleMark = 0;
        private int m_curPipeId = 0;

        private static readonly double m_maxAngle = 8.0;
        private static readonly double m_prjDistance = 60.0;

        public PipeDataSim(string connString)
        {
            m_connString = connString;

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
}
