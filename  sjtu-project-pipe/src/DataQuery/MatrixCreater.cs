using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Media.Media3D;

namespace PipeSimulation.DataQuery
{
    class MatrixCreater
    {
        private Point3D m_startPt;
        private Point3D m_endPt;
        private double m_alpha;
        private double m_beta;

        public MatrixCreater(Point3D startPt, Point3D endPt, double alpha, double beta)
        {
            m_startPt = startPt;
            m_endPt   = endPt;
            m_alpha   = alpha;
            m_beta    = beta;
        }

        public Matrix3D GetMatrix()
        {
            Vector3D vecX = GetXVector();
            Vector3D vecY = GetYVector();
            Vector3D vecZ = Vector3D.CrossProduct(vecX, vecY);

            return new Matrix3D(vecX.X, vecY.X, vecZ.X, 0.0,
                                vecX.Y, vecY.Y, vecZ.Y, 0.0,
                                vecX.Z, vecY.Z, vecZ.Z, 0.0,
                                m_startPt.X, m_startPt.Y, m_startPt.Z, 1.0);
        }

        private Vector3D GetXVector()
        {
            Vector3D vec = m_endPt - m_startPt;

            vec.Normalize();

            return vec;
        }

        private Vector3D GetYVector()
        {
            double inclineRad = Math.PI * m_alpha / 180.0;
            double cosIncline = Math.Cos(inclineRad);
            double sinIncline = Math.Sin(inclineRad);

            Vector3D xVector = GetXVector();

            double A = xVector.X * cosIncline;
            double B = xVector.Y * cosIncline;
            double C = xVector.Z * sinIncline;
            double A2B2 = A*A + B*B;

            double cosTheta = (-A * C + B * Math.Sqrt(A2B2 - C * C)) / A2B2;

            // another solution
//            double cosTheta = (-A * C - B * Math.Sqrt(A2B2 - C * C)) / A2B2;

            double sinTheta = -(A*cosTheta + C) / B;

            return new Vector3D(cosIncline * cosTheta, cosIncline * sinTheta, sinIncline);
        }
    }
}
