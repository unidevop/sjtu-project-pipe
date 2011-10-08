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
        /// <summary>
        /// This class is a fubo model.
        /// </summary>
        public class CFuboModel : CSceneNodeFromDisk
        {
            private bool m_bPositionArrived = false;
            private vtk.vtkTransform m_finalTransform = null;

            public CFuboModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with model path, must be only one
                    LoadModelPathNode(node);
                }
                catch (SystemException)
                {
                    throw;
                }
            }

            public virtual void OnFuboArrived()
            {
                m_bPositionArrived = true;
            }

            public bool PositionArrived
            {
                get { return m_bPositionArrived; }
                set { m_bPositionArrived = value; }
            }

            public vtk.vtkTransform FinalTransform
            {
                get { return m_finalTransform; }
                set { m_finalTransform = value; }
            }
        }
    }
}