using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;
using System.Collections;
using System.Windows.Media.Media3D;

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

                string sectionBaseName = "pipes/pipeSection";
                Hashtable ht = null;
                int idx = 1;

                List<PipeDataGenerator> pipeDataGenList = new List<PipeDataGenerator>();

                while ((ht = (Hashtable)(ConfigurationManager.GetSection(sectionBaseName + idx))) != null)
                {
                    Point3D startPt1 = new Point3D(Convert.ToDouble(ht["startX1"]), Convert.ToDouble(ht["startY1"]), Convert.ToDouble(ht["startZ1"]));
                    Point3D startPt2 = new Point3D(Convert.ToDouble(ht["startX2"]), Convert.ToDouble(ht["startY2"]), Convert.ToDouble(ht["startZ2"]));
                    Point3D endPt1 = new Point3D(Convert.ToDouble(ht["endX1"]), Convert.ToDouble(ht["endY1"]), Convert.ToDouble(ht["endZ1"]));
                    Point3D endPt2 = new Point3D(Convert.ToDouble(ht["endX2"]), Convert.ToDouble(ht["endY2"]), Convert.ToDouble(ht["endZ2"]));

                    pipeDataGenList.Add(new PipeDataGenerator(idx++, startPt1, startPt2, endPt1, endPt2));
                }

                dataSim = new PipeDataSim(connStr,
                    TimeSpan.Parse(ConfigurationManager.AppSettings["WriteInterval"]),
                    Convert.ToDateTime(ConfigurationManager.AppSettings["MeasureStartTime"]),
                    Convert.ToDateTime(ConfigurationManager.AppSettings["MeasureEndTime"]),
                    TimeSpan.Parse(ConfigurationManager.AppSettings["MeasureInterval"]),
                    TimeSpan.Parse(ConfigurationManager.AppSettings["BackfillTimeSpan"]),
                    pipeDataGenList.ToArray());

                //dataSim.MeasureInterval = TimeSpan.Parse(ConfigurationManager.AppSettings["MeasureInterval"]);
                dataSim.Connect();

                dataSim.Activate();

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
