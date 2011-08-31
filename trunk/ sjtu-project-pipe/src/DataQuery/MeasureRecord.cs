using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Media.Media3D;

namespace PipeSimulation.DataQuery
{
    abstract class BaseMeasureRecord
    {
        private int m_measureId = 0;
        private int m_pipeId;
        private int m_projectPtId = 0;
        private DateTime m_measureTime;

        public BaseMeasureRecord()
        {
        }

        public int MeasureId
        {
            get
            {
                return m_measureId;
            }
            set
            {
                m_measureId = value;
            }
        }

        public int PipeId
        {
            get
            {
                return m_pipeId;
            }
            set
            {
                m_pipeId = value;
            }
        }

        public int ProjectPointId
        {
            get
            {
                return m_projectPtId;
            }
            set
            {
                m_projectPtId = value;
            }
        }

        public DateTime MeasureTime
        {
            get
            {
                return m_measureTime;
            }
            set
            {
                m_measureTime = value;
            }
        }
    }

    class GPSRecord : BaseMeasureRecord
    {
        private Point3D m_location;

        public Point3D Location
        {
            get
            {
                return m_location;
            }
            set
            {
                m_location = value;
            }
        }
    }

    class InclineRecord : BaseMeasureRecord
    {
        private double m_alpha;
        private double m_beta;

        public double Alpha
        {
            get
            {
                return m_alpha;
            }
            set
            {
                m_alpha = value;
            }
        }

        public double Beta
        {
            get
            {
                return m_beta;
            }
            set
            {
                m_beta = value;
            }
        }
    }
}
