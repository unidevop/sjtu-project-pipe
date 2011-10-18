using System;
using System.Xml;
using PipeSimulation.DataModel;

namespace PipeSimulation.Geometry
{
    /// <summary>
    /// A simple definition to 3d point, the class behaviors as a function class.
    /// </summary>
    public sealed class CPoint3D
    {
        private double[] m_aPoint = new double[3] {0, 0, 0}; // Internal member variable

        /// <summary>
        /// Default Constructor
        /// </summary>
        public CPoint3D()
            : this(0, 0, 0)
        {
        }

        /// <summary>
        /// Constructor, user must provide the x,y,z
        /// </summary>
        /// <param name="x">x</param>
        /// <param name="y">y</param>
        /// <param name="z">z</param>
        public CPoint3D(double x, double y, double z)
            : this(new double[] {x, y, z})
        {

        }

        /// <summary>
        /// Constructor,user must provide the double[3] array
        /// </summary>
        /// <param name="aPoints"></param>
        public CPoint3D(double[] aPoints)
        {
            try
            {
                m_aPoint[0] = aPoints[0];
                m_aPoint[1] = aPoints[1];
                m_aPoint[2] = aPoints[2];
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        public double[] Point
        {
            get
            {
                return new double[3] { X, Y, Z };
            }
        }

        public double X
        {
            get
            {
                return m_aPoint[0];
            }
        }

        public double Y
        {
            get
            {
                return m_aPoint[1];
            }
        }

        public double Z
        {
            get
            {
                return m_aPoint[2];
            }
        }

    }

    /// <summary>
    /// Act as Point 3d extension to provide the xml serialization
    /// </summary>
    public class CPoint3DSerializer
    {
        public static CPoint3D ReadPoint(XmlNode node)
        {
            double[] coords = new double[3] {0 ,0 ,0};
            try
            {
                foreach (XmlAttribute attri in node.Attributes)
                {
                    if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordX, true) == 0)
                    {
                        coords[0] = double.Parse(attri.InnerText);
                    }
                    else if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordY, true) == 0)
                    {
                        coords[1] = double.Parse(attri.InnerText);
                    }
                    else if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordZ, true) == 0)
                    {
                        coords[2] = double.Parse(attri.InnerText);
                    }
                }
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }

            return new CPoint3D(coords);
        }
    }

    /// <summary>
    /// CTwoPoints
    /// </summary>
    public sealed class CTwoPoints
    {
        private CPoint3D m_first = new CPoint3D();
        private CPoint3D m_second = new CPoint3D();
        public CTwoPoints(CPoint3D first, CPoint3D second)
        {
            m_first = new CPoint3D(first.Point);
            m_second = new CPoint3D(second.Point);
        }

        public CPoint3D First
        {
            get { return new CPoint3D(m_first.Point); }
        }
        public CPoint3D Second
        {
            get { return new CPoint3D(m_second.Point); }
        }
    }
}

