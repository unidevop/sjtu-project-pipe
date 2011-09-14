using System;
using System.Xml;
using PipeSimulation.DataModel;
using PipeSimulation.Utility;

namespace PipeSimulation.Geometry
{
    /// <summary>
    /// class is used to repsent a UCS
    /// It read the UCS from the xml node
    /// Ususally I define the UCS by a origin, a x axis and y axis.
    /// </summary>
    public class CUCS
    {
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
            System.Windows.Media.Media3D.Vector3D vecX = new System.Windows.Media.Media3D.Vector3D(xAxis.X, xAxis.Y, xAxis.Z);
            vecX.Normalize();

            System.Windows.Media.Media3D.Vector3D vecY = new System.Windows.Media.Media3D.Vector3D(yAxis.X, yAxis.Y, yAxis.Z);
            vecY.Normalize();

            // Get the z axis
            System.Windows.Media.Media3D.Vector3D vecZ = System.Windows.Media.Media3D.Vector3D.CrossProduct(vecX, vecY);

            // Recalculate the y axis since yaxis may not be preh to xaxis.
            vecY = System.Windows.Media.Media3D.Vector3D.CrossProduct(vecZ, vecX);

            System.Windows.Media.Media3D.Matrix3D matrix;
            matrix = new System.Windows.Media.Media3D.Matrix3D(vecX.X, vecY.X, vecZ.X, origin.X,
                                                               vecX.Y, vecY.Y, vecZ.Y, origin.Y,
                                                               vecX.Z, vecY.Z, vecZ.Z, origin.Z,
                                                               0, 0, 0, 1.0);

            // Set transform
            m_tranform = matrix.ToVTKTransformation();
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
    }
}