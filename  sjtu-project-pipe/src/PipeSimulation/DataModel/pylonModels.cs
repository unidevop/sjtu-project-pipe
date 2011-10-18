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
                catch (SystemException ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    throw;
                }
            }

            // Getter
            public double D { get { return m_dD; } internal set { m_dD = value; } }
            public double T { get { return m_dT; } internal set { m_dT = value; } }
            public double Height { get { return m_dHeight; } internal set { m_dHeight = value; } }
        }
    }
}