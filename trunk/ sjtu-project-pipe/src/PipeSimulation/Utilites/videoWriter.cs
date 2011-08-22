using System;

namespace PipeSimulation.Utility
{
    /// <summary>
    /// This class is used to define a video output interface.
    /// </summary>
    public interface IVideoWriter
    {
        /// <summary>
        /// This member is used to define the output file path
        /// </summary>
        string FilePath { get; set; }
        
        /// <summary>
        /// This flag is used to determine if the record process is started.
        /// </summary>
        bool IsRecording { get; }

        /// <summary>
        /// Start to record
        /// </summary>
        void StartRecord();

        /// <summary>
        /// End the record process
        /// </summary>
        void EndRecord();

        /// <summary>
        /// This member must be called to Capture data to AVI as a frame.
        /// </summary>
        void CaptureData();
    }
}