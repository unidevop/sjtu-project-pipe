using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;

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
            eDone               // The pipe is already been done
        }

        public class CPoint
        {
            private double[] m_startConnectionPoint = new double[3]; // This value is used to determine the connection point to the previous pipe model
        }

        public class CPipeConnectionPointPair
        {
            private double[] m_startConnectionPoint = new double[3]; // This value is used to determine the connection point to the previous pipe model
            private double[] m_endConnectionPoint = new double[3];  // This value is used to determine the connection point to the next pipe model

            public CPipeConnectionPointPair()
            {
            }

            public virtual void ReadFromXMLNode(XmlNode connectionPairNode)
            {
                // Read the start connection point
                XmlNode startConnectionPointNode = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeStartConnPoint);
                ReadConnectionPoint(startConnectionPointNode, m_startConnectionPoint);

                // Read the end connection point
                XmlNode endConnectionPointNode = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeEndConnPoint);
                ReadConnectionPoint(endConnectionPointNode, m_endConnectionPoint);
            }

            public double[] StartConnectionPoint 
            { 
                get 
                {
                    return m_startConnectionPoint; 
                }
                set
                {
                    m_startConnectionPoint = value;
                }
            }
            public double[] EndConnectionPoint
            { 
                get 
                { 
                    return m_endConnectionPoint; 
                }
                set
                {
                    m_endConnectionPoint = value;
                }
            }

            private void ReadConnectionPoint(XmlNode node, double[] coords)
            {
                if (null == node || null == coords) return;

                foreach (XmlAttribute attri in node.Attributes)
                {
                    if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordX, true) == 0)
                    {
                        coords[0] = double.Parse(attri.InnerText);
                    }
                    else if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordY, true) == 0)
                    {
                        coords[1] = double.Parse(attri.InnerText);
                    }
                    else if (string.Compare(attri.Name, ModelXMLDefinition.pipeCoordZ, true) == 0)
                    {
                        coords[2] = double.Parse(attri.InnerText);
                    }
                }
            }
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

                   // Read Connection Pair
                   XmlNodeList connectionPairNodes = pipeNode.SelectNodes(ModelXMLDefinition.pipeConnectionPointPair);
                   foreach (XmlNode connectionPairNode in connectionPairNodes)
                   {
                       CPipeConnectionPointPair connectionPair = new CPipeConnectionPointPair();
                       connectionPair.ReadFromXMLNode(connectionPairNode);
                       m_connectionPointPairList.Add(connectionPair);
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

            [System.Runtime.CompilerServices.IndexerName(/*MSG0*/"Pylon")]
            public CPylonModel this[int index]
            {
                get
                {
                    if (index >= Children.Count || index < 0) return null;
                    return Children[index] as CPylonModel;
                }
            }

            // Pipe Status
            public PipeStatus Status
            {
                get { return m_ePipeStatus; }
                set
                {
                    if (m_ePipeStatus == value) return;
                    m_ePipeStatus = value;

                    // Deal with the Plyon Models for different models
                    if (m_ePipeStatus == PipeStatus.eNotStartedYet)
                    {
                        Visible = false;
                        foreach (ISceneNode node in Children)
                        {
                            node.Visible = false;
                        }
                    }
                    else if (m_ePipeStatus == PipeStatus.eWorkingInProgess)
                    {
                        Visible = true;
                        foreach (ISceneNode node in Children)
                        {
                            node.Visible = true;
                        }
                    }
                    else if (m_ePipeStatus == PipeStatus.eDone)
                    {
                        Visible = true;
                        foreach (ISceneNode node in Children)
                        {
                            node.Visible = false;
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
                //vtk.vtkProp actor = ModelNode as vtk.vtkProp;
                //_DrivdeModel(actor, transform);
                //foreach (ISceneNode node in Children)
                //{
                //    _DrivdeModel(node.ModelNode, transform);
                //}
            }

            private void _DrivdeModel(vtk.vtkProp node, vtk.vtkTransform transform)
            {
                if (node == null || transform == null) return;
                node.PokeMatrix(transform.GetMatrix());
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
                        m_transFormFinal = m_finalPipeInfo.Matrix.ToVTKTransformation();
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