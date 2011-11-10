using System;
using System.Xml;
using PipeSimulation.SceneGraph;
using PipeSimulation.Utility;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using PipeSimulation.DataQuery;
using PipeSimulation.Geometry;
using System.Windows.Media.Media3D;

namespace PipeSimulation
{
    namespace DataModel
    {
        /// <summary>
        /// A status enum to represent the status of pipe model
        /// </summary>
        public enum PipeStatus
        {
            eNotStartedYet,     // The pipe has not been started yet
            eWorkingInProgess,  // The pipe is working in progress
            eDone,              // The pipe is already been done
            eFill               // Thi pipe should be filled
        }

        /// <summary>
        /// Define a class to represent the pipe
        /// Which is a model and also work with some others models together
        /// Also, there are some parameters to reposition other models.
        /// </summary>
        public class CPipeModel : CSceneNodeFromDisk
        {
            private double m_dLength;
            private double m_dWidth;
            private double m_dHeight;
            private PipeStatus m_ePipeStatus;
            private vtk.vtkTransform m_transFormFinal = null;
            private PipeInfo m_finalPipeInfo = null;
            private IList<CPipeConnectionPointPair> m_connectionPointPairList = new List<CPipeConnectionPointPair>();
            private CUCS m_gpsUCS = new CUCS();
            private InclinometerInfo m_rollInclinometer;

            public CPipeModel() : base(null)
            {
                Status = PipeStatus.eNotStartedYet;
                m_rollInclinometer = new InclinometerInfo(this);
            }

            // Parameters
            // Such as wdith, length, height, D1, T1, D2, T2 etc.

            public virtual void ReadFromXMLNode(XmlNode pipeNode)
            {
                try
                {
                    // Deal with sub models
                    foreach (XmlAttribute attri in pipeNode.Attributes)
                    {
                        if (string.Compare(attri.Name, ModelXMLDefinition.pipeLength, true) == 0)
                        {
                            Length = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.pipeWidth, true) == 0)
                        {
                            Width = double.Parse(attri.InnerText);
                        }
                        else if (string.Compare(attri.Name, ModelXMLDefinition.pipeHeight, true) == 0)
                        {
                            Height = double.Parse(attri.InnerText);
                        }
                    }

                    // Deal with model path, must be only one
                    LoadModelPathNode(pipeNode);

                    // Read the pylons models
                   XmlNodeList pylonNodes = pipeNode.SelectNodes(ModelXMLDefinition.Pylon);
                   foreach (XmlNode pylonNode in pylonNodes)
                   {
                       CPylonModel normalNode = new CPylonModel(this);
                       normalNode.ReadFromXMLNode(pylonNode);
                   }

                   // Read the fill models
                   XmlNode fillNode = pipeNode.SelectSingleNode(ModelXMLDefinition.FillModel);
                   if (fillNode != null)
                   {
                       CFillModel normalNode = new CFillModel(this);
                       normalNode.ReadFromXMLNode(fillNode);
                   }

                   // Read the zhujiang models
                   XmlNode zhujiangNode = pipeNode.SelectSingleNode(ModelXMLDefinition.ZhujiangModel);
                   if (zhujiangNode != null)
                   {
                       CZhujiangModel normalNode = new CZhujiangModel(this);
                       normalNode.ReadFromXMLNode(zhujiangNode);
                   }

                   // Read the cable system
                   XmlNode cableSystemNode = pipeNode.SelectSingleNode(ModelXMLDefinition.CableSystem);
                   if (cableSystemNode != null)
                   {
                       CCableSystem normalNode = new CCableSystem(this);
                       normalNode.ReadFromXMLNode(cableSystemNode);

                       normalNode.ConditionCallback += new CCableSystem.ConditionCallbackHandler(cableSystem_ConditionCallback);
                   }

                   // Read the fubo models
                   XmlNodeList fuboNodes = pipeNode.SelectNodes(ModelXMLDefinition.FuboModel);
                   foreach (XmlNode fuboNode in fuboNodes)
                   {
                       CFuboModel normalNode = new CFuboModel(this);
                       normalNode.ReadFromXMLNode(fuboNode);
                   }

                   // Read the static model in ganwu
                   XmlNode staticPipeModelNode = pipeNode.SelectSingleNode(ModelXMLDefinition.PipeStaticModel);
                   if (staticPipeModelNode != null)
                   {
                       CPipeStaticModel staticPipeModel = new CPipeStaticModel(this);
                       staticPipeModel.ReadFromXMLNode(staticPipeModelNode);
                   }

                   // Read Connection Pair
                   XmlNodeList connectionPairNodes = pipeNode.SelectNodes(ModelXMLDefinition.pipeConnectionPointPair);
                   foreach (XmlNode connectionPairNode in connectionPairNodes)
                   {
                       CPipeConnectionPointPair connectionPair = new CPipeConnectionPointPair();
                       connectionPair.ReadFromXMLNode(connectionPairNode);
                       m_connectionPointPairList.Add(connectionPair);
                   }

                    // Read the GPS UCS
                   XmlNode gpsUCSNode = pipeNode.SelectSingleNode(ModelXMLDefinition.pipeGPSUCS);
                   if (gpsUCSNode != null)
                   {
                       m_gpsUCS.ReadFromXMLNode(gpsUCSNode);
                   }

                   // Read Inclinometer Info
                   XmlNode inclinometerNode = pipeNode.SelectSingleNode(ModelXMLDefinition.pipeInclinometer);
                   if (inclinometerNode != null)
                   {
                       bool hasRollInclinometer = false;
                       foreach (XmlAttribute attri in inclinometerNode.Attributes)
                       {
                           if (string.Compare(attri.Name, ModelXMLDefinition.pipeInclinometerType, true) == 0 &&
                               string.Compare(attri.Value, ModelXMLDefinition.pipeInclinometerRoll, true) == 0)
                           {
                               hasRollInclinometer = true;
                               break;
                           }
                       }

                       if (hasRollInclinometer)
                           m_rollInclinometer.ReadFromXMLNode(inclinometerNode);
                   }
                    
                }
                catch (SystemException ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                    throw;
                }
            }

            // This function acts a callback when cable system switch condition is used to 
            // determine if the fubo models are arriving their desire positions.
            private void cableSystem_ConditionCallback(CCableSwitchLength2StatesCondition.LengthEqualEnum eLengthEqual,vtk.vtkTransform transform)
            {
                bool bConditionStatisfied = (eLengthEqual == CCableSwitchLength2StatesCondition.LengthEqualEnum.eEqual
                                          || eLengthEqual == CCableSwitchLength2StatesCondition.LengthEqualEnum.eGreater);

                IList<CFuboModel> fuboModels = FuboModels;
                foreach (CFuboModel fuboModel in fuboModels)
                {
                    fuboModel.PositionArrived = bConditionStatisfied;
                    if (bConditionStatisfied)
                    {
                        if (fuboModel.FinalTransform == null)
                        {
                            fuboModel.FinalTransform = transform;
                        }

                        // A little tricky here
                        // We cannot get a accurate transform when the condition is complete equal.
                        // So we need to adjust if we find one
                        if (eLengthEqual == CCableSwitchLength2StatesCondition.LengthEqualEnum.eEqual)
                        {
                            fuboModel.FinalTransform = transform;
                        }
                        _DrivdeModel(fuboModel.ModelNode, fuboModel.FinalTransform);
                    }
                    else
                    {
                        _DrivdeModel(fuboModel.ModelNode, transform);
                    }
                }
            }

            // Getter
            public double Length { get { return m_dLength; } internal set { m_dLength = value; } }
            public double Width { get { return m_dWidth; } internal set { m_dWidth = value; } }
            public double Height { get { return m_dHeight; } internal set { m_dHeight = value; } }
            public IList<CPipeConnectionPointPair> ConnectionPointPairList { get { return m_connectionPointPairList; } }
            public CUCS GPSUCS { get { return m_gpsUCS; } }

            // Pylon Model
            public IList<CPylonModel> PylonModels
            {
                get
                {
                    List<CPylonModel> pylonModels = new List<CPylonModel>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CPylonModel)
                        {
                            pylonModels.Add((CPylonModel)subNode);
                        }
                    }

                    return pylonModels;
                }
            }

            // Fubo Model
            public IList<CFuboModel> FuboModels
            {
                get
                {
                    List<CFuboModel> fuboModels = new List<CFuboModel>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CFuboModel)
                        {
                            fuboModels.Add((CFuboModel)subNode);
                        }
                    }

                    return fuboModels;
                }
            }

            // Pipe Static Model
            public CPipeStaticModel PipeStaticModel
            {
                get
                {
                    List<CPipeStaticModel> pipeStaticModels = new List<CPipeStaticModel>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CPipeStaticModel)
                        {
                            pipeStaticModels.Add((CPipeStaticModel)subNode);
                        }
                    }

                    if (pipeStaticModels.Count == 0) return null;
                    return pipeStaticModels[0];
                }
            }
            //[System.Runtime.CompilerServices.IndexerName(/*MSG0*/"FillModel")]
            //public CFillModel this[int index]
            //{
            //    get
            //    {
            //        if (index >= Children.Count || index < 0) return null;
            //        return Children[index] as CFillModel;
            //    }
            //}

            // Fill Model
            public CFillModel FillModel
            {
                get
                {
                    List<CFillModel> fillModels = new List<CFillModel>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CFillModel)
                        {
                            fillModels.Add((CFillModel)subNode);
                        }
                    }

                    if (fillModels.Count == 0) return null;
                    return fillModels[0];
                }
            }

            // Zhujiang Model
            public CZhujiangModel ZhujiangModel
            {
                get
                {
                    List<CZhujiangModel> zhujiangModels = new List<CZhujiangModel>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CZhujiangModel)
                        {
                            zhujiangModels.Add((CZhujiangModel)subNode);
                        }
                    }

                    if (zhujiangModels.Count == 0) return null;
                    return zhujiangModels[0];
                }
            }

            // Cable Model
            public CCableSystem CableSystem
            {
                get
                {
                    List<CCableSystem> cableSystems = new List<CCableSystem>();

                    foreach (ISceneNode subNode in Children)
                    {
                        if (subNode is CCableSystem)
                        {
                            cableSystems.Add((CCableSystem)subNode);
                        }
                    }

                    if (cableSystems.Count == 0) return null;
                    return cableSystems[0];
                }
            }

            // Pipe Status
            public PipeStatus Status
            {
                get { return m_ePipeStatus; }
                set
                {
                    if (m_ePipeStatus == value) return;
                    m_ePipeStatus = value;

                    // Deal with the Plyon Models for different models
                    bool bNotStartedYet = (m_ePipeStatus == PipeStatus.eNotStartedYet);
                    Visible = !bNotStartedYet;
                    //if (m_ePipeStatus == PipeStatus.eNotStartedYet)
                    //{
                    //    Visible = false;
                    //  }
                    //else if (m_ePipeStatus == PipeStatus.eWorkingInProgess)
                    //{
                    //    Visible = true;

                    //}
                    //else if (m_ePipeStatus == PipeStatus.eDone)
                    //{
                    //    Visible = true;
                    //}
                    //else if (m_ePipeStatus == PipeStatus.eFill)
                    //{
                    //    Visible = true;
                    //}

                    // show/hide the plyon models
                    bool bWorkingInProgress = (m_ePipeStatus == PipeStatus.eWorkingInProgess);
                    foreach (ISceneNode node in Children)
                    {
                        if (node is CPylonModel)
                        {
                            node.Visible = bWorkingInProgress;
                        }
                    }

                    // show/hide the fubo models
                    foreach (ISceneNode node in Children)
                    {
                        CFuboModel fuboModel = node as CFuboModel;
                        if (fuboModel != null)
                        {
                            fuboModel.Visible = bWorkingInProgress;
                        }
                    }
                    // show/hide the fill models
                    //bool bFill = (m_ePipeStatus == PipeStatus.eFill);
                    //foreach (ISceneNode node in Children)
                    //{
                    //    if (node is CFillModel)
                    //    {
                    //        node.Visible = bFill;
                    //    }
                    //}

                    // show/hide the pipe static model
                    foreach (ISceneNode node in Children)
                    {
                        if (node is CPipeStaticModel)
                        {
                            node.Visible = bNotStartedYet;
                        }
                    }

                    // show/hide the cable system
                    CCableSystem cableSystem = CableSystem;
                    if (cableSystem != null)
                    {
                        if (!bWorkingInProgress)
                        {
                            cableSystem.ActiveCableState = null;
                        }
                    }
                }
            }

            // Drive Model
            public void DriveModel(vtk.vtkTransform transform)
            {
                // Assert valid
                if (transform == null) return;

                // We don't allow to drive the model when the status is not started.
                if (Status == PipeStatus.eNotStartedYet) return;

                // Only drive the model when the pipe is working progress
                _DrivdeModel(ModelNode, transform);
                foreach (ISceneNode node in Children)
                {
                    if (node is CPylonModel)
                    {
                        _DrivdeModel(node.ModelNode, transform);
                    }
                }

                // Drive the cabling system
                if (CableSystem != null && Status == PipeStatus.eWorkingInProgess)
                {
                    CableSystem.OnPipePosChanged(transform);
                }
            }

            private void _DrivdeModel(CModelNode modelNode, vtk.vtkTransform transform)
            {
                if (modelNode == null || transform == null) return;
                modelNode.PokeMatrix(transform);
            }

            // Cached final transform
            public vtk.vtkTransform FinalTransform
            {
                get { return m_transFormFinal; }
            }

            // Cached final pipe info
            public PipeInfo FinalPipeInfo
            {
                get { return m_finalPipeInfo; }
                set
                {
                    m_finalPipeInfo = value;

                    if (m_finalPipeInfo != null)
                    {
                        m_transFormFinal = GetPipeTransformByPipeInfo(m_finalPipeInfo);
                    }
                }
            }

            // This method is used to get the Pipe transform by PipeInfo
            public vtk.vtkTransform GetPipeTransformByPipeInfo(PipeInfo currentPipeInfo)
            {
                vtk.vtkTransform transform = new vtk.vtkTransform();
                try
                {
                    Matrix3D gpsMatrixInModeling = Matrix3D.Multiply(IApp.theApp.DataModel.ModelingUCStoGPSUCS.UCSTransformMatrix3dInvert,
                        currentPipeInfo.GetMatrix(RollInclinometer.AngleBetweenInclineAndX, RollInclinometer.FlipAngle));
                    transform = Utility.CPipeTransformUtility.TransformGPSMatrix(GPSUCS.UCSTransform, gpsMatrixInModeling.ToVTKTransformation());
                }
                catch (System.Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }

                return transform;
            }

            public InclinometerInfo RollInclinometer
            {
                get
                {
                    return m_rollInclinometer;
                }
            }
        }

        /// <summary>
        /// This class is a pipe static model.
        /// </summary>
        public class CPipeStaticModel : CStaticModel
        {
            public CPipeStaticModel(ISceneNode parentNode)
                : base(parentNode)
            {
            }
        }

        public struct InclinometerInfo
        {
            CPipeModel m_pipeModel;
            private Vector3D m_dir;
            private bool m_flipAngle;
            private double m_angleBetweenInclineAndX;

            public Vector3D Dir
            {
                get
                {
                    return m_dir;
                }
            }

            public bool FlipAngle
            {
                get
                {
                    return m_flipAngle;
                }
            }

            public double AngleBetweenInclineAndX
            {
                get
                {
                    return m_angleBetweenInclineAndX;
                }
            }

            internal InclinometerInfo(CPipeModel pipeModel)
            {
                m_pipeModel = pipeModel;
                m_dir = new Vector3D(0, 1, 0);
                m_flipAngle = false;
                m_angleBetweenInclineAndX = 90.0;
            }

            internal void ReadFromXMLNode(XmlNode node)
            {
                // Read the dir node
                XmlNode dirNode = node.SelectSingleNode(ModelXMLDefinition.pipeInclinometerDir);
                CPoint3D dir = CPoint3DSerializer.ReadPoint(dirNode);

                m_dir = new Vector3D(dir.X, dir.Y, dir.Z);
                m_dir.Normalize();

                // Read the FlipAngle node
                XmlNode flipAngleNode = node.SelectSingleNode(ModelXMLDefinition.pipeInclinometerFlipAngle);
                m_flipAngle = Boolean.Parse(flipAngleNode.InnerText);

                //  compute angleBetweenInclineAndX
                Vector3D xDir = new Vector3D(1, 0, 0) * m_pipeModel.GPSUCS.UCSTransformMatrix3d;

                m_angleBetweenInclineAndX = Vector3D.AngleBetween(xDir, m_dir);
            }
        }
    }
}