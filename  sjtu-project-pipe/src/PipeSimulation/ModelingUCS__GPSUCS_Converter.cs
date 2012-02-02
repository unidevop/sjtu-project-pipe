using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.PipeApp;
using PipeSimulation.DataModel;
using System.Windows.Media.Media3D;

namespace PipeSimulation
{
    public partial class ModelingUCS__GPSUCS_Converter : Form
    {
        private bool m_bUpdateData = false;

        public ModelingUCS__GPSUCS_Converter()
        {
            InitializeComponent();
        }

        private bool ValidatingTextBox(TextBox sender)
        {
            try
            {
                double val = double.Parse(sender.Text);

                sender.ForeColor = Color.Black;
            }
            catch (SystemException)
            {
                sender.ForeColor = Color.Red;
                return false;
            }

            return true;
        }

        private void ModelingUCS__GPSUCS_Converter_Load(object sender, EventArgs e)
        {
            double zero = 0;
            string zeroString = zero.ToString();

            ModelingX.Text = zeroString;
            ModelingY.Text = zeroString;
            ModelingZ.Text = zeroString;

            //UpdateGPSCoorsByModelingCoors();
        }

        private void UpdateModelingCoorsByGPSCoors()
        {
            if (m_bUpdateData) return;

            try
            {
                m_bUpdateData = true;

                double gpsX = double.Parse(GPSX.Text);
                double gpsY = double.Parse(GPSY.Text);
                double gpsZ = double.Parse(GPSZ.Text);

                Matrix3D mtxInverse = IApp.theApp.DataModel.ModelingUCStoGPSUCS.UCSTransformMatrix3dInvert;
                Point3D gpsCoordinate = new Point3D(gpsX, gpsY, gpsZ);

                Point3D modelingCoordinate = gpsCoordinate * mtxInverse;

                ModelingX.Text = modelingCoordinate.X.ToString();
                ModelingY.Text = modelingCoordinate.Y.ToString();
                ModelingZ.Text = modelingCoordinate.Z.ToString();
            }
            catch
            {
            }
            finally
            {
                m_bUpdateData = false;
            }
        }

        private void UpdateGPSCoorsByModelingCoors()
        {
            if (m_bUpdateData) return;

            try
            {
                m_bUpdateData = true;

                double modelingX = double.Parse(ModelingX.Text);
                double modelingY = double.Parse(ModelingY.Text);
                double modelingZ = double.Parse(ModelingZ.Text);

                Matrix3D mtx = IApp.theApp.DataModel.ModelingUCStoGPSUCS.UCSTransformMatrix3d;
                Point3D modelingCoordinate = new Point3D(modelingX, modelingY, modelingZ);

                Point3D gpsCoordinate = modelingCoordinate * mtx;

                GPSX.Text = gpsCoordinate.X.ToString();
                GPSY.Text = gpsCoordinate.Y.ToString();
                GPSZ.Text = gpsCoordinate.Z.ToString();
            }
            catch
            {
            }
            finally
            {
                m_bUpdateData = false;
            }
        }

        private void GPSX_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(GPSX as TextBox)) return;
            UpdateModelingCoorsByGPSCoors();
        }

        private void GPSY_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(GPSY as TextBox)) return;
            UpdateModelingCoorsByGPSCoors();
        }

        private void GPSZ_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(GPSZ as TextBox)) return;
            UpdateModelingCoorsByGPSCoors();
        }

        private void ModelingX_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(ModelingX as TextBox)) return;
            UpdateGPSCoorsByModelingCoors();
        }

        private void ModelingY_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(ModelingY as TextBox)) return;
            UpdateGPSCoorsByModelingCoors();
        }

        private void ModelingZ_TextChanged(object sender, EventArgs e)
        {
            if (!ValidatingTextBox(ModelingZ as TextBox)) return;
            UpdateGPSCoorsByModelingCoors();
        }
    }
}
