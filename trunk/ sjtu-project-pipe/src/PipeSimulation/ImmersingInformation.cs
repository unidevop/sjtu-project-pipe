using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;
using PipeSimulation.Utility;

namespace PipeSimulation
{
    public partial class ImmersingInformation : Form
    {
        public ImmersingInformation()
        {
            InitializeComponent();
        }

        private void m_Angle2_Click(object sender, EventArgs e)
        {

        }

        /// <summary>
        /// This function is used to be called outside to refresh the data shown in the UI
        /// </summary>
        public void UpdateData()
        {
            // Get Pipe info
            PipeInfo pipeInfo = IApp.theApp.DataDriven.CurrentData;

            // Basic information
            UpdateBasicInformationGroup(pipeInfo);

            // GPS information
            UpdateGPSInformationGroup(pipeInfo);

            // Angle information
            UpdateAngleInformationGroup(pipeInfo);

            // Connection Point pair information
            UpdateConnectionPointPairGroup(pipeInfo);
        }

        private void UpdateBasicInformationGroup(PipeInfo pipeInfo)
        {
            // Pipe No.
           m_labelPipeId.Text =  string.Format(Resources.IDS_PIPE_ID_IMMSERING, pipeInfo.PipeId);

            // Data time
            m_labelDateTime.Text = pipeInfo.Time.ToString();
        }

        private void UpdateGPSInformationGroup(PipeInfo pipeInfo)
        {
            // GPS 1
            const string strCoordFormat = "{0,15:0,0.000}";
            string strStartPoint;
            strStartPoint = string.Concat("(",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.StartPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");

            m_GPS1Detail.Text = strStartPoint;

            // GPS 2
            string strEndPoint;
            strEndPoint = string.Concat("(",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.X * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Y * IApp.theApp.DataModel.GPSUnitToMeter), " ,",
                                          string.Format(strCoordFormat, pipeInfo.EndPoint.Z * IApp.theApp.DataModel.GPSUnitToMeter), ")");
            m_GPS2Detail.Text = strStartPoint;
        }

        private void UpdateAngleInformationGroup(PipeInfo pipeInfo)
        {
            // Angle1
            const string strAngleFormat = "{0:0.###}";
            m_Angle1.Text =  string.Format(strAngleFormat, pipeInfo.LatitudinalInclineAngle);

            m_MaxAngle1.Text = string.Format(strAngleFormat, pipeInfo.MaxAbsAlpha);

            // Angle 2
            m_Angle2.Text =  string.Format(strAngleFormat, pipeInfo.LongitudinalInclineAngle);

            m_MaxAngle2.Text = string.Format(strAngleFormat, pipeInfo.MaxAbsBeta);
        }

        private void UpdateConnectionPointPairGroup(PipeInfo pipeInfo)
        {
            // Update the connection indicator
            IList<CPipeConnectionPointPair> connectionPointPairList = null;
            if (CPipeConnetionUtility.CalcaulateConnection(IApp.theApp.DataDriven.CurrentData, out connectionPointPairList))
            {
                cStatisticDataBindingSource.DataSource = connectionPointPairList;
            } 
            
        }

        private void m_buttonOK_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void ImmersingInformation_Load(object sender, EventArgs e)
        {

        }

        private void m_groupBoxBasicInformation_Enter(object sender, EventArgs e)
        {

        }
    }
}
