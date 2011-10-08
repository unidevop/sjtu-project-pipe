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
        public class CZhujiangModel : CSceneNodeFromDisk
        {
            private CPoint3D m_ptStartPoint = new CPoint3D();
            
            public CZhujiangModel(ISceneNode parentNode)
                : base(parentNode)
            {
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