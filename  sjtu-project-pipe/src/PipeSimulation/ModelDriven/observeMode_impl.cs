using System;
using PipeSimulation.DataDriven;

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
        public class CReplayAnimationEngine : CTimeAnimationBase
        {
            private DateTime m_startDateTime;
            private DateTime m_endDateTime;

            public CReplayAnimationEngine()
            {
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