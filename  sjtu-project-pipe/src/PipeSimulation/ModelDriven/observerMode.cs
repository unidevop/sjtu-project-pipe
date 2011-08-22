using System;

namespace PipeSimulation
{
    namespace ObserverMode
    {
        public enum ObserverMode
        {
            eMonitorMode,
            eReplayMode 
        }

        public interface IObserverMode
        {
            ObserverMode ObserverMode { get;}

            void OnActivate();
            void OnTerminate();
        }

        public interface IObserverModeManager
        {
            void EnterObserverMode(ObserverMode mode);
            ObserverMode ActiveModeType { get; }
            IObserverMode ActiveModeInstance { get; }
        }
    }
}