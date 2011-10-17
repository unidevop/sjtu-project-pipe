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
        private CPoint3D m_startConnectionPoint = new CPoint3D(); // This value is used to determine the connection point to the previous pipe models
        private CPoint3D m_endConnectionPoint = new CPoint3D(); // This value is used to determine the connection point to the next pipe model

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
}