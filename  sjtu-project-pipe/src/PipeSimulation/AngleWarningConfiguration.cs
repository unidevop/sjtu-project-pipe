using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.DataModel;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;

namespace PipeSimulation
{
    public partial class AngleWarningConfiguration : Form
    {
        public AngleWarningConfiguration()
        {
            InitializeComponent();
        }

        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);

            try
            {
                // Get Angle Warning Config
                AngleWarningConfig angleWarningConfig = ApplicationOptions.Instance().AngleWarningConfig;

                // Set the alpha maximum
                AlphaAngle = angleWarningConfig.AlphaMaximum;

                // Set the beta maximum
                BetaAngle = angleWarningConfig.BetaMaximum;
            }
            catch (SystemException exception)
            {
                MessageBox.Show(exception.Message);
            }
        }

        /// <summary>
        /// Alpha angle attribute
        /// </summary>
        public double AlphaAngle
        {
            get
            {
                double dValue = Math.Abs(double.Parse(AlphaAngleTextBox.Text));
                if (dValue <= 0)
                {
                    throw new InvalidExpressionException(Resources.IDS_ERROR_MAXIMUMANGLE);
                }

                return dValue;
            }

            set
            {
                AlphaAngleTextBox.Text = value.ToString();
            }
        }

        /// <summary>
        /// Beta angle attribute
        /// </summary>
        public double BetaAngle
        {
            get
            {
                double dValue = double.Parse(BetaTextBox.Text);
                if (dValue <= 0)
                {
                    throw new InvalidExpressionException(Resources.IDS_ERROR_MAXIMUMANGLE);
                }

                return dValue;
            }

            set
            {
                BetaTextBox.Text = value.ToString();
            }
        }

        private void OkButton_Click(object sender, EventArgs e)
        {
            // Get Angle Warning Config
            AngleWarningConfig angleWarningConfig = ApplicationOptions.Instance().AngleWarningConfig;
            if (angleWarningConfig == null)
            {
                this.Close();
                return;
            }

            // Invalidate
            try
            {
                double AlphaAngleTest = AlphaAngle;
            }
            catch (SystemException exception)
            {
                MessageBox.Show(exception.Message, IApp.theApp.MainUI.Text);
                AlphaAngleTextBox.Focus();
                AlphaAngleTextBox.SelectAll();
                return;
            }

            try
            {
                double BetaAngleTest = BetaAngle;
            }
            catch (SystemException exception)
            {
                MessageBox.Show(exception.Message, IApp.theApp.MainUI.Text);
                BetaTextBox.Focus();
                BetaTextBox.SelectAll();
                return;
            }

            // Update the value
            angleWarningConfig.AlphaMaximum = AlphaAngle;
            angleWarningConfig.BetaMaximum = BetaAngle;

            this.Close();
        }

        private void AlphaGroupBox_Enter(object sender, EventArgs e)
        {

        }
    }
}
