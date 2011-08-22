using System;
using PipeSimulation.SceneGraph;
using PipeSimulation.DataModel;
using System.Collections.Generic;

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

            #endregion
        }
    }
}