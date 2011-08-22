////
// This file is used to define the concrete command
////
using System;
using PipeSimulation.Commands;
using System.Collections.Generic;
using PipeSimulation.PipeApp;
using System.Windows.Forms;
using PipeSimulation.Properties;
using System.IO;

namespace PipeSimulation
{
    namespace Commands
    {
        public class CCommand : ICommand
        {
            private ulong m_id;
            private string m_statusBarText;
            private ICommandManager m_comamndManager;
            protected bool m_bIsViewCommand;
            private CommandStatus m_commandStatus = CommandStatus.kNotActivated;
            private object m_eventSender;

            public CCommand(ICommandManager commandManager, ulong id)
            {
                m_comamndManager = commandManager;
                m_id = id;
                m_bIsViewCommand = false;

                m_comamndManager.RegisterCommand(this);
            }

            #region ICommand Members

            public ulong ID
            {
                get
                {
                    return m_id;
                }
            }

            public string StatusBarText
            {
                get
                {
                    return m_statusBarText;
                }
                set
                {
                    SetStatusBarText(value);
                }
            }

            public ICommandManager CommandManager
            {
                get
                {
                    return m_comamndManager;
                }
            }

            public virtual bool IsViewCommand
            {
                get
                {
                    return m_bIsViewCommand;
                }
            }

            public CommandStatus CommandStatus
            {
                get
                {
                    return m_commandStatus;
                }
            }

            public object Sender
            {
                set
                {
                    m_eventSender = value;
                }
            }

            public void Activate()
            {
                m_commandStatus = CommandStatus.kActivated;

                SetStatusBarText(m_statusBarText);
                UpdateSenderStatus(true);

                m_comamndManager.OnCommandActivated(this);

                OnActivate();
            }


            public void Terminate()
            {
                m_commandStatus = CommandStatus.kNotActivated;

                SetStatusBarText(string.Empty);
                SetCursor(null);
                UpdateSenderStatus(false);

                OnTerminate();

                m_comamndManager.OnCommandTerminated(this);
            }

            public void Suspend()
            {
                m_commandStatus = CommandStatus.kSuspend;
                UpdateSenderStatus(false);
                OnSuspend();
            }

            public void Resume()
            {
                m_commandStatus = CommandStatus.kActivated;
                UpdateSenderStatus(true);
                OnResume();
            }

            public void Execute()
            {
            }

            #endregion

             public void SetStatusBarText(string statusBarText)
            {
                m_statusBarText = statusBarText;

                // 
                IApp.theApp.SetStatusBarText(m_statusBarText);
            }

            public void SetCursor(byte[] stream)
            {
                if (stream == null)
                {
                    IApp.theApp.vtkControl.Cursor = null;
                }
                else
                {
                    using (MemoryStream memoryStream = new MemoryStream(stream))
                    {
                        IApp.theApp.vtkControl.Cursor = new Cursor(memoryStream);
                    }
                }
                
            } 
            
            protected virtual void OnActivate()
            {
            }

            protected virtual void OnTerminate()
            {
            }

            protected virtual void OnSuspend()
            {
            }

            protected virtual void OnResume()
            {
            }

            protected void UpdateSenderStatus(bool bActivated)
            {
                if (m_eventSender is ToolStripButton)
                {
                    ToolStripButton obj = m_eventSender as ToolStripButton;
                    obj.Checked = bActivated;
                }
            }
        }

        public class CCommandManager : ICommandManager
        {
            private IList<ICommand> m_listCommands = new List<ICommand>();
            private Stack<ICommand> m_stackActiveCommands = new Stack<ICommand>();

            private bool HasCommand(ICommand cmd)
            {
                int i = m_listCommands.IndexOf(cmd);
                if (i == -1) return false;

                return true;
            }

            private ICommand FindCommand(ulong id)
            {
                IEnumerator<ICommand> cmdEnum = m_listCommands.GetEnumerator();
                while (cmdEnum.MoveNext())
                {
                    ICommand cmd = cmdEnum.Current;
                    if (cmd.ID == id) return cmd;
                }

                return null;
            }

            #region ICommandManager Members

            public void RegisterCommand(ICommand cmd)
            {
                if (HasCommand(cmd)) return;

                m_listCommands.Add(cmd);
            }

            public void UnRegisterCommand(ICommand cmd)
            {
                if (!HasCommand(cmd)) return;

                m_listCommands.Remove(cmd);
            }

            public ICommand ActiveComamnd
            {
                get { return m_stackActiveCommands.Peek(); }
            }

            public void StopActiveCommand()
            {
                while (m_stackActiveCommands.Count != 0)
                {
                    ICommand cmd = m_stackActiveCommands.Peek();
                    cmd.Terminate();
                }
            }

            public void ExecuteCommand(ulong id, object sender)
            {
                ICommand cmd = FindCommand(id);
                if (cmd == null) return;

                cmd.Sender = sender;
                cmd.Activate();
            }

            public void OnCommandActivated(ICommand cmd)
            {
                // A none view command can live together with a view command.
                // So if the current command is a view command, we can push it in the stack
                // Else we should stop active command.

                if (cmd.IsViewCommand)
                {
                    // the cmd is a viewer command.
                    // if there are commands already exist,
                    if (m_stackActiveCommands.Count == 0)
                    {
                        m_stackActiveCommands.Push(cmd);
                    }
                    else
                    {
                        // Peek the top command.
                        ICommand activeCmd = m_stackActiveCommands.Peek();
                        if (activeCmd == cmd) return;

                        if (activeCmd.IsViewCommand)
                        {
                            activeCmd.Terminate();
                        }
                        else
                        {
                            activeCmd.Suspend();
                        }
                        
                        m_stackActiveCommands.Push(cmd);
                    }
                }
                else
                {
                    StopActiveCommand();
                    m_stackActiveCommands.Push(cmd);
                }
            }

            public void OnCommandTerminated(ICommand cmd)
            {
                while (m_stackActiveCommands.Peek() != cmd)
                {
                    ICommand tempCmd = m_stackActiveCommands.Peek();
                    tempCmd.Terminate();
                }

                m_stackActiveCommands.Pop();

                if (m_stackActiveCommands.Count != 0)
                {
                    // Resume the none view command
                    ICommand topCmd = m_stackActiveCommands.Peek();
                    if (topCmd != null && !topCmd.IsViewCommand && topCmd.CommandStatus == CommandStatus.kSuspend)
                    {
                        topCmd.Resume();
                    }
                }
            }

            #endregion
        }
    }
}
