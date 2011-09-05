using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Media.Media3D;

namespace PipeSimulation.DataQuery
{

    /// <summary>
    /// This class is used to be the data query result
    /// </summary>
    public class PipeInfo
    {
        private int     m_pipeId;
        private Point3D m_startPt;
        private Point3D m_endPt;
        private double m_lattInclineAngle;
        private double m_longInclineAngle;
        private DateTime m_time;

        private int m_gpsMeasureId;
        private int m_inclineMeasureId;
        private double m_maxAlpha;
        private double m_maxBeta;

        public PipeInfo(int pipeId, int gpsMeasureId, int inclineMeasureId)
        {
            m_pipeId = pipeId;
            m_gpsMeasureId = gpsMeasureId;
            m_inclineMeasureId = inclineMeasureId;
        }

        //public PipeInfo(int pipeId, Point3D startPt, Point3D endPt, /*Point3D ctrlPt, */
        //                double alpha, double beta, DateTime time)
        //{
        //    m_pipeId = pipeId;
        //    //m_ctrlPt = ctrlPt;
        //    m_startPt = startPt;
        //    m_endPt = endPt;
        //    m_alpha = alpha;
        //    m_beta = beta;
        //    m_time = time;
        //}

        public int PipeId
        {
            get
            {
                return m_pipeId;
            }
        }

        internal int GpsMeasureId
        {
            get
            {
                return m_gpsMeasureId;
            }
        }

        internal int InclineMeasureId
        {
            get
            {
                return m_inclineMeasureId;
            }
        }

        public Point3D StartPoint
        {
            get
            {
                return m_startPt;
            }
            set
            {
                m_startPt = value;
            }
        }

        public Point3D EndPoint
        {
            get
            {
                return m_endPt;
            }
            set
            {
                m_endPt = value;
            }
        }

        public double LatitudinalInclineAngle
        {
            get
            {
                return m_lattInclineAngle;
            }
            set
            {
                m_lattInclineAngle = value;
            }
        }

        public double LongitudinalInclineAngle
        {
            get
            {
                return m_longInclineAngle;
            }
            set
            {
                m_longInclineAngle = value;
            }
        }

        public double MaxAbsAlpha
        {
            get
            {
                return m_maxAlpha;
            }
            set
            {
                m_maxAlpha = value;
            }
        }

        public double MaxAbsBeta
        {
            get
            {
                return m_maxBeta;
            }
            set
            {
                m_maxBeta = value;
            }
        }

        public Matrix3D Matrix
        {
            get
            {
                MatrixCreater maxtrixCreator = new MatrixCreater(m_startPt, m_endPt, m_lattInclineAngle, m_longInclineAngle);

                return maxtrixCreator.GetMatrix();
            }
        }

        public DateTime Time
        {
            get
            {
                return m_time;
            }
            set
            {
                m_time = value;
            }
        }
    }
}
