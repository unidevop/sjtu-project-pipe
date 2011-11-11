using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;
using System.Windows.Media.Media3D;

namespace PipeSimulation
{
    namespace DataModel
    {
        public class CBoundaryModel
        {
            private CPoint3D m_ptCenter = new CPoint3D();
            private CPoint3D m_ptStartPoint = new CPoint3D();
            private CPoint3D m_ptEndPoint = new CPoint3D();
            private double[] m_Color = new double[3] { 1, 1, 0 };
            private float m_dLineWidth = 4;

            public CBoundaryModel() { }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the center pos
                    XmlNode centerNode = node.SelectSingleNode(ModelXMLDefinition.BoundaryCenterPosition);
                    m_ptCenter = new CPoint3D(CPoint3DSerializer.ReadPoint(centerNode).Point);

                    // Read the start pos
                    XmlNode startNode = node.SelectSingleNode(ModelXMLDefinition.BoundaryStartPosition);
                    m_ptStartPoint = new CPoint3D(CPoint3DSerializer.ReadPoint(startNode).Point);

                    // Read the end pos
                    XmlNode endNode = node.SelectSingleNode(ModelXMLDefinition.BoundaryEndPosition);
                    m_ptEndPoint = new CPoint3D(CPoint3DSerializer.ReadPoint(endNode).Point);

                    // Read the end pos
                    XmlNode colorNode = node.SelectSingleNode(ModelXMLDefinition.BoundaryColor);
                    m_Color = CPoint3DSerializer.ReadPoint(colorNode).Point;

                    // Read the end pos
                    XmlNode lineWidth = node.SelectSingleNode(ModelXMLDefinition.BoundaryLineWidth);
                    m_dLineWidth = float.Parse(lineWidth.InnerText);
                }
                catch (SystemException ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    throw;
                }
            }

            public CPoint3D Center
            {
                get { return m_ptCenter; }
            }

            public CPoint3D StartPoint
            {
                get { return m_ptStartPoint; }
            }

            public CPoint3D EndPoint
            {
                get { return m_ptEndPoint; }
            }

            public double[] Color
            {
                get { return m_Color; }
            }

            public float LineWidth
            {
                get { return m_dLineWidth; }
            }
        }
    }
}