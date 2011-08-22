using System;
using PipeSimulation.SceneGraph;
using System.Collections.Generic;

namespace PipeSimulation
{
    namespace DataModel
    {
        /// <summary>
        /// Interface to all the datas models including scene graph and other core data.
        /// </summary>
        public interface IDataModel
        {
            /// <summary>
            /// Return the scene graph
            /// </summary>
            //ISceneManager SceneManager { get; }

            IList<CPipeModel> PipeModels { get; }

            IList<CStaticModel> StaticsModels { get; }
        }
    }
}
