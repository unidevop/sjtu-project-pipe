using System;
using PipeSimulation.SceneGraph;
using System.Collections.Generic;
using PipeSimulation.Geometry;

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

            /// <summary>
            /// We create a Modeling UCS to construct all the 3ds models
            /// The coordinate in PipeInfo is relavtive to GPS UCS
            /// This is provide the transformation between two UCSs
            /// </summary>
            CUCS ModelingUCStoGPSUCS { get; set; }

            /// <summary>
            /// Modeling Unit to meter, default is MM, so the value is 0.01
            /// </summary>
            double ModelingUnitToMeter { get; set; }

            /// <summary>
            /// GPS Unit to Meter, default is M, so the value is 1
            /// </summary>
            double GPSUnitToMeter { get; set; }

            IList<CBoundaryModel> BoundaryModels { get; }
        }
    }
}
