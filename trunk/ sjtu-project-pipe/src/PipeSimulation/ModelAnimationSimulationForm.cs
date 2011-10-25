using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using PipeSimulation.DataModel;
using PipeSimulation.DataDriven;
using PipeSimulation.PipeApp;
using PipeSimulation.Properties;
using PipeSimulation.SceneGraph;

namespace PipeSimulation
{
    public abstract partial class ModelAnimationSimulationForm : Form
    {
        private int m_iPipeIndex = -1;
        public ModelAnimationSimulationForm()
        {
            InitializeComponent();
        }

        // Update Pipe Id
        public int PipeIndex
        {
            set 
            {
                try
                {
                    if (value < 0 || value > IApp.theApp.DataModel.PipeModels.Count)
                        throw new ArgumentOutOfRangeException(/*MSG0*/"Pipe index is invalid");
                    m_iPipeIndex = value;
                }
                catch
                {
                }
            }
        }

        protected virtual void InitializeData()
        {
            try
            {
                if (m_iPipeIndex == -1) throw new ApplicationException(/*MSG0*/"Don't set a valid PipeIndex");

                string strPipe = string.Format(Resources.IDS_PIPE_FILL_INDEX, m_iPipeIndex + 1);
                label1.Text = label1.Text + strPipe;

                // Check or uncheck the show/hide model
                CPipeModel pipeModel = IApp.theApp.DataModel.PipeModels[m_iPipeIndex];
                checkBoxShowhideModel.Checked = GetModelVisibility(pipeModel);

                // Connect to Fill Simulation Engine events
                CModelAnimationSimulationEngine modelSimEngine = GetModelAnimationSimulationEngine();
                modelSimEngine.AnimationStartted += new CTimeAnimationBase.AnimationStarttedHandler(modelSimEngine_AnimationStartted);
                modelSimEngine.AnimationResume += new CTimeAnimationBase.AnimationResumeHandler(modelSimEngine_AnimationResume);
                modelSimEngine.AnimationRunning += new CTimeAnimationBase.AnimationRunningHandler(modelSimEngine_AnimationRunning);
                modelSimEngine.AnimationStopped += new CTimeAnimationBase.AnimationStoppedHandler(modelSimEngine_AnimationStopped);
                modelSimEngine.AnimationPaused += new CTimeAnimationBase.AnimationPausedHandler(modelSimEngine_AnimationPaused);

                // Track bar
                int[] trackRange = { 0, modelSimEngine.AnimationTotalProgress };
                trackBar.SetRange(trackRange[0], trackRange[1]);

                modelSimEngine.SetModel(GetModel(pipeModel));
                modelSimEngine.StopAnimation();
                modelSimEngine.AnimationProgress = 0; // Clear the animation progress
            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
        }

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            GetModelAnimationSimulationEngine().StopAnimation();

            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        void modelSimEngine_AnimationPaused()
        {
            UpdateButtonStatus();
        }

        void buttonPauseAnimation_Click(object sender, System.EventArgs e)
        {
            GetModelAnimationSimulationEngine().PauseAnimation();
        }

        private void buttonStartAnimation_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().StartAnimation();
        }

        void modelSimEngine_AnimationStopped()
        {
            UpdateButtonStatus();
            trackBar.Value = 0;
        }

        private delegate void UpdateTrackProgress(int t);
        void modelSimEngine_AnimationRunning(int t)
        {
            // Update the track bar
            if (trackBar.InvokeRequired)
            {
                UpdateTrackProgress d = new UpdateTrackProgress(modelSimEngine_AnimationRunning);
                this.Invoke(d, new object[] { t });
            }
            else
            {
                // Pay attention to this call which often throw a exception
                // So I would like to catch the exception
                try
                {
                    trackBar.Value = t;

                    GetModelAnimationSimulationEngine().UpdateModelByProgress(t);
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }
        }

        void modelSimEngine_AnimationResume()
        {
            UpdateButtonStatus();
        }

        void modelSimEngine_AnimationStartted()
        {
            UpdateButtonStatus();
        }

        private void buttonStopAnimation_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().StopAnimation();
        }

        private void buttonToBegining_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().GotoBegining();
        }

        private void buttonToEnd_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().GotoEnd();
        }

        private void trackBar_Scroll(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().AnimationProgress = trackBar.Value;
            GetModelAnimationSimulationEngine().UpdateModelByProgress(trackBar.Value);
        }

        private void checkBoxShowhideFillModel_CheckedChanged(object sender, EventArgs e)
        {
        }

        private void buttonOk_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().StopAnimation();
            this.Close();
            try
            {
                // Revert all segments animation
                GetModelAnimationSimulationEngine().ShowAllSegmentsWithoutAnimation();

                // Check or uncheck the show/hide model
                CPipeModel pipeModel = IApp.theApp.DataModel.PipeModels[m_iPipeIndex];
                bool bFillModelVisible = checkBoxShowhideModel.Checked;

                SetModelVisibility(pipeModel, bFillModelVisible);

            }
            catch(Exception ex)
            {
                string errMsg = ex.Message + "\n" + ex.StackTrace;
                vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
            }
            
        }

        private void buttonCancel_Click(object sender, EventArgs e)
        {
            GetModelAnimationSimulationEngine().StopAnimation();
            this.Close();
        }

        private void UpdateButtonStatus()
        {
            CModelAnimationSimulationEngine modelSimEngine = GetModelAnimationSimulationEngine();

            buttonStartAnimation.Enabled = modelSimEngine.IsPaused || !modelSimEngine.IsRunning;
            buttonStopAnimation.Enabled = modelSimEngine.IsPaused || modelSimEngine.IsRunning;
            buttonPauseAnimation.Enabled = !modelSimEngine.IsPaused && modelSimEngine.IsRunning;
        }

        private void ModelAnimationSimulationForm_Load(object sender, EventArgs e)
        {
            InitializeData();
            UpdateButtonStatus();
        }

        private void ModelAnimationSimulationForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            // Connect to Fill Simulation Engine events
            CModelAnimationSimulationEngine modelSimEngine = GetModelAnimationSimulationEngine();
            modelSimEngine.AnimationStartted -= modelSimEngine_AnimationStartted;
            modelSimEngine.AnimationResume -= modelSimEngine_AnimationResume;
            modelSimEngine.AnimationRunning -= modelSimEngine_AnimationRunning;
            modelSimEngine.AnimationStopped -= modelSimEngine_AnimationStopped;
            modelSimEngine.AnimationPaused -= modelSimEngine_AnimationPaused;

            // Don't uncomment the following code because abnormal visibility state
            //GetModelAnimationSimulationEngine().StopAnimation();
        }

        // Need to be overrided by subclass
        protected abstract CModelAnimationSimulationEngine GetModelAnimationSimulationEngine();
        protected abstract ISceneNode GetModel(CPipeModel pipeModel);
        protected abstract bool GetModelVisibility(CPipeModel pipeModel);
        protected abstract void SetModelVisibility(CPipeModel pipeModel, bool bVisible);
    }

    public class FillAnimationSimulationForm : ModelAnimationSimulationForm
    {
        protected override CModelAnimationSimulationEngine GetModelAnimationSimulationEngine()
        {
            return IApp.theApp.FillSimulationEngine;
        }

        protected override void InitializeData()
        {
            base.InitializeData();
            this.Text = Resources.IDS_FILL_SIM_DLG_TITLE;
        }

        protected override ISceneNode GetModel(CPipeModel pipeModel)
        {
            return pipeModel.FillModel;
        }

        protected override bool GetModelVisibility(CPipeModel pipeModel)
        {
            CFillModel fillModel = pipeModel.FillModel;

            bool bFillModelVisible = false;
            foreach (CFillSegment segment in fillModel.Segments)
            {
                if (segment.ModelNode.Visibility)
                {
                    bFillModelVisible = true;
                    break;
                }
            }

            return bFillModelVisible;
        }

        protected override void SetModelVisibility(CPipeModel pipeModel, bool bVisible)
        {
            CFillModel fillModel = pipeModel.FillModel;
            foreach (CFillSegment segment in fillModel.Segments)
            {
                segment.ModelNode.Visibility = bVisible;
            }
            IApp.theApp.RenderScene();
        }
    }

    public class ZhujiangAnimationSimulationForm : ModelAnimationSimulationForm
    {
        protected override CModelAnimationSimulationEngine GetModelAnimationSimulationEngine()
        {
            return IApp.theApp.ZhujiangSimulationEngine;
        }

        protected override void InitializeData()
        {
            base.InitializeData();
            this.Text = Resources.IDS_ZHUJIANG_SIM_DLG_TITLE;
        }

        protected override ISceneNode GetModel(CPipeModel pipeModel)
        {
            return pipeModel.ZhujiangModel;
        }

        protected override bool GetModelVisibility(CPipeModel pipeModel)
        {
            CZhujiangModel zhujiangModel = pipeModel.ZhujiangModel;

            bool bFillModelVisible = zhujiangModel.ModelNode.Visibility;
            return bFillModelVisible;
        }

        protected override void SetModelVisibility(CPipeModel pipeModel, bool bVisible)
        {
            CZhujiangModel zhujiangModel = pipeModel.ZhujiangModel;
            zhujiangModel.ModelNode.Visibility = bVisible;
            IApp.theApp.RenderScene();
        }
    }
}
