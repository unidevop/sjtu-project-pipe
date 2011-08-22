using System;
using System.Collections.Generic;

namespace PipeSimulation
{
    namespace SceneGraph
    {
        ///// <summary>
        ///// Scene Node manager
        ///// </summary>
        //public interface ISceneManager
        //{
        //    /// <summary>
        //    /// Top Node
        //    /// </summary>
        //    ISceneNode TopNode { get; }

        //}

        /// <summary>
        /// A common interface for a scene node
        /// </summary>
        public interface ISceneNode
        {
            /// <summary>
            /// Flag is used to control the visibility for this ModelNode.
            /// </summary>
            bool Visible { get; set; }

            /// <summary>
            /// Return a vtkProp to represent this node in the scene
            /// Can be NULL
            /// </summary>
            vtk.vtkProp ModelNode { get; }

            /// <summary>
            /// Children methods.
            /// </summary>
            IList<ISceneNode> Children { get; }

            /// <summary>
            /// Parent node
            /// </summary>
            ISceneNode ParentNode { get; }
        }

        /// <summary>
        /// A interface reprensting the model loaded from disk.
        /// </summary>
        public interface IDiskModel
        {
            /// <summary>
            /// Model Path
            /// </summary>
            string ModelPath { get; }

            /// <summary>
            /// Functions to load the model from ModelPath or unload the model(delete).
            /// </summary>
            bool LoadModel(string modelPath);
            void UnloadModel();

            /// <summary>
            /// Flag is used to test if the model is loaded from disk.
            /// </summary>
            bool IsLoaded { get; }
        }

        
    }
}
