using System;
using System.Xml;
using PipeSimulation.DataModel;
using PipeSimulation.Utility;
using System.Windows.Media.Media3D;

namespace PipeSimulation.Geometry
{
    /// <summary>
    /// class is used to repsent a UCS
    /// It read the UCS from the xml node
    /// Ususally I define the UCS by a origin, a x axis and y axis.
    /// </summary>
    public class CUCS
    {
        private Matrix3D m_matrix3d = new Matrix3D();
        private Matrix3D m_matrix3dInvert = new Matrix3D();
        private vtk.vtkTransform m_tranform = new vtk.vtkTransform();
        private vtk.vtkTransform m_tranformInvert = new vtk.vtkTransform();

        public CUCS()
        {
        }

        public virtual void ReadFromXMLNode(XmlNode node)
        {
            // Read the origin node
            XmlNode originNode = node.SelectSingleNode(ModelXMLDefinition.pipeUCSOrigin);
            CPoint3D origin = CPoint3DSerializer.ReadPoint(originNode);

            // Read the x axis
            XmlNode xAxisNode = node.SelectSingleNode(ModelXMLDefinition.pipeUCSXAxis);
            CPoint3D xAxis = CPoint3DSerializer.ReadPoint(xAxisNode);

            // Read the x axis
            XmlNode yAxisNode = node.SelectSingleNode(ModelXMLDefinition.pipeUCSYAxis);
            CPoint3D yAxis = CPoint3DSerializer.ReadPoint(yAxisNode); ;

            // Calculate the UCS
            Vector3D vecX = new Vector3D(xAxis.X, xAxis.Y, xAxis.Z);
            vecX.Normalize();

            Vector3D vecY = new Vector3D(yAxis.X, yAxis.Y, yAxis.Z);
            vecY.Normalize();

            // Get the z axis
            Vector3D vecZ = Vector3D.CrossProduct(vecX, vecY);

            // Recalculate the y axis since yaxis may not be preh to xaxis.
            vecY = Vector3D.CrossProduct(vecZ, vecX);

            // Create matrix3d representation
            m_matrix3d = new Matrix3D(vecX.X, vecX.Y, vecX.Z, 0,
                                      vecY.X, vecY.Y, vecY.Z, 0,
                                      vecZ.X, vecZ.Y, vecZ.Z, 0,
                                      origin.X, origin.Y, origin.Z, 1.0);

            m_matrix3dInvert = new Matrix3D(vecX.X, vecX.Y, vecX.Z, 0,
                                            vecY.X, vecY.Y, vecY.Z, 0,
                                            vecZ.X, vecZ.Y, vecZ.Z, 0,
                                            origin.X, origin.Y, origin.Z, 1.0);
            m_matrix3dInvert.Invert();

            // Set transform
            m_tranform = m_matrix3d.ToVTKTransformation();
            m_tranformInvert.DeepCopy(m_tranform);
            m_tranformInvert.Inverse();
        }

        public vtk.vtkTransform UCSTransform
        {
            get
            {
                return m_tranform;
            }
        }

        public vtk.vtkTransform UCSTransfomrInvert
        {
            get
            {
                return m_tranformInvert;
            }
        }

        public Matrix3D UCSTransformMatrix3d
        {
            get
            {
                return m_matrix3d;
            }
        }

        public Matrix3D UCSTransformMatrix3dInvert
        {
            get
            {
                return m_matrix3dInvert;
            }
        }
    }
}