////
// This file is used to define the interface for command
////
using System;

namespace PipeSimulation
{
    namespace Commands
    {
        public enum CommandStatus
        {
            kNotActivated,
            kActivated,
            kSuspend
        }

        /// <summary>
        /// ICommand interface to define a command running in the program.
        /// </summary>
        public interface ICommand
        {
            /// <summary>
            /// ID value
            /// </summary>
            ulong ID
            {
                get;
            }

            /// <summary>
            /// Status bar text
            /// </summary>
            string StatusBarText
            {
                get;
                set;
            }

            /// <summary>
            /// Comamnd manager
            /// </summary>
            ICommandManager CommandManager
            {
                get;
            }

            /// <summary>
            /// Is view command
            /// </summary>
            bool IsViewCommand
            {
                get;
            }

            CommandStatus CommandStatus
            {
                get;
            }

            object Sender
            {
                set;
            }

            /// <summary>
            /// Activate, Terminate, Suspend and Resume
            /// </summary>
            void Activate();
            void Terminate();
            void Suspend();
            void Resume();

            void Execute();
        }

        public interface ICommandManager
        {
            void RegisterCommand(ICommand cmd);
            void UnRegisterCommand(ICommand cmd);

            ICommand ActiveComamnd
            {
                get;
            }

            void StopActiveCommand();

            /// <summary>
            /// Execute a command
            /// </summary>
            /// <param name="id">command id</param>
            void ExecuteCommand(ulong id, object sender);

            void OnCommandActivated(ICommand cmd);
            void OnCommandTerminated(ICommand cmd);
        }
    }
}