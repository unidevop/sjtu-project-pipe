using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace PipeSimulation.DataQuery
{
    public delegate void DataArrivedCallbackType(PipeInfo pipeInfo);

    /// <summary>
    /// This interface is used to query data
    /// </summary>
    public interface IDataQuery : IDisposable
    {
        // Connect to Data engine
        void Connect();

        // Disconnect to the Data engine
        void Disconnect();

        // Flag to indicate if connect to data engine successfully
        bool IsConnected { get; }

        // Query
        bool IsPipeStarted(int iPipeId);
        bool IsPipeEnded(int iPipeId);
        int GetPipeRecordCount(int iPipeId);
        PipeInfo GetPipeRecord(int iPipeId, int iRecoredIndex);

        DateTime GetPipeStartTime(int iPipeId);
        DateTime GetPipeEndTime(int iPipeId);
        DateTime GetPipeTime(int iPipeId, int iRecordIndex);

        PipeInfo GetLatesetData();

        // Event interface to will notify the client that a latest record is coming.
        event DataArrivedCallbackType DataArrivedCallback;
    }
}
