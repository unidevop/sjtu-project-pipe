using System;

namespace PipeSimulation
{
    namespace ObserverMode
    {
        public class CMonitorMode : IObserverMode
        {
            public CMonitorMode()
            {
            }

            #region IObserverMode Members

            public ObserverMode ObserverMode
            {
                get { return ObserverMode.eMonitorMode; }
            }

            public void OnActivate()
            {
                // Initialize the toolbar
                // Initialize the data query interface
            }

            public void OnTerminate()
            {
            }

            #endregion
        }

        public class CReplayMode : IObserverMode
        {
            private int m_lastPipeIdIndex;
            private CReplayAnimationEngine m_replayAnimationEngine = new CReplayAnimationEngine();

            public CReplayMode()
            {
            }

            #region IObserverMode Members

            public ObserverMode ObserverMode
            {
                get { return ObserverMode.eReplayMode; }
            }

            public void OnActivate()
            {
                // Force to stop anmiation
                m_replayAnimationEngine.StopAnimation();
            }

            public void OnTerminate()
            {
                // Force to stop anmiation
                m_replayAnimationEngine.StopAnimation();
            }

            #endregion

            public int LastPipeIdIndex
            {
                get { return m_lastPipeIdIndex; }
                set { m_lastPipeIdIndex = value; }
            }

            public CReplayAnimationEngine ReplayAnimationEngine
            {
                get { return m_replayAnimationEngine; }
            }
        }

        /// <summary>
        /// This class is used to simulation a animation by a Timer.
        /// </summary>
        public class CReplayAnimationEngine
        {
            private bool m_bIsRunning = false;
            private System.Timers.Timer m_timer = new System.Timers.Timer();
            private int m_iAnimationProgress = 0;
            private int m_iAnimationTotalProgress = 100;
            private DateTime m_startDateTime;
            private DateTime m_endDateTime;

            public CReplayAnimationEngine()
            {
                m_iAnimationProgress = 0;
                StopAnimation();
            }

            public void StartAnimation()
            {
                // If already running, return
                if (m_bIsRunning) return;
                m_bIsRunning = true;

                // Fire the event
                if (AnimationStartted != null)
                {
                    AnimationStartted();
                }

                // Start timer
                StartTimer();
            }

            public void StopAnimation()
            {
                // If not running, return
                if (!m_bIsRunning) return;
                m_bIsRunning = false;

                // Fire the event
                if (AnimationStopped != null)
                {
                    AnimationStopped();
                }

                // Stop the timer
                StopTimer();

                m_iAnimationProgress = 0;
            }

            public void DriveModel(int t)
            {
                if (AnimationRunning != null)
                {
                    AnimationRunning(t);
                }
            }

            public void GotoBegining()
            {
                m_iAnimationProgress = 0;
                DriveModel(m_iAnimationProgress);
            }

            public void GotoEnd()
            {
                m_iAnimationProgress = AnimationTotalProgress;
                DriveModel(m_iAnimationProgress);
            }

            public bool IsRunning
            {
                get { return m_bIsRunning; }
            }

            public int AnimationTotalProgress
            {
                get
                {
                    return m_iAnimationTotalProgress;
                }
                set
                {
                    // So far, we don't allow to change this value when animation is running
                    if (IsRunning) return;
                    if (value <= 0) return;

                    m_iAnimationTotalProgress = value;
                }
            }

            public int AnimationProgress
            {
                get
                {
                    return m_iAnimationProgress;
                }
                set
                {
                    if (value < 0 || value > AnimationTotalProgress) return;
                    m_iAnimationProgress = value;
                }
            }

            public delegate void AnimationRunningHandler(int t);
            public event AnimationRunningHandler AnimationRunning;

            public delegate void AnimationStoppedHandler();
            public event AnimationStoppedHandler AnimationStopped;

            public delegate void AnimationStarttedHandler();
            public event AnimationStarttedHandler AnimationStartted;

            private void StartTimer()
            {
                m_timer.Interval = 200; // Change the interval here
                m_timer.Elapsed += new System.Timers.ElapsedEventHandler(m_timer_Elapsed);
                m_timer.Enabled = true;
            }

            private void m_timer_Elapsed(object sender, System.Timers.ElapsedEventArgs e)
            {
                // Suspend the thread to give the UI thread a change to update.
                System.Threading.Thread.Sleep(0);

                m_iAnimationProgress += 1;
                if (m_iAnimationProgress > AnimationTotalProgress)
                {
                    bool bLoopPlay = false; // In future, get this value from the config file
                    if (!bLoopPlay)
                    {
                        DriveModel(AnimationTotalProgress);
                        StopAnimation();
                    }
                    else
                    {
                        m_iAnimationProgress = 0;
                        DriveModel(m_iAnimationProgress);
                    }
                }
                else
                {
                    DriveModel(m_iAnimationProgress);
                }
            }

            private void StopTimer()
            {
                m_timer.Elapsed -= m_timer_Elapsed;
            }

            public DateTime AnimationStartTime
            {
                get { return m_startDateTime; }
                set { m_startDateTime = value; }
            }

            public DateTime AnimationEndTime
            {
                get { return m_endDateTime; }
                set { m_endDateTime = value; }
            }
        }

        public class CObserverModeManager : IObserverModeManager
        {
            private CReplayMode m_replayMode = new CReplayMode();
            private CMonitorMode m_monitorMode = new CMonitorMode();
            private IObserverMode m_activeMode;

            public CObserverModeManager()
            {
                SetDefault();
            }

            private void SetDefault()
            {
                m_activeMode = m_monitorMode;
                EnterObserverMode(m_activeMode.ObserverMode);
            }

            #region IObserverModeManager Members

            public void EnterObserverMode(ObserverMode mode)
            {
                if (m_activeMode != null)
                {
                    if (mode != m_activeMode.ObserverMode)
                    {
                        // Terminate the original one
                        m_activeMode.OnTerminate();
                    }
                }

                // Activate the new one
                if (mode == ObserverMode.eMonitorMode)
                {
                    m_activeMode = m_monitorMode;
                }
                else
                {
                    m_activeMode = m_replayMode; ;
                }

                m_activeMode.OnActivate();

                // Fire the event
                if (ModeChanged != null)
                {
                    ModeChanged();
                }
            }

            public ObserverMode ActiveModeType
            {
                get { return ActiveModeInstance.ObserverMode; }
            }

            public IObserverMode ActiveModeInstance
            {
                get 
                {
                    return m_activeMode;
                }
            }

            #endregion

            public CReplayMode ReplayMode { get { return m_replayMode; } }
            public CMonitorMode MonitorMode { get { return m_monitorMode; } }

            // Define a delegate
            public delegate void ModeChangedHandler();
            public event ModeChangedHandler ModeChanged;
        }
    }

}