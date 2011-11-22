using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Configuration;
using System.Windows.Media.Media3D;

namespace DataSimulation
{
    internal class PipeConfig
    {
        static PipeConfig s_pipeCfg = null;

        protected PipeConfig()
        {
        }

        public static PipeConfig Instance()
        {
            if (s_pipeCfg == null)
            {
                s_pipeCfg = new PipeConfig();
            }
            return s_pipeCfg;
        }

        public PipeTracksSection PipeTracks
        {
            get
            {
                PipeTracksSection section = ConfigurationManager.GetSection("pipeTracks") as PipeTracksSection;

                return section;
            }
        }

        public string SourceTable
        {
            get
            {
                return ConfigurationManager.AppSettings["SourceTable"];
            }
        }

        public string TargetTable
        {
            get
            {
                return ConfigurationManager.AppSettings["TargetTable"];
            }
        }
    }

    internal sealed class PipeTracksSection : ConfigurationSection
    {
        //public PipeTracksSection()
        //{
        //}

        [ConfigurationProperty("", IsDefaultCollection = true)]
        public PipeElementCollection PipeCollection
        {
            get
            {
                return (PipeElementCollection)this[""];
            }
        }
    }

    internal class PipeElementCollection : ConfigurationElementCollection
    {
        public TrackElement this[int index]
        {
            get
            {
                return base.BaseGet(index) as TrackElement;
            }
        }

        public new TrackElement this[string key]
        {
            get
            {
                return base.BaseGet(key) as TrackElement;
            }
        }

        protected override ConfigurationElement CreateNewElement()
        {
            return new TrackElement();
        }

        protected override object GetElementKey(ConfigurationElement element)
        {
            return ((TrackElement)element).Index;
        }

        public override ConfigurationElementCollectionType CollectionType
        {
            get
            {
                return ConfigurationElementCollectionType.BasicMap;
            }
        }

        protected override string ElementName
        {
            get
            {
                return "track";
            }
        }

        //[ConfigurationProperty("pipe", IsRequired = true)]
        //public PipeElement Pipe
        //{
        //    get
        //    {
        //        return (PipeElement)this["pipe"];
        //    }
        //}
    }

    internal class TrackElement : ConfigurationElement
    {
        [ConfigurationProperty("index", DefaultValue = "1", IsKey=true, IsRequired = true)]
        [IntegerValidator(MinValue = 0, ExcludeRange = false)]
        public int Index
        {
            get
            {
                return (int)base["index"];
            }
            set
            {
                base["index"] = value;
            }
        }

        [ConfigurationProperty("StartTime")]
        public DateTime StartTime
        {
            get
            {
                return (DateTime)base["StartTime"];
            }
            set
            {
                base["StartTime"] = value;
            }
        }

        [ConfigurationProperty("EndTime")]
        public DateTime EndTime
        {
            get
            {
                return (DateTime)base["EndTime"];
            }
            set
            {
                base["EndTime"] = value;
            }
        }

        [ConfigurationProperty("X", IsRequired = true)]
        public double X
        {
            get { return (double)this["X"]; }
        }

        [ConfigurationProperty("Y", IsRequired = true)]
        public double Y
        {
            get { return (double)this["Y"]; }
        }

        [ConfigurationProperty("Z", IsRequired = true)]
        public double Z
        {
            get { return (double)this["Z"]; }
        }

        public Vector3D Direction
        {
            get { return new Vector3D(X, Y, Z); }
        }
    }
}
