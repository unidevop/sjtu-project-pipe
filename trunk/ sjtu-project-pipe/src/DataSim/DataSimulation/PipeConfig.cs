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

        public DateTime MeasureStartTime
        {
            get
            {
                return DateTime.Parse(ConfigurationManager.AppSettings["MeasureStartTime"]);
            }
        }

        public DateTime MeasureEndTime
        {
            get
            {
                return DateTime.Parse(ConfigurationManager.AppSettings["MeasureEndTime"]);
            }
        }

        public TimeSpan WriteInterval
        {
            get
            {
                return TimeSpan.Parse(ConfigurationManager.AppSettings["WriteInterval"]);
            }
        }

        public TimeSpan MeasureInterval
        {
            get
            {
                return TimeSpan.Parse(ConfigurationManager.AppSettings["MeasureInterval"]);
            }
        }

        public TimeSpan BackfillTimeSpan
        {
            get
            {
                return TimeSpan.Parse(ConfigurationManager.AppSettings["BackfillTimeSpan"]);
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
        public PipeElement this[int index]
        {
            get
            {
                return base.BaseGet(index) as PipeElement;
            }
        }

        public new PipeElement this[string key]
        {
            get
            {
                return base.BaseGet(key) as PipeElement;
            }
        }

        protected override ConfigurationElement CreateNewElement()
        {
            return new PipeElement();
        }

        protected override object GetElementKey(ConfigurationElement element)
        {
            return ((PipeElement)element).Index;
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
                return "pipe";
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

    internal class PipeElement : ConfigurationElementCollection
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

        [ConfigurationProperty("id", DefaultValue = "1", IsRequired = true)]
        [IntegerValidator(MinValue = 0, MaxValue = 4, ExcludeRange = false)]
        public int Id
        {
            get
            {
                return (int)base["id"];
            }
            set
            {
                base["id"] = value;
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

        [ConfigurationProperty("BackfillTimeSpan")]
        public TimeSpan BackfillTimeSpan
        {
            get
            {
                return (TimeSpan)base["BackfillTimeSpan"];
            }
            set
            {
                base["BackfillTimeSpan"] = value;
            }
        }

        public PipeTrack this[int index]
        {
            get
            {
                return base.BaseGet(index) as PipeTrack;
            }
        }

        //public new PipeTrack this[string key]
        //{
        //    get
        //    {
        //        return base.BaseGet(key) as PipeTrack;
        //    }
        //}

        protected override ConfigurationElement CreateNewElement()
        {
            return new PipeTrack();
        }

        protected override object GetElementKey(ConfigurationElement element)
        {
            return ((PipeTrack)element).Index;
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
                return "pos";
            }
        }

        //[ConfigurationProperty("pos", IsRequired = true)]
        //public PipeTrack TrackPos
        //{
        //    get
        //    {
        //        return (PipeTrack)this["pos"];
        //    }
        //}
    }

    internal class PipeTrack : ConfigurationElementCollection
    {
        [ConfigurationProperty("index", IsKey = true, IsRequired = true)]
        [IntegerValidator(MinValue = 0, ExcludeRange = false)]
        public int Index
        {
            get { return (int)base["index"]; }
        }

        public TrackPoint this[int index]
        {
            get
            {
                return base.BaseGet(index) as TrackPoint;
            }
        }

        public new TrackPoint this[string key]
        {
            get
            {
                return base.BaseGet(key) as TrackPoint;
            }
        }

        protected override ConfigurationElement CreateNewElement()
        {
            return new TrackPoint();
        }

        protected override object GetElementKey(ConfigurationElement element)
        {
            return ((TrackPoint)element).Index;
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
                return "point";
            }
        }

        //[ConfigurationProperty("point", IsRequired = true, IsDefaultCollection=true)]
        //public TrackPoint PointCollection
        //{
        //    get
        //    {
        //        return (TrackPoint)this["point"];
        //    }
        //}
    }

    internal class TrackPoint : ConfigurationElement
    {
        [ConfigurationProperty("index", IsKey = true, IsRequired = true)]
        [IntegerValidator(MinValue = 0, MaxValue = 3, ExcludeRange = false)]
        public int Index
        {
            get { return (int)base["index"]; }
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

        public Point3D Value
        {
            get { return new Point3D(X, Y, Z); }
        }
    }
}
