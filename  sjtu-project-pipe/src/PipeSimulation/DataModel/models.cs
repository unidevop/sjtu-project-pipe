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
                        catch(Exception ex)
                        {
                            string errMsg = ex.Message + "\n" + ex.StackTrace;
                            vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                        }
                    }
                }
                catch(Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
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
                        obj3dsImporter.ComputeNormalsOn();
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
                        catch(Exception ex)
                        {
                            string errMsg = ex.Message + "\n" + ex.StackTrace;
                            vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                        }
                    }
                }
                catch (SystemException ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
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
    }
}