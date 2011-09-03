using System;
using PipeSimulation.DataModel;
using PipeSimulation.DataQuery;

namespace PipeSimulation
{
    namespace DataDriven
    {
        /// <summary>
        /// This class is used to drive the models.
        /// </summary>
        public interface IDataDriven
        {
            PipeInfo CurrentData { get;}
            void DriveModel(PipeInfo queryResult);
            void DriveModel(int iPipeId, int iRecordId);
        }
    }
}