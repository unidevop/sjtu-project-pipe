using System;
using PipeSimulation.PipeApp;
using System.Windows.Forms;

namespace PipeSimulation
{
    namespace Utility
    {
        sealed public class CInfoPostorUtility
        {
            private static CInfoPostorUtility m_sInstance = new CInfoPostorUtility();
            private TextBoxBase m_textBox = null;

            private CInfoPostorUtility()
            {
            }

            public static CInfoPostorUtility Instance()
            {
                return m_sInstance;
            }

            public void PostString(string msg)
            {
                if (string.IsNullOrEmpty(msg)) return;

                if (m_textBox == null)
                {
                    m_textBox = IApp.theApp.MainUI.InformationControl as TextBoxBase;
                }

                msg.Trim("\r\n".ToCharArray());
                msg += "\r\n";

                try
                {
                    m_textBox.AppendText(msg);
                }
                catch (SystemException)
                {
                }
            }
        }
    }
}