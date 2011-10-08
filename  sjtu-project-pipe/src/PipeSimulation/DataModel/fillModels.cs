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
        public class CFillModel : CSceneNode
        {
            public CFillModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            public IList<CFillSegment> Segments
            {
                get
                {
                    List<CFillSegment> listSegments = new List<CFillSegment>();
                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CFillSegment)
                        {
                            listSegments.Add((CFillSegment)subNode);
                        }
                    }
                    return listSegments;
                }
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with sub models
                    XmlNodeList fillSegmentsNode = node.SelectNodes(ModelXMLDefinition.FillSegment);
                    foreach (XmlNode fillSegmentNode in fillSegmentsNode)
                    {
                        CFillSegment fillSegment = new CFillSegment(this);
                        fillSegment.ReadFromXMLNode(fillSegmentNode);
                    }
                }
                catch (SystemException)
                {
                    throw;
                }
            }
        }

        public class CFillSegment : CSceneNodeFromDisk
        {
            private double m_timePercentage = 0.5;
            private CPoint3D m_ptStartPoint = new CPoint3D();

            public CFillSegment(ISceneNode parentNode)
                :base(parentNode)
            {
            }

            public double TimePercentage
            {
                get { return m_timePercentage; }
            }

            public CPoint3D StartPosition
            {
                get { return m_ptStartPoint; }
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with model path, must be only one
                    LoadModelPathNode(node);

                    // Deal with time percentage
                    XmlNode timePercentageNode = node.SelectSingleNode(ModelXMLDefinition.TimePercentage);
                    if (timePercentageNode != null)
                    {
                        m_timePercentage = double.Parse(timePercentageNode.InnerText);
                    }

                    // Deal with the start position
                    XmlNode startPositionNode = node.SelectSingleNode(ModelXMLDefinition.StartPosition);
                    if (startPositionNode != null)
                    {
                        m_ptStartPoint = CPoint3DSerializer.ReadPoint(startPositionNode);
                    }
                }
                catch (SystemException)
                {
                    throw;
                }
            }
        }
    }
}