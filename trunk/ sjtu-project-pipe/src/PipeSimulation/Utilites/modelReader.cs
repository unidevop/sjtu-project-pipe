using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.DataModel;

namespace PipeSimulation
{
    namespace Utility
    {
        /// <summary>
        /// A utility class to read the xml
        /// </summary>
        public static class CModelXMLReader
        {
            /// <summary>
            /// A utility method to read the models node and construct the scene
            /// </summary>
            /// <param name="topNode"></param>
            /// <param name="modelsNode"></param>
            public static void ReadModels(ISceneNode topNode, XmlNode modelsNode)
            {
                //XmlNodeList xmlSubNodes = modelsNode.SelectNodes(ModelXMLDefinition.ModelNode);
                //foreach (XmlNode xmlSubNode in xmlSubNodes)
                //{
                //    string id = string.Empty;

                //    // Get type 
                //    foreach (XmlAttribute attri in xmlSubNode.Attributes)
                //    {
                //        // get id
                //        if (attri.Name.CompareTo(ModelXMLDefinition.idAttri) == 0)
                //        {
                //            id = attri.InnerText;
                //        }

                //        // Ingore others if the id is null or empty
                //        if (string.IsNullOrEmpty(id)) continue;

                //        // get type
                //        if (string.Compare(attri.Name, ModelXMLDefinition.typeAttri, true) == 0)
                //        {
                //            string type = attri.InnerText;

                //            if (string.Compare(type, ModelXMLDefinition.pipeTypeAttri, true) == 0)
                //            {
                //                CPipeModel pipeModel = new CPipeModel();
                //                pipeModel.ReadFromXMLNode(xmlSubNode);
                //            }
                //            else
                //            {
                //                // So far ,there are only pipe and other models.
                //                // Modify the code to tell different models.
                //                CNormalModel normalModel = new CNormalModel(topNode);
                //                normalModel.ReadFromXMLNode(xmlSubNode);
                //            } // construct models
                //        } // get type
                //    } // foreach attribute
                //} // foreach node
            }
        }
    }
}
