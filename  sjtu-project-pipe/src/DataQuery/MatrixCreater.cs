using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Media.Media3D;

namespace PipeSimulation.DataQuery
{
    public class MatrixCreater
    {
        private Point3D m_startPt;
        private Point3D m_endPt;
        private double m_rollInclineAngle;
        private double m_pitchInclineAngle;

        private double m_angleBetweenInclineAndX = 90.0;

        public MatrixCreater(Point3D startPt, Point3D endPt, double rollInclineAngle, double pitchInclineAngle,
                             double angleBetweenInclineAndX, bool flipRollAngle)
        {
            m_startPt = startPt;
            m_endPt   = endPt;
            m_rollInclineAngle    = flipRollAngle ? -rollInclineAngle : rollInclineAngle;
            m_pitchInclineAngle   = pitchInclineAngle;

            m_angleBetweenInclineAndX = angleBetweenInclineAndX;
        }

        public Matrix3D GetMatrix()
        {
            Vector3D vecX = GetXVector();
            Vector3D vecIncline = GetInclineVector();
            Vector3D vecZ = Vector3D.CrossProduct(vecX, vecIncline);

            Vector3D vecY = Vector3D.CrossProduct(vecZ, vecX);

            vecY.Normalize();
            vecZ.Normalize();
            return new Matrix3D(vecX.X, vecY.X, vecZ.X, m_startPt.X,
                                vecX.Y, vecY.Y, vecZ.Y, m_startPt.Y,
                                vecX.Z, vecY.Z, vecZ.Z, m_startPt.Z,
                                0, 0, 0, 1.0);
        }

        private Vector3D GetXVector()
        {
            Vector3D vec = m_endPt - m_startPt;

            vec.Normalize();

            return vec;
        }

        private Vector3D GetInclineVector()
        {
            double inclineRad = Math.PI * m_rollInclineAngle / 180.0;
            double cosIncline = Math.Cos(inclineRad);
            double sinIncline = Math.Sin(inclineRad);

            Vector3D xVector = GetXVector();

            double A = xVector.X * cosIncline;
            double B = xVector.Y * cosIncline;
            double C = xVector.Z * sinIncline - Math.Cos(Math.PI * m_angleBetweenInclineAndX / 180.0);
            double A2B2 = A*A + B*B;

            Vector3D zVector;

            if (A2B2 != 0.0)
            {
                double sinTheta = 0.0;
                double cosTheta = 0.0;

                if (B != 0.0)
                {
                    sinTheta = (-A * C + B * Math.Sqrt(A2B2 - C * C)) / A2B2;

                    // Z component of Vector Z should be less than zero (VZZ > 0)
                    //double VZZ = -cosIncline * ((xVector.X * A / B + xVector.Y) * sinTheta + xVector.X * C / B);
                    double VZZ = -(A2B2*sinTheta + A*C)/B;

                    if (VZZ <= 0.0)
                        // another solution
                        sinTheta = (-A * C - B * Math.Sqrt(A2B2 - C * C)) / A2B2;

                    cosTheta = -(A * sinTheta + C) / B;
                }
                else
                {
                    sinTheta = -C / A;

                    double absCosTheta = Math.Sqrt(1 - sinTheta * sinTheta);

                    //  VZZ = A * cosTheta (VZZ > 0)
                    cosTheta = (A < 0) ? -absCosTheta : absCosTheta;
                }

                zVector = new Vector3D(cosIncline * sinTheta, cosIncline * cosTheta, sinIncline);
            }
            else
                zVector = new Vector3D(0.0, 0.0, 1.0);  //  Or (0.0, 0.0, -1.0)

            return zVector;
        }
    }
}
