using System;
using System.Xml;
using PipeSimulation.DataModel;
using PipeSimulation.PipeApp;

namespace PipeSimulation.Geometry
{

    /// <summary>
    /// This class is used to simulation the connection point pair
    /// </summary>
    public class CPipeConnectionPointPair
    {
        private CPoint3D m_startConnectionPoint = new CPoint3D(); // This value is used to determine start connection point for this pipe
        private CPoint3D m_endConnectionPoint = new CPoint3D(); // This value is used to determine the end connection point for this pipe
        private string m_strName;

        public CPipeConnectionPointPair()
        {
        }

        public virtual void ReadFromXMLNode(XmlNode connectionPairNode)
        {
            // Read the start connection point
            XmlNode startConnectionPointNode = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeStartConnPoint);
            m_startConnectionPoint = CPoint3DSerializer.ReadPoint(startConnectionPointNode);

            // Read the end connection point
            XmlNode endConnectionPointNode = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeEndConnPoint);
            m_endConnectionPoint = CPoint3DSerializer.ReadPoint(endConnectionPointNode);

            try
            {
                m_strName = connectionPairNode.Attributes[ModelXMLDefinition.pipeConnectionPointPairName].Value;
            }
            catch (Exception)
            {
            }
        }

        public CPoint3D StartConnectionPoint
        {
            get
            {
                return m_startConnectionPoint;
            }
            set
            {
                m_startConnectionPoint = new CPoint3D(value.Point);
            }
        }
        public CPoint3D EndConnectionPoint
        {
            get
            {
                return m_endConnectionPoint;
            }
            set
            {
                m_endConnectionPoint = new CPoint3D(value.Point);
            }
        }

        public string Name
        {
            get { return m_strName; }
            set { m_strName = value; }
        }

        /// <summary>
        /// Get the distance
        /// </summary>
        public double Distance
        {
            get { return Math.Sqrt(Math.Pow(DeltaX, 2) + Math.Pow(DeltaY, 2) + Math.Pow(DeltaZ, 2));}
        }

        /// <summary>
        /// The EndConnectionPoint.x - StartConnectionPoint.x
        /// </summary>
        public double DeltaX
        {
            get { return m_endConnectionPoint.X - m_startConnectionPoint.X; }
        }

        /// <summary>
        /// The EndConnectionPoint.y - StartConnectionPoint.y
        /// </summary>
        public double DeltaY
        {
            get { return m_endConnectionPoint.Y - m_startConnectionPoint.Y; }
        }

        /// <summary>
        /// The EndConnectionPoint.z - StartConnectionPoint.z
        /// </summary>
        public double DeltaZ
        {
            get { return m_endConnectionPoint.Z - m_startConnectionPoint.Z; }
        }

        /// <summary>
        /// Get the distance
        /// </summary>
        public double DistanceInMeter
        {
            get { return Math.Abs(Distance * IApp.theApp.DataModel.ModelingUnitToMeter); }
        }

        /// <summary>
        /// The EndConnectionPoint.x - StartConnectionPoint.x
        /// </summary>
        public double DeltaXInMeter
        {
            get { return Math.Abs(DeltaX * IApp.theApp.DataModel.ModelingUnitToMeter); }
        }

        /// <summary>
        /// The EndConnectionPoint.y - StartConnectionPoint.y
        /// </summary>
        public double DeltaYInMeter
        {
            get { return Math.Abs(DeltaY * IApp.theApp.DataModel.ModelingUnitToMeter); }
        }

        /// <summary>
        /// The EndConnectionPoint.z - StartConnectionPoint.z
        /// </summary>
        public double DeltaZInMeter
        {
            get { return Math.Abs(DeltaZ * IApp.theApp.DataModel.ModelingUnitToMeter); }
        }
    }

    // Add a new ConnectionPositionEnum to indicate that if the point is static, on previous pipe, on this pipe.
    public enum ConnectionPositionEnum
    {
        kStaticPosition,
        kOnPreviousPipe,
        kOnThisPipe
    }

    /// <summary>
    /// This class is used to simulation the connection point pair
    /// </summary>
    public class CPipeConnectionPointPairEx : CPipeConnectionPointPair
    {
        private ConnectionPositionEnum m_startPositionEnum = ConnectionPositionEnum.kOnPreviousPipe;
        private ConnectionPositionEnum m_endPositionEnum = ConnectionPositionEnum.kOnThisPipe;

        public CPipeConnectionPointPairEx()
        {
        }

        public override void ReadFromXMLNode(XmlNode connectionPairNode)
        {
            try
            {
                base.ReadFromXMLNode(connectionPairNode);

                // Read the start connection point
                XmlNode startPositionEnum = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeStartConnPositionEnum);
                m_startPositionEnum = ParseConnectionPositionEnum(int.Parse(startPositionEnum.InnerText));

                // Read the end connection point
                XmlNode endPositionEnum = connectionPairNode.SelectSingleNode(ModelXMLDefinition.pipeEndConnPositionEnum);
                m_endPositionEnum = ParseConnectionPositionEnum(int.Parse(endPositionEnum.InnerText));
            }
            catch (Exception)
            {
            }
        }

        public ConnectionPositionEnum StartPositionEnum
        {
            get { return m_startPositionEnum; }
        }

        public ConnectionPositionEnum EndPositionEnum
        {
            get { return m_endPositionEnum; }
        }

        private ConnectionPositionEnum ParseConnectionPositionEnum(int iPositionEnum)
        {
            if (iPositionEnum == 0) return ConnectionPositionEnum.kStaticPosition;
            else if (iPositionEnum == 1) return ConnectionPositionEnum.kOnPreviousPipe;
            else if (iPositionEnum == 2) return ConnectionPositionEnum.kOnThisPipe;
            else throw new ArgumentException("Input a invalid value for ConnectionPositionEnum");
        }
    } 
}