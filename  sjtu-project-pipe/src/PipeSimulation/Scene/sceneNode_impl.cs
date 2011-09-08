using System;
using System.Collections.Generic;
using PipeSimulation.SceneGraph;
using PipeSimulation.DataModel;
using PipeSimulation.PipeApp;

namespace PipeSimulation
{
    namespace SceneGraph
    {
        ///// <summary>
        ///// The implementation to ISceneManager
        ///// </summary>
        //public class CSceneManger : ISceneManager
        //{
        //    // Construct top node internally
        //    private ISceneNode m_topNode;

        //    public CSceneManger()
        //    {
        //        // m_topNode = new CSceneNode(this, ModelIdDefinition.TopNode, null);;
        //    }

        //    #region ISceneManager Members

        //    public ISceneNode TopNode
        //    {
        //        get { return m_topNode; }
        //    }

        //    #endregion
        //}

        /// <summary>
        /// This is the implementation to ISceneNode
        /// </summary>
        public class CSceneNode : ISceneNode
        {
            private ISceneNode m_parentNode;
            private IList<ISceneNode> m_childrenList = new List<ISceneNode>();
            private CModelNode m_modelNode = null;

            public CSceneNode(ISceneNode parentNode)
            {
                m_parentNode = parentNode;
                
                // This statement is a exception for top node
                if (null != m_parentNode)
                {
                    m_parentNode.Children.Add(this);
                }
            }

            #region ISceneNode Members

             public bool Visible
            {
                get
                {
                    if (null != ModelNode)
                    {
                        return (ModelNode.Visibility);
                    }

                    return false;
                }
                set
                {
                    if (null != ModelNode)
                    {
                        ModelNode.Visibility = value;
                    }
                }
            }

             public CModelNode ModelNode
            {
                get { return m_modelNode; }
                protected set
                {
                    m_modelNode = value;
                }
            }

            public IList<ISceneNode> Children 
            {
                get { return m_childrenList; }
            }
            public ISceneNode ParentNode
            {
                get { return m_parentNode; }
            }
            #endregion
        }
    }
}