using System;
using System.IO;
using System.Reflection;

namespace PipeSimulation
{
    namespace Utility
    {
        /// <summary>
        /// This class is used to provide a utility for folders used in this application.
        /// </summary>
        public static class CFolderUtility
        {
            /// <summary>
            /// Assembly Executing Path
            /// </summary>
            /// <returns></returns>
            public static string AssemblyExecutingPath()
            {
                //return (Path.GetDirectoryName(Assembly.GetExecutingAssembly().CodeBase));
                return (Assembly.GetExecutingAssembly().Location);
            }

            /// <summary>
            /// Data folder which contain the config file and model file.
            /// </summary>
            public static string DataFolder()
            {
#if DEBUG
                // Hard code now, need to be change after migrate the new solution file sturcture.
                return @"M:\Data\";
#else
                {
                    // The data folder should be at the parent level of the current assembly executing path
                    // Such as 
                    // Bin
                    // --- PipeSimlation.exe
                    // Data
                    string strAssemblyPath = CFolderUtility.AssemblyExecutingPath(); // Bin.PipeSimulation.exe
                    //string strAssemblyPath = @"M:\bin\PipeSimulation.exe";

                    strAssemblyPath = Path.GetDirectoryName(strAssemblyPath); // Bin folder
                    strAssemblyPath = Path.GetDirectoryName(strAssemblyPath); // Bin folder
                    //strAssemblyPath = Path.Combine(strAssemblyPath, "..\\..\\");
                    //int iIndex = strAssemblyPath.LastIndexOf('\\');
                    //if (iIndex != -1)
                    //{
                    //    strAssemblyPath = strAssemblyPath.Substring(0, iIndex + 1);
                    //}

                    return strAssemblyPath + @"\Data\";
                }
#endif
            }
        }
    }
}