using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;
using System.Windows.Media.Media3D;
using System.Reflection;

namespace PipeSimulation
{
    namespace DataModel
    {
        /// <summary>
        /// This class is used to represent a cable system.
        /// It will manage the cable states.
        /// </summary>
        public class CCableSystem : CSceneNode
        {
            private CCableState m_activeCableState = null;
            private ICableSwitchCondition m_cableSwitchCondition = null;
            private CPipeModel m_pPipeModel = null;

            public CCableSystem(CPipeModel pipeModel)
                : base(pipeModel)
            {
                m_pPipeModel = pipeModel;
            }

            public IList<CCableState> CableStates
            {
                get 
                {
                    List<CCableState> cableStates = new List<CCableState>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CCableState)
                        {
                            cableStates.Add((CCableState)subNode);
                        }
                    }

                    return cableStates;
                }
            }

            public CCableState ActiveCableState
            {
                get { return m_activeCableState; }
                set 
                {
                    if (m_activeCableState == value) return;

                    if (m_activeCableState != null)
                    {
                        m_activeCableState.OnTerminate();
                    }

                    m_activeCableState = value;

                    if (m_activeCableState != null)
                    {
                        m_activeCableState.OnActivate();
                    }
                }
            }

            public CPipeModel PipeModel
            {
                get { return m_pPipeModel; }
            }

            public virtual void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the pylons models
                    XmlNodeList cableStates = node.SelectNodes(ModelXMLDefinition.CableState);
                    foreach (XmlNode cableState in cableStates)
                    {
                        CCableState normalNode = new CCableState(this, new CCablingConnectionIndicator(new CLineTwoPointsIndicatorsImpl()));
                        normalNode.ReadFromXMLNode(cableState);
                    }

                    //// Set active cable state to the first one if it exists
                    //if (CableStates != null && CableStates.Count != 0)
                    //{
                    //    ActiveCableState = CableStates[0];
                    //}

                    // Read the cable switch condition
                    XmlNode cableConditionNode = node.SelectSingleNode(ModelXMLDefinition.CableSwitchCondition);
                    if (cableConditionNode != null)
                    {
                        m_cableSwitchCondition = CCableSwitchConditionFactory.ReadFromXMLNode(cableConditionNode, this);
                    }
                }
                catch (SystemException)
                {
                    throw;
                }
            }

            public virtual void OnPipePosChanged(vtk.vtkTransform transform)
            {
                try
                {
                    // Apply the switch condition
                    CCableSwitchLength2StatesCondition condition = m_cableSwitchCondition as CCableSwitchLength2StatesCondition;
                    if (condition != null)
                    {
                        condition.CurrentPipeTransformation = transform;

                        if (ConditionCallback != null)
                        {
                            ConditionCallback(condition.eLengthEqual, transform);
                        }

                        m_cableSwitchCondition.Apply();
                    }

                    // Update the active cable state
                    if (m_activeCableState != null)
                    {
                        m_activeCableState.UpdateCablePosition(transform);
                    }
                }
                catch
                {
                }
            }

            // Define a delegate
            public delegate void ConditionCallbackHandler(CCableSwitchLength2StatesCondition.LengthEqualEnum eLengthEqual, vtk.vtkTransform transform);
            public event ConditionCallbackHandler ConditionCallback;
        }

        /// <summary>
        /// This class is used to represent a cable state.
        /// It will manage the cable segments.
        /// </summary>
        public class CCableState : CSceneNode
        {
            private CCableSystem m_cableSystem = null;
            private CCablingConnectionIndicator m_twoPointsIndicator = null;

            public CCableState(CCableSystem cableSystem, CCablingConnectionIndicator twoPointsIndicator)
                : base(cableSystem)
            {
                m_cableSystem = cableSystem;

                m_twoPointsIndicator = twoPointsIndicator;
            }

            public IList<CCableSegment> CableSegments
            {
                get
                {
                    List<CCableSegment> cableSegments = new List<CCableSegment>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CCableSegment)
                        {
                            cableSegments.Add((CCableSegment)subNode);
                        }
                    }

                    return cableSegments;
                }
            }

            public void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the cable segment
                    XmlNodeList cableSegments = node.SelectNodes(ModelXMLDefinition.CableSegment);
                    foreach (XmlNode cableSegment in cableSegments)
                    {
                        CCableSegment normalNode = new CCableSegment(this);
                        normalNode.ReadFromXMLNode(cableSegment);
                    }
                }
                catch (SystemException)
                {
                    throw;
                }
            }

            public virtual void OnActivate()
            {
                vtk.vtkActor actor = m_twoPointsIndicator.Impl.Actor;
                IApp.theApp.RendererManager.MainRenderer.AddActor(actor);
                IApp.theApp.RendererManager.TopViewRenderer.AddActor(actor);
                IApp.theApp.RendererManager.RightViewRenderer.AddActor(actor);
                IApp.theApp.RendererManager.FrontViewRenderer.AddActor(actor);
            }

            public virtual void OnTerminate()
            {
                vtk.vtkActor actor = m_twoPointsIndicator.Impl.Actor; 
                IApp.theApp.RendererManager.MainRenderer.RemoveActor(actor);
                IApp.theApp.RendererManager.TopViewRenderer.RemoveActor(actor);
                IApp.theApp.RendererManager.RightViewRenderer.RemoveActor(actor);
                IApp.theApp.RendererManager.FrontViewRenderer.RemoveActor(actor);
            }

            public virtual void UpdateCablePosition(vtk.vtkTransform transform)
            {
                if (m_twoPointsIndicator == null) return;

                bool bShowCabling = ApplicationOptions.Instance().ViewOptions.ShowCablingSystem;
                m_twoPointsIndicator.Impl.Actor.SetVisibility(bShowCabling ? 1 : 0);

                // Drive the cable graphics
                IList<CTwoPoints> pointsList = m_twoPointsIndicator.PointsList;
                
                // Clear the points
                pointsList.Clear();

                foreach (CCableSegment segment in CableSegments)
                {
                    CPoint3D ptStartPoint = segment.StartPoint;
                    if (segment.DriveStartPointAtRuntime)
                    {
                        ptStartPoint = new CPoint3D(transform.TransformDoublePoint(ptStartPoint.Point));
                    }

                    CPoint3D ptEndPoint = segment.EndPoint;
                    if (segment.DriveEndPointAtRuntime)
                    {
                        ptEndPoint = new CPoint3D(transform.TransformDoublePoint(ptEndPoint.Point));
                    }

                    pointsList.Add(new CTwoPoints(ptStartPoint, ptEndPoint));
                }

                // Update
                m_twoPointsIndicator.Impl.UpatePoints();
            }
        }

        /// <summary>
        /// This class is used to represent a cable segment model.
        /// It has a start point and end point which may be need to drive at run time.
        /// </summary>
        public class CCableSegment : CSceneNode
        {
            private CPoint3D m_ptStartPoint = new CPoint3D();
            private bool m_bStartPointDrivenAtRuntime = true;

            private CPoint3D m_ptEndPoint = new CPoint3D();
            private bool m_bEndPointDrivenAtRuntime = false;

            public CCableSegment(ISceneNode node)
                : base(node)
            {
            }

            public CPoint3D StartPoint
            {
                get { return new CPoint3D(m_ptStartPoint.Point); }
            }

            public bool DriveStartPointAtRuntime
            {
                get { return m_bStartPointDrivenAtRuntime; }
            }

            public CPoint3D EndPoint
            {
                get { return new CPoint3D(m_ptEndPoint.Point); }
            }

            public bool DriveEndPointAtRuntime
            {
                get { return m_bEndPointDrivenAtRuntime; }
            }

            public void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the start pos
                    XmlNode startNode = node.SelectSingleNode(ModelXMLDefinition.CableSegmentStartPosition);
                    m_ptStartPoint = new CPoint3D(CPoint3DSerializer.ReadPoint(startNode).Point);

                    // Read the end pos
                    XmlNode endNode = node.SelectSingleNode(ModelXMLDefinition.CableSegmentEndPosition);
                    m_ptEndPoint = new CPoint3D(CPoint3DSerializer.ReadPoint(endNode).Point);
                }
                catch (SystemException)
                {
                    throw;
                }
            }
        }

        /// <summary>
        /// This class is used to represent a condition to swtich the cable state
        /// </summary>
        public interface ICableSwitchCondition
        {
            void Apply();
        }

        /// <summary>
        /// This class is used to create a specific cable switch factory
        /// </summary>
        public sealed class CCableSwitchConditionFactory
        {
            static public ICableSwitchCondition ReadFromXMLNode(XmlNode node, CCableSystem cableSystem)
            {
                // Create a condition by length and two states
                CCableSwitchLength2StatesCondition t = new CCableSwitchLength2StatesCondition(cableSystem);
                t.ReadFromXMLNode(node);
                return t;
            }
        }

        /// <summary>
        /// This class is a specific switch condition by length
        /// </summary>
        public class CCableSwitchLength2StatesCondition : ICableSwitchCondition
        {
            private CCableSystem m_cableSystem = null;
            private int m_iObserveingCableSegment = 0;
            private double m_dCableLength = 100; // Meter
            private vtk.vtkTransform m_currentPipeTransform = null;
            private LengthEqualEnum m_eLengthEqual = LengthEqualEnum.eSmaller;

            public enum LengthEqualEnum
            {
                eSmaller,
                eEqual,
                eGreater
            }

            public CCableSwitchLength2StatesCondition(CCableSystem cableSystem)
            {
                m_cableSystem = cableSystem;
            }

            public LengthEqualEnum eLengthEqual
            {
                get { return m_eLengthEqual; }
            }

            public void ReadFromXMLNode(XmlNode node)
            {
                try
                {
                    // Read the start pos
                    XmlNode segmentIndexNode = node.SelectSingleNode(ModelXMLDefinition.CableSegmentIndex);
                    m_iObserveingCableSegment = int.Parse(segmentIndexNode.InnerText);

                    // Read the end pos
                    XmlNode cableLengthNode = node.SelectSingleNode(ModelXMLDefinition.CableLength);
                    m_dCableLength = double.Parse(cableLengthNode.InnerText);

                    if (m_dCableLength < 0) m_dCableLength = 100;
                }
                catch (SystemException)
                {
                    throw;
                }
            }

            private void SetLengthEqual()
            {
                // Hard code now
                if (m_cableSystem.CableStates.Count != 2 && null == m_currentPipeTransform) return;

                // We always observer a segment's length
                // If its length is greater than the m_dCableLength, then we return true
                CCableSegment segment = m_cableSystem.CableStates[0].CableSegments[m_iObserveingCableSegment];

                CPoint3D ptStartPoint = segment.StartPoint;
                if (segment.DriveStartPointAtRuntime)
                {
                    ptStartPoint = new CPoint3D(m_currentPipeTransform.TransformDoublePoint(ptStartPoint.Point));
                }

                CPoint3D ptEndPoint = segment.EndPoint;
                if (segment.DriveEndPointAtRuntime)
                {
                    ptEndPoint = new CPoint3D(m_currentPipeTransform.TransformDoublePoint(ptEndPoint.Point));
                }

                // Get the distance
                double dDeltaX = ptEndPoint.X - ptStartPoint.X;
                double dDeltaY = ptEndPoint.Y - ptStartPoint.Y;
                double dDeltaZ = ptEndPoint.Z - ptStartPoint.Z;

                double dDistance = IApp.theApp.DataModel.ModelingUnitToMeter * Math.Sqrt(dDeltaX * dDeltaX + dDeltaY * dDeltaY + dDeltaZ * dDeltaZ);

                if (Math.Abs(dDistance - m_dCableLength) <= 1e-6)
                {
                    m_eLengthEqual = LengthEqualEnum.eEqual;
                }
                else if (dDistance > m_dCableLength)
                {
                    m_eLengthEqual = LengthEqualEnum.eGreater;
                }
                else 
                {
                    m_eLengthEqual = LengthEqualEnum.eSmaller;
                }
            }
            #region ICableSwitchCondition member

            public void Apply()
            {
                try
                {
                    SetLengthEqual();

                    // Switch to next state
                    m_cableSystem.ActiveCableState = (m_eLengthEqual == LengthEqualEnum.eSmaller ? m_cableSystem.CableStates[0] : m_cableSystem.CableStates[1]);
                }
                catch
                {
                }
            }

            #endregion

            public vtk.vtkTransform CurrentPipeTransformation
            {
                set { m_currentPipeTransform = value; }
            }
        }
    }
}