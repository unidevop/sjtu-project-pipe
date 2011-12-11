using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace PipeSimulation.DataQuery
{
    /// <summary>
    /// This class acts as a base query interface.
    /// We can use connect function to connect to a data engine, and disconnect function to disconnect from data engine
    /// </summary>
    public interface IBaseDataQuery : IDisposable
    {
        // Connect to Data engine
        void Connect();

        // Disconnect to the Data engine
        void Disconnect();

        // Flag to indicate if connect to data engine successfully
        bool IsConnected { get; }
    }

    /// <summary>
    /// pubic delegate used in real time query
    /// when there is any new record arriving
    /// </summary>
    /// <param name="pipeInfo"></param>
    public delegate void DataArrivedCallbackType(PipeInfo pipeInfo);

    /// <summary>
    /// This interface is used to query real time data
    /// </summary>
    public interface IRealtimeDataQuery : IBaseDataQuery
    {
        /// <summary>
        /// Begin to read data and push to the client
        /// </summary>
        void Activate();

        /// <summary>
        /// End reading data
        /// </summary>
        void Deactivate();

        /// <summary>
        /// Fetch the latest data from data engine
        /// </summary>
        /// <returns></returns>
        PipeInfo FetchLatestData();

        // Event interface to will notify the client that a latest record is coming.
        event DataArrivedCallbackType DataArrivedCallback;
    }

    /// <summary>
    /// This interface is used to query history data
    /// </summary>
    public interface IHistoryDataQuery : IBaseDataQuery
    {
        /// <summary>
        /// This function is used to determine if the given pipe id is started
        /// If there are some records for this given pipe id, return true, vise visa.
        /// </summary>
        /// <param name="iPipeId">the pipe id</param>
        /// <returns></returns>
        bool IsPipeStarted(int iPipeId);

        /// <summary>
        /// This function is used to determine if the given pipe is positioned completely.
        /// If there are some records for next pipe id, return true, vise visa
        /// </summary>
        /// <param name="iPipeId">the given pipe id</param>
        /// <returns></returns>
        bool IsPipeEnded(int iPipeId);

        /// <summary>
        /// Get all pipe record count for the given pipe id
        /// </summary>
        /// <param name="iPipeId">the given pipe id</param>
        /// <returns>retrn a long value</returns>
        long GetPipeRecordCount(int iPipeId);

        /// <summary>
        /// Get Pipe Record regarding to the given pipe and record index
        /// </summary>
        /// <param name="iPipeId">the given pipe id</param>
        /// <param name="iRecordIndex">the given record index</param>
        /// <returns>PipeInfo</returns>
        PipeInfo GetPipeRecord(int iPipeId, int iRecordIndex);

        /// <summary>
        /// Get Pipe Record regarding to the given pipe and date time
        /// </summary>
        /// <param name="dateTime">date time</param>
        /// <returns></returns>
        PipeInfo GetPipeRecord(DateTime dateTime, bool bFindNearest);

        /// <summary>
        /// Get Start time for the given pipe id, IsPipeStarted function must be called before calling this function.
        /// </summary>
        /// <param name="iPipeId">the given pipe id</param>
        /// <returns>DateTime</returns>
        DateTime GetPipeStartTime(int iPipeId, bool bFindPrecese);

        /// <summary>
        /// Get End time for the given pipe id, IsPipeEnded function must be called before calling this function.
        /// </summary>
        /// <param name="iPipeId">the given pipe id</param>
        /// <returns>DateTime</returns>
        DateTime GetPipeEndTime(int iPipeId, bool bFindPrecese);

        /// <summary>
        /// Get the date time by the given pipe id and record index
        /// </summary>
        /// <param name="iPipeId"></param>
        /// <param name="iRecordIndex"></param>
        /// <returns></returns>
        DateTime GetPipeTime(int iPipeId, int iRecordIndex);
    }

}
