using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace PipeSimulation
{
    public partial class SpecifyTime : Form
    {
        public SpecifyTime()
        {
            InitializeComponent();
        }

        /// <summary>
        /// This method is used to set the initial date time for date timer picker
        /// </summary>
        public DateTime InitialDateTime
        {
            set
            {
                dateTimePicker.Value = value;
            }
        }

        /// <summary>
        /// This method is used to get the user selected date time
        /// </summary>
        public DateTime SelectedDateTime
        {
            get
            {
                return dateTimePicker.Value;
            }
        }
    }
}
