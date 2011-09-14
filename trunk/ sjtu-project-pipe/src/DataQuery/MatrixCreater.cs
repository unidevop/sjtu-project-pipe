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
        private double m_lattInclineAngle;
        private double m_longInclineAngle;

        public MatrixCreater(Point3D startPt, Point3D endPt, double lattInclineAngle, double longInclineAngle)
        {
            m_startPt = startPt;
            m_endPt   = endPt;
            m_lattInclineAngle   = lattInclineAngle;
            m_longInclineAngle   = longInclineAngle;
        }

        public Matrix3D GetMatrix()
        {
            Vector3D vecX = GetXVector();
            Vector3D vecY = GetYVector();
            Vector3D vecZ = Vector3D.CrossProduct(vecX, vecY);

            //return new Matrix3D(vecX.X, vecY.X, vecZ.X, m_startPt.X,
            //                    vecX.Y, vecY.Y, vecZ.Y, m_startPt.Y,
            //                    vecX.Z, vecY.Z, vecZ.Z, m_startPt.Z,
            //                    0, 0, 0, 1.0);
            return new Matrix3D(vecX.X, vecX.Y, vecX.Z, m_startPt.X,
                                vecY.X, vecY.Y, vecY.Z, m_startPt.Y,
                                vecZ.X, vecZ.Y, vecZ.Z, m_startPt.Z,
                                0, 0, 0, 1.0);
        }

        private Vector3D GetXVector()
        {
            Vector3D vec = m_endPt - m_startPt;

            vec.Normalize();

            return vec;
        }

        private Vector3D GetYVector()
        {
            double inclineRad = Math.PI * m_lattInclineAngle / 180.0;
            double cosIncline = Math.Cos(inclineRad);
            double sinIncline = Math.Sin(inclineRad);

            Vector3D xVector = GetXVector();

            double A = xVector.X * cosIncline;
            double B = xVector.Y * cosIncline;
            double C = xVector.Z * sinIncline;
            double A2B2 = A*A + B*B;

            Vector3D zVector;

            if (A2B2 != 0.0)
            {
                double sinTheta = 0.0;
                double cosTheta = 0.0;

                if (B != 0.0)
                {
                    sinTheta = (-A * C + B * Math.Sqrt(A2B2 - C * C)) / A2B2;

                    // Z component of Vector Z should be less than zero (VZZ < 0)
                    //double VZZ = -cosIncline * ((xVector.X * A / B + xVector.Y) * sinTheta + xVector.X * C / B);
                    double VZZ = -(A2B2*sinTheta + A*C)/B;

                    if (VZZ >= 0.0)
                        // another solution
                        sinTheta = (-A * C - B * Math.Sqrt(A2B2 - C * C)) / A2B2;

                    cosTheta = -(A * sinTheta + C) / B;
                }
                else
                {
                    sinTheta = -C / A;

                    double absCosTheta = Math.Sqrt(1 - sinTheta * sinTheta);

                    //  VZZ = A * cosTheta (VZZ < 0)
                    cosTheta = (A > 0) ? -absCosTheta : absCosTheta;
                }

                zVector = new Vector3D(cosIncline * sinTheta, cosIncline * cosTheta, sinIncline);
            }
            else
                zVector = new Vector3D(0.0, 0.0, 1.0);  //  Or (0.0, 0.0, -1.0)

            return zVector;
        }
    }
}
