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
        private double m_rollInclineAngle;
        private double m_pitchInclineAngle;
        private DateTime m_time;

        private int m_gpsMeasureId;
        private int m_inclineMeasureId;
        private double m_maxRoll;
        private double m_maxPitch;

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

        public Point3D StartDisplayPoint
        {
            get
            {
                return new Point3D(m_startPt.X, m_startPt.Y, -m_startPt.Z);
            }
        }

        public Point3D EndDisplayPoint
        {
            get
            {
                return new Point3D(m_endPt.X, m_endPt.Y, -m_endPt.Z);
            }
        }

        public double RollInclineAngle
        {
            get
            {
                return m_rollInclineAngle;
            }
            set
            {
                m_rollInclineAngle = value;
            }
        }

        public double PitchInclineAngle
        {
            get
            {
                return m_pitchInclineAngle;
            }
            set
            {
                m_pitchInclineAngle = value;
            }
        }

        public double MaxAbsRoll
        {
            get
            {
                return m_maxRoll;
            }
            set
            {
                m_maxRoll = value;
            }
        }

        public double MaxAbsPitch
        {
            get
            {
                return m_maxPitch;
            }
            set
            {
                m_maxPitch = value;
            }
        }

        public Matrix3D GetMatrix(double angleBetweenInclineAndX, bool flipRollAngle)
        {
            MatrixCreater maxtrixCreator = new MatrixCreater(m_startPt, m_endPt, m_rollInclineAngle, m_pitchInclineAngle,
                angleBetweenInclineAndX, flipRollAngle);

            return maxtrixCreator.GetMatrix();
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
