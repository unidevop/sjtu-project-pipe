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

        public class CPipeBoundaryModel : CSceneNode
        {
            private List<CPoint3D> m_ptBoundaries = new List<CPoint3D> { };
            private double[] m_Color = new double[3] { 1, 1, 1 };
            private float m_dLineWidth = 4;
            private CPipeBoundaryIndicator m_pipeBoundaryIndicator = null;

            public CPipeBoundaryModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the pylons models
                    XmlNodeList subNodes = node.SelectNodes(ModelXMLDefinition.BoundaryPoint);
                    foreach (XmlNode subNode in subNodes)
                    {
                        CPoint3D pt = new CPoint3D(CPoint3DSerializer.ReadPoint(subNode).Point);
                        m_ptBoundaries.Add(pt);
                    }

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

            public IList<CPoint3D> BoundaryPoint
            {
                get { return m_ptBoundaries;}
            }

            public double[] Color
            {
                get { return m_Color; }
            }

            public float LineWidth
            {
                get { return m_dLineWidth; }
            }

            public CPipeBoundaryIndicator PipeBoundaryIndicator
            {
                get { return m_pipeBoundaryIndicator; }
            }

            public void DrawPipeBoundary()
            {
                if (BoundaryPoint.Count != 8) return;

                // Delay Initialization
                if (null == m_pipeBoundaryIndicator)
                {
                    m_pipeBoundaryIndicator = new CPipeBoundaryIndicator(this, new CLineTwoPointsIndicatorsImpl());

                    // Draw the 8 points
                    // The 8 point should be 1, 2, 3, 4(one face), 5, 6 ,7, 8 on reverse face

                    // Draw the 12 lines
                    m_pipeBoundaryIndicator.PointsList.Clear();
                    // 1-2,
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[0], BoundaryPoint[1]));
                    // 2-3
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[1], BoundaryPoint[2]));
                    // 3-4
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[2], BoundaryPoint[3]));
                    // 4-1
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[3], BoundaryPoint[0]));

                    // 5-6
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[4], BoundaryPoint[5]));
                    // 6-7
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[5], BoundaryPoint[6]));
                    // 7-8
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[6], BoundaryPoint[7]));
                    // 8-5
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[7], BoundaryPoint[4]));

                    // 1-5
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[0], BoundaryPoint[4]));
                    // 2-6
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[1], BoundaryPoint[5]));
                    // 3-7
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[2], BoundaryPoint[6]));
                    // 4-8
                    m_pipeBoundaryIndicator.PointsList.Add(new CTwoPoints(BoundaryPoint[3], BoundaryPoint[7]));

                    // Update Points
                    m_pipeBoundaryIndicator.Impl.UpatePoints();
                }
            }
        }
    }
}