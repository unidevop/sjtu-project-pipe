using System;
using PipeSimulation.PipeApp;

namespace PipeSimulation.Utility
{
    /// <summary>
    /// This class is used to generate a AVI
    /// </summary>
    public class CAVIWriter : IVideoWriter
    {
        private string m_filePath; // File Path
        private vtk.vtkAVIWriter m_aviWriter = null; // A avi
        private vtk.vtkWindowToImageFilter m_WindowToImageFilter = null;

        /// <summary>
        /// Constructor
        /// </summary>
        public CAVIWriter()
        {
        }

        #region IVideoWriter Members

        public string FilePath
        {
            get
            {
                return m_filePath;
            }
            set
            {
                m_filePath = value;
            }
        }

        public bool IsRecording
        {
            get { return (m_aviWriter != null); }
        }

        public void StartRecord()
        {
            // If already started, return directly.
            if (IsRecording) return;

            // Check the file path
            if (string.IsNullOrEmpty(FilePath)) throw new ArgumentNullException(/*MSG0*/"FilePath is not set!");

            // Initialize the window to image filter and AVI writer
            m_WindowToImageFilter = new vtk.vtkWindowToImageFilter();
            m_WindowToImageFilter.SetInput(IApp.theApp.RenderWindow);

            m_aviWriter = new vtk.vtkAVIWriter();
            m_aviWriter.SetInputConnection(m_WindowToImageFilter.GetOutputPort());
            m_aviWriter.SetFileName(FilePath);
            
            // Start record
            m_aviWriter.Start();
        }

        public void EndRecord()
        {
            if (!IsRecording) return;

            // End the process.
             m_aviWriter.End();

            // Clear the memory
            m_WindowToImageFilter.Dispose();
            m_WindowToImageFilter = null;

            m_aviWriter.Dispose();
            m_aviWriter = null;

            FilePath = null;
        }

        public void CaptureData()
        {
            // Check if start to recrod yet
            if (!IsRecording) throw new ApplicationException(/*MSG0*/"Not start record yet!");

            try
            {
                // Must update the m_WindowToImageFilter before write
                m_WindowToImageFilter.Modified();
                m_aviWriter.Write();
            }
            catch
            {
                // Sometimes, a exception will popup if size of vtk control changed.
                // Shall we pop up a message box??
            }
        }

        #endregion
    }
}