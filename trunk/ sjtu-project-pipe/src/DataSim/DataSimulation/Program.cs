using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;

namespace DataSimulation
{
    class Program
    {
        static void Main(string[] args)
        {
            PipeDataSim dataSim = null;

            try
            {
                string connStr = ConfigurationManager.ConnectionStrings["SQLDBConn"].ConnectionString;

                dataSim = new PipeDataSim(connStr);

                //Console.WriteLine("按任意键继续...");
                Console.ReadLine();
            }
            catch (System.Exception ex)
            {
                Console.WriteLine("Exception: {0}", ex.Message);
                Console.WriteLine("Exception: {0}", ex.StackTrace);
            }
            finally
            {
                if (dataSim != null)
                    dataSim.Dispose();
            }
        }
    }
}
