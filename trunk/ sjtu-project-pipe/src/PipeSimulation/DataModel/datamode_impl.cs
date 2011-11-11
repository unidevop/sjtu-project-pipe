using System;
using PipeSimulation.SceneGraph;
using PipeSimulation.DataModel;
using System.Collections.Generic;
using PipeSimulation.Geometry;

namespace PipeSimulation
{
    namespace DataModel
    {
        /// <summary>
        /// Implementation to IDataModel
        /// </summary>
        public class CDataModel : IDataModel
        {
            //private ISceneManager m_sceneManager = new CSceneManger();
            private IList<CPipeModel> m_pipeModels = new List<CPipeModel>();
            private IList<CStaticModel> m_staticModels = new List<CStaticModel>();
            private IList<CBoundaryModel> m_BoundaryModels = new List<CBoundaryModel>();
            private double m_dModelingUnitToMeter = 0.01;
            private double m_dGPSUnitToMeter = 1;
            private CUCS m_ucsModelingToGPS = new CUCS();

            public CDataModel()
            {
            }

            #region IDataModel Members

            //public ISceneManager SceneManager
            //{
            //    get { return m_sceneManager; }
            //}

            public IList<CPipeModel> PipeModels 
            {
                get { return m_pipeModels; }
            }

            public IList<CStaticModel> StaticsModels
            {
                get { return m_staticModels; }
            }

            public IList<CBoundaryModel> BoundaryModels 
            {
                get { return m_BoundaryModels; }
            }

            /// <summary>
            /// We create a Modeling UCS to construct all the 3ds models
            /// The coordinate in PipeInfo is relavtive to GPS UCS
            /// This is provide the transformation between two UCSs
            /// </summary>
            public CUCS ModelingUCStoGPSUCS
            {
                get
                {
                    return m_ucsModelingToGPS;
                }

                set
                {
                    m_ucsModelingToGPS = value;
                }
            }

            /// <summary>
            /// Modeling Unit to meter, default is MM, so the value is 0.01
            /// </summary>
            public double ModelingUnitToMeter 
            {
                get { return m_dModelingUnitToMeter; }
                set { m_dModelingUnitToMeter = value; }
            }

            /// <summary>
            /// GPS Unit to Meter, default is M, so the value is 1
            /// </summary>
            public double GPSUnitToMeter 
            {
                get { return m_dGPSUnitToMeter; }
                set { m_dGPSUnitToMeter = value; }
            }
            #endregion
        }
    }
}