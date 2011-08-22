using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;

namespace PipeSimulation
{
    namespace DataModel
    {

        /// <summary>
        /// This class is used to repsent the node from disk
        /// </summary>
        public class CSceneNodeFromDisk : CSceneNode, IDiskModel
        {
            private string m_modelPath = string.Empty;

            public CSceneNodeFromDisk(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            #region IDiskModel Members

            public string ModelPath
            {
                get { return m_modelPath; }

                protected set { m_modelPath = value; }
            }

            public virtual bool LoadModel(string modelPath)
            {
                if (IsLoaded) return true;

                try
                {
                    using (vtk.vtk3DSImporter obj3dsImporter = new vtk.vtk3DSImporter())
                    {
                        obj3dsImporter.SetFileName(modelPath);
                        obj3dsImporter.SetRenderWindow(IApp.theApp.RenderWindow);
                        obj3dsImporter.Read();

                        vtk.vtkActorCollection actorCollection = obj3dsImporter.ActorCollection();
                        ModelNode = actorCollection.GetLastProp();

                        // Default should be visibility off for none static models
                        if (!(this is CStaticModel))
                        {
                            ModelNode.VisibilityOff();
                        }
                    }
                }
                catch (SystemException)
                {
                    return false;
                }

                return true;
            }

            public virtual void UnloadModel()
            {
                if (null != ModelNode)
                {
                    ModelNode.Dispose();
                }
            }

            public bool IsLoaded
            {
                get { return ModelNode != null; }
            }

            #endregion
        }
        
        /// <summary>
        /// Define a class to represent the pipe
        /// Which is a model and also work with some others models together
        /// Also, there are some parameters to reposition other models.
        /// </summary>
        public class CPipeModel : CSceneNodeFromDisk
        {
            private double m_dLength;
            private double m_dWidth;
            private double m_dHeight;

            public CPipeModel() : base(null)
            {
            }

            // Parameters
            // Such as wdith, length, height, D1, T1, D2, T2 etc.

            public virtual void ReadFromXMLNode(XmlNode pipeNode)
            {
                try
                {
                    // Deal with sub models
                    foreach (XmlAttribute attri in pipeNode.Attributes)
                    {
                        if (string.Compare(attri.Name, ModelXMLDefinition.pipeLength, true) == 0)
                        {
                            Length = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.pipeWidth, true) == 0)
                        {
                            Width = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.pipeHeight, true) == 0)
                        {
                            Height = double.Parse(attri.InnerText);
                        }
                    }

                    // Deal with model path, must be only one
                   XmlNode modelPathNode = pipeNode.SelectSingleNode(ModelXMLDefinition.modelPath);
                   if (modelPathNode != null)
                   {
                       ModelPath = modelPathNode.InnerText;
                       //ModelPath = System.IO.Path.Combine(CFolderUtility.DataFolder(), modelPathNode.InnerText);
                   }

                    // Read the pylons and other models
                   XmlNodeList pylonNodes = pipeNode.SelectNodes(ModelXMLDefinition.Pylon);
                   foreach (XmlNode pylonNode in pylonNodes)
                   {
                       CPylonModel normalNode = new CPylonModel(this);
                       normalNode.ReadFromXMLNode(pylonNode);
                   }
                }
                catch (SystemException)
                {
                    throw;
                }

            }

            // Getter
            public double Length { get { return m_dLength; } internal set { m_dLength = value; } }
            public double Width { get { return m_dWidth; } internal set { m_dWidth = value; } }
            public double Height { get { return m_dHeight; } internal set { m_dHeight = value; } }

            [System.Runtime.CompilerServices.IndexerName("Pylon")]
            public CPylonModel this[int index]
            {
                get
                {
                    if (index >= Children.Count || index < 0) return null;
                    return Children[index] as CPylonModel;
                }
            }
        }

        public class CPylonModel : CSceneNodeFromDisk
        {
            private double m_dD;
            private double m_dT;
            private double m_dHeight;

            public CPylonModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with sub models
                    foreach (XmlAttribute attri in node.Attributes)
                    {
                        if (string.Compare(attri.Name, ModelXMLDefinition.pylonHeight, true) == 0)
                        {
                            Height = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.d, true) == 0)
                        {
                            D = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.t, true) == 0)
                        {
                            T = double.Parse(attri.InnerText);
                        }
                    }
                    
                    // Deal with model path, must be only one
                    XmlNode modelPathNode = node.SelectSingleNode(ModelXMLDefinition.modelPath);
                    if (modelPathNode != null)
                    {
                        //ModelPath = System.IO.Path.Combine(CFolderUtility.DataFolder(), modelPathNode.InnerText);
                        ModelPath = modelPathNode.InnerText;
                    }

                    //// Deal with sub models
                    //XmlNode modelsNode = node.SelectSingleNode(ModelXMLDefinition.ModelsNode);
                    //if (modelsNode != null)
                    //{
                    //    CModelXMLReader.ReadModels(this, modelsNode);
                    //}
                }
                catch (SystemException)
                {
                    throw;
                }
            }

            // Getter
            public double D { get { return m_dD; } internal set { m_dD = value; } }
            public double T { get { return m_dT; } internal set { m_dT = value; } }
            public double Height { get { return m_dHeight; } internal set { m_dHeight = value; } }
        }

        public class CStaticModel : CSceneNodeFromDisk
        {
            public CStaticModel()
                : base(null)
            {
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with model path, must be only one
                    XmlNode modelPathNode = node.SelectSingleNode(ModelXMLDefinition.modelPath);
                    if (modelPathNode != null)
                    {
                        ModelPath = modelPathNode.InnerText;
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