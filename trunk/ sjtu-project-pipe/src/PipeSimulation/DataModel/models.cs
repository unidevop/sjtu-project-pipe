using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;

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
            private bool m_bShowInMultipleView = false;

            public CSceneNodeFromDisk(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            protected void LoadModelPathNode(XmlNode node)
            {
                try
                {
                    // Deal with model path, must be only one
                    XmlNode modelPathNode = node.SelectSingleNode(ModelXMLDefinition.modelPath);
                    if (modelPathNode != null)
                    {
                        //ModelPath = System.IO.Path.Combine(CFolderUtility.DataFolder(), modelPathNode.InnerText);
                        ModelPath = modelPathNode.InnerText;

                        // Read the show in multiple views option
                        try
                        {
                            XmlAttribute attrib = node.Attributes[ModelXMLDefinition.showInMultipleViews];
                            m_bShowInMultipleView = (int.Parse(attrib.Value) != 0);
                        }
                        catch
                        {
                        }
                    }
                }
                catch
                {
                }
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

                        try
                        {
                            // Handle the exception that none actor is create
                            if (ModelNode == null)
                                ModelNode = new CModelNode();

                            vtk.vtkActorCollection actorCollection = obj3dsImporter.ActorCollection();
                            actorCollection.InitTraversal();
                            for (int iIndex = 0; iIndex < actorCollection.GetNumberOfItems(); ++iIndex)
                            {
                                vtk.vtkActor actor = actorCollection.GetNextActor();
                                if (actor == null) continue;

                                if (m_bShowInMultipleView)
                                {
                                    IRendererManager renderManager = IApp.theApp.RendererManager;
                                    renderManager.TopViewRenderer.AddActor(actor);
                                    renderManager.RightViewRenderer.AddActor(actor);
                                    renderManager.FrontViewRenderer.AddActor(actor);
                                }

                                ModelNode.AddItem(actor);
                            }

                            // Default should be visibility off for none static models
                            if (!(this is CStaticModel))
                            {
                                ModelNode.Visibility = false;
                            }
                        }
                        catch
                        {
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
        /// A status enum to represent the status of pipe model
        /// </summary>
        public enum PipeStatus
        {
            eNotStartedYet,     // The pipe has not been started yet
            eWorkingInProgess,  // The pipe is working in progress
            eDone,              // The pipe is already been done
            eFill               // Thi pipe should be filled
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
            private PipeStatus m_ePipeStatus;
            private vtk.vtkTransform m_transFormFinal = null;
            private PipeInfo m_finalPipeInfo = null;
            private IList<CPipeConnectionPointPair> m_connectionPointPairList = new List<CPipeConnectionPointPair>();
            private CUCS m_gpsUCS = new CUCS();

            public CPipeModel() : base(null)
            {
                Status = PipeStatus.eNotStartedYet;
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
                    LoadModelPathNode(pipeNode);

                    // Read the pylons models
                   XmlNodeList pylonNodes = pipeNode.SelectNodes(ModelXMLDefinition.Pylon);
                   foreach (XmlNode pylonNode in pylonNodes)
                   {
                       CPylonModel normalNode = new CPylonModel(this);
                       normalNode.ReadFromXMLNode(pylonNode);
                   }

                   // Read the fill models
                   XmlNodeList fillNodes = pipeNode.SelectNodes(ModelXMLDefinition.FillModel);
                   foreach (XmlNode fillNode in fillNodes)
                   {
                       CFillModel normalNode = new CFillModel(this);
                       normalNode.ReadFromXMLNode(fillNode);
                   }

                   // Read Connection Pair
                   XmlNodeList connectionPairNodes = pipeNode.SelectNodes(ModelXMLDefinition.pipeConnectionPointPair);
                   foreach (XmlNode connectionPairNode in connectionPairNodes)
                   {
                       CPipeConnectionPointPair connectionPair = new CPipeConnectionPointPair();
                       connectionPair.ReadFromXMLNode(connectionPairNode);
                       m_connectionPointPairList.Add(connectionPair);
                   }

                    // Read the GPS UCS
                   XmlNode gpsUCSNode = pipeNode.SelectSingleNode(ModelXMLDefinition.pipeGPSUCS);
                   if (gpsUCSNode != null)
                   {
                       m_gpsUCS.ReadFromXMLNode(gpsUCSNode);
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
            public IList<CPipeConnectionPointPair> ConnectionPointPairList { get { return m_connectionPointPairList; } }
            public CUCS GPSUCS { get { return m_gpsUCS; } }

            //[System.Runtime.CompilerServices.IndexerName(/*MSG0*/"Pylon")]
            //public CPylonModel this[int index]
            //{
            //    get
            //    {
            //        if (index >= Children.Count || index < 0) return null;
            //        return Children[index] as CPylonModel;
            //    }
            //}

            //[System.Runtime.CompilerServices.IndexerName(/*MSG0*/"FillModel")]
            //public CFillModel this[int index]
            //{
            //    get
            //    {
            //        if (index >= Children.Count || index < 0) return null;
            //        return Children[index] as CFillModel;
            //    }
            //}

            // Pipe Status
            public PipeStatus Status
            {
                get { return m_ePipeStatus; }
                set
                {
                    if (m_ePipeStatus == value) return;
                    m_ePipeStatus = value;

                    // Deal with the Plyon Models for different models
                    bool bNotStartedYet = (m_ePipeStatus == PipeStatus.eNotStartedYet);
                    Visible = !bNotStartedYet;
                    //if (m_ePipeStatus == PipeStatus.eNotStartedYet)
                    //{
                    //    Visible = false;
                    //  }
                    //else if (m_ePipeStatus == PipeStatus.eWorkingInProgess)
                    //{
                    //    Visible = true;

                    //}
                    //else if (m_ePipeStatus == PipeStatus.eDone)
                    //{
                    //    Visible = true;
                    //}
                    //else if (m_ePipeStatus == PipeStatus.eFill)
                    //{
                    //    Visible = true;
                    //}

                    // show/hide the plyon models
                    bool bWorkingInProgress = (m_ePipeStatus == PipeStatus.eWorkingInProgess);
                    foreach (ISceneNode node in Children)
                    {
                        if (node is CPylonModel)
                        {
                            node.Visible = bWorkingInProgress;
                        }
                    }

                    // show/hide the fill models
                    bool bFill = (m_ePipeStatus == PipeStatus.eFill);
                    foreach (ISceneNode node in Children)
                    {
                        if (node is CFillModel)
                        {
                            node.Visible = bFill;
                        }
                    }
                }
            }

            // Drive Model
            public void DriveModel(vtk.vtkTransform transform)
            {
                // Assert valid
                if (transform == null) return;

                // We don't allow to drive the model when the status is not started.
                if (Status == PipeStatus.eNotStartedYet) return;

                // Only drive the model when the pipe is working progress
                _DrivdeModel(ModelNode, transform);
                foreach (ISceneNode node in Children)
                {
                    if (node is CPylonModel)
                    {
                        _DrivdeModel(node.ModelNode, transform);
                    }
                }
            }

            private void _DrivdeModel(CModelNode modelNode, vtk.vtkTransform transform)
            {
                if (modelNode == null || transform == null) return;
                modelNode.PokeMatrix(transform);
            }

            // Cached final transform
            public vtk.vtkTransform FinalTransform
            {
                get { return m_transFormFinal; }
            }

            // Cached final pipe info
            public PipeInfo FinalPipeInfo
            {
                get { return m_finalPipeInfo; }
                set
                {
                    m_finalPipeInfo = value;

                    if (m_finalPipeInfo != null)
                    {
                        m_transFormFinal = Utility.CPipeTransformUtility.TransformGPSMatrix(GPSUCS.UCSTransform, m_finalPipeInfo.Matrix.ToVTKTransformation());
                    }
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
                    LoadModelPathNode(node);

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
        public class CFillModel : CSceneNodeFromDisk
        {
            public CFillModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Deal with model path, must be only one
                    LoadModelPathNode(node);

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
                    LoadModelPathNode(node);
                }
                catch (SystemException)
                {
                    throw;
                }
            }
        }
    }
}