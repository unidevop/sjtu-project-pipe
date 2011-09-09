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
            /// Return a CModelNode to represent this node in the scene
            /// Can be NULL
            /// </summary>
            CModelNode ModelNode { get; }

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

        // Make a wrapper to vtk.vtkProCollection
        public class CModelNode : vtk.vtkPropCollection
        {
            public CModelNode()
            {
            }

            public bool Visibility
            {
                get
                {
                    vtk.vtkProp lastProp = GetLastProp();
                    if (lastProp == null) return false;

                    return (lastProp.GetVisibility() != 0);
                }

                set
                {
                    int iVisibility = value ? 1 : 0;

                    InitTraversal();
                    for (int iIndex = 0; iIndex < GetNumberOfItems(); ++iIndex)
                    {
                        vtk.vtkProp prop = GetNextProp();
                        if (prop == null) continue;

                        prop.SetVisibility(iVisibility);
                    }
                }
            }

            public void PokeMatrix(vtk.vtkTransform transform)
            {
                // Something goes wrong with the transform,
                // Use a temp transform instead.
                transform = new vtk.vtkTransform();
                Random ro = new Random();
                //transform.Translate(ro.NextDouble() * -20000, ro.NextDouble() * -5000, ro.NextDouble() * -14000);
                transform.Translate(0, 0, ro.NextDouble() * -14000);
                transform.Update();

                InitTraversal();
                for (int iIndex = 0; iIndex < GetNumberOfItems(); ++iIndex)
                {
                    vtk.vtkProp prop = GetNextProp();
                    if (prop == null) continue;

                    prop.PokeMatrix(transform.GetMatrix());
                }
            }
        }
    }
}
