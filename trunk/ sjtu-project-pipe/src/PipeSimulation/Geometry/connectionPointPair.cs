﻿using System;
using System.Xml;
using PipeSimulation.DataModel;

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
    }
}