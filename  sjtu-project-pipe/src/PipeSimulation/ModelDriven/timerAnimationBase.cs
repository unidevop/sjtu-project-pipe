using System;

namespace PipeSimulation.DataDriven
{
    /// <summary>
    /// This class severs as a base class for any timer animation
    /// </summary>
    public class CTimeAnimationBase
    {
        private bool m_bIsRunning = false;
        private bool m_bIsPaused = false;
        private System.Timers.Timer m_timer = new System.Timers.Timer();
        private int m_iAnimationProgress = 0;
        private int m_iAnimationTotalProgress = 100;

        public CTimeAnimationBase()
        {
            m_iAnimationProgress = 0;
            StopAnimation();
        }

        public virtual void StartAnimation()
        {
            if (m_bIsPaused)
            {
                m_bIsPaused = false;
                m_bIsRunning = true;

                // Fire the event
                if (AnimationResume != null)
                {
                    AnimationResume();
                }
            }
            else
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
        }

        public virtual void PauseAnimation()
        {
            if (m_bIsPaused == true) return;

            m_bIsRunning = false;
            m_bIsPaused = true;

            // Fire the event
            if (AnimationPaused != null)
            {
                AnimationPaused();
            }
        }

        public virtual void StopAnimation()
        {
            m_bIsRunning = false;
            m_bIsPaused = false;

            // Fire the event
            if (AnimationStopped != null)
            {
                AnimationStopped();
            }
            
            // Stop the timer
            StopTimer();

            //m_iAnimationProgress = 0;
        }

        public virtual void OnAnimationRunning(int t)
        {
            if (AnimationRunning != null)
            {
                AnimationRunning(t);
            }
        }

        public virtual void GotoBegining()
        {
            m_iAnimationProgress = 0;
            OnAnimationRunning(m_iAnimationProgress);
        }

        public virtual void GotoEnd()
        {
            m_iAnimationProgress = AnimationTotalProgress;
            OnAnimationRunning(m_iAnimationProgress);
        }

        public bool IsRunning
        {
            get { return m_bIsRunning; }
        }

        public bool IsPaused
        {
            get { return m_bIsPaused; }
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

        public delegate void AnimationPausedHandler();
        public event AnimationPausedHandler AnimationPaused;

        public delegate void AnimationResumeHandler();
        public event AnimationResumeHandler AnimationResume;

        public delegate void AnimationStoppedHandler();
        public event AnimationStoppedHandler AnimationStopped;

        public delegate void AnimationStarttedHandler();
        public event AnimationStarttedHandler AnimationStartted;

        private void StartTimer()
        {
            m_timer.Interval = GetTimerInterval(); // Change the interval here
            m_timer.Elapsed += new System.Timers.ElapsedEventHandler(m_timer_Elapsed);
            m_timer.Enabled = true;
        }

        private void m_timer_Elapsed(object sender, System.Timers.ElapsedEventArgs e)
        {
            // Suspend the thread to give the UI thread a change to update.
            System.Threading.Thread.Sleep(0);

            // If the animation is paused, directly return
            if (m_bIsPaused) return;

            m_iAnimationProgress += 1;
            if (m_iAnimationProgress > AnimationTotalProgress)
            {
                bool bLoopPlay = true; // In future, get this value from the config file
                if (!bLoopPlay)
                {
                    m_iAnimationProgress = AnimationTotalProgress;
                    OnAnimationRunning(m_iAnimationProgress);
                    StopAnimation();
                }
                else
                {
                    m_iAnimationProgress = 0;
                    OnAnimationRunning(m_iAnimationProgress);
                }
            }
            else
            {
                OnAnimationRunning(m_iAnimationProgress);
            }
        }

        private void StopTimer()
        {
            m_timer.Elapsed -= m_timer_Elapsed;
        }

        protected virtual double GetTimerInterval()
        {
            return 200; // 200 ms
        }
    }
}