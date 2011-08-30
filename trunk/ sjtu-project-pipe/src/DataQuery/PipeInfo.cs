﻿using System;
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
        private string m_pipeId;
        //private Point3D m_ctrlPt;
        private Point3D m_startPt;
        private Point3D m_endPt;
        private double m_alpha;
        private double m_beta;
        private DateTime m_time;

        public PipeInfo(string pipeId, Point3D startPt, Point3D endPt, /*Point3D ctrlPt, */
                        double alpha, double beta, DateTime time)
        {
            m_pipeId = pipeId;
            //m_ctrlPt = ctrlPt;
            m_startPt = startPt;
            m_endPt = endPt;
            m_alpha = alpha;
            m_beta = beta;
            m_time = time;
        }

        public string PipeId
        {
            get
            {
                return m_pipeId;
            }
        }

        //public Point3D ControlPoint
        //{
        //    get
        //    {
        //        Point3D ctrlPt = new Point3D((m_startPt.X + m_endPt.X) / 2,
        //                                     (m_startPt.Y + m_endPt.Y) / 2,
        //                                     (m_startPt.Z + m_endPt.Z) / 2);
        //        //return (m_startPt + m_endPt) / 2;
        //        return ctrlPt;
        //    }
        //}

        public Point3D StartPoint
        {
            get
            {
                return m_startPt;
            }
        }

        public Point3D EndPoint
        {
            get
            {
                return m_endPt;
            }
        }

        public double Alpha
        {
            get
            {
                return m_alpha;
            }
        }

        public double Beta
        {
            get
            {
                return m_beta;
            }
        }

        public Matrix3D Matrix
        {
            get
            {
                MatrixCreater maxtrixCreator = new MatrixCreater(m_startPt, m_endPt, m_alpha, m_beta);

                return maxtrixCreator.GetMatrix();
            }
        }

        public DateTime Time
        {
            get
            {
                return m_time;
            }
        }
    }
}