namespace PipeSimulation
{
    partial class Settings
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Settings));
            this.m_tabControl = new System.Windows.Forms.TabControl();
            this.m_connectTabPage = new System.Windows.Forms.TabPage();
            this.panel1 = new System.Windows.Forms.Panel();
            this.m_angleTabPage = new System.Windows.Forms.TabPage();
            this.m_backgroundTabPage = new System.Windows.Forms.TabPage();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.m_backgroundColorBox = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.m_ok = new System.Windows.Forms.Button();
            this.m_cancel = new System.Windows.Forms.Button();
            this.m_tabControl.SuspendLayout();
            this.m_connectTabPage.SuspendLayout();
            this.m_backgroundTabPage.SuspendLayout();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_backgroundColorBox)).BeginInit();
            this.SuspendLayout();
            // 
            // m_tabControl
            // 
            this.m_tabControl.AccessibleDescription = null;
            this.m_tabControl.AccessibleName = null;
            resources.ApplyResources(this.m_tabControl, "m_tabControl");
            this.m_tabControl.BackgroundImage = null;
            this.m_tabControl.Controls.Add(this.m_connectTabPage);
            this.m_tabControl.Controls.Add(this.m_angleTabPage);
            this.m_tabControl.Controls.Add(this.m_backgroundTabPage);
            this.m_tabControl.Font = null;
            this.m_tabControl.Multiline = true;
            this.m_tabControl.Name = "m_tabControl";
            this.m_tabControl.SelectedIndex = 0;
            this.m_tabControl.SelectedIndexChanged += new System.EventHandler(this.SelectIndexChanged);
            // 
            // m_connectTabPage
            // 
            this.m_connectTabPage.AccessibleDescription = null;
            this.m_connectTabPage.AccessibleName = null;
            resources.ApplyResources(this.m_connectTabPage, "m_connectTabPage");
            this.m_connectTabPage.BackgroundImage = null;
            this.m_connectTabPage.Controls.Add(this.panel1);
            this.m_connectTabPage.Font = null;
            this.m_connectTabPage.Name = "m_connectTabPage";
            this.m_connectTabPage.UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this.panel1.AccessibleDescription = null;
            this.panel1.AccessibleName = null;
            resources.ApplyResources(this.panel1, "panel1");
            this.panel1.BackgroundImage = null;
            this.panel1.Font = null;
            this.panel1.Name = "panel1";
            // 
            // m_angleTabPage
            // 
            this.m_angleTabPage.AccessibleDescription = null;
            this.m_angleTabPage.AccessibleName = null;
            resources.ApplyResources(this.m_angleTabPage, "m_angleTabPage");
            this.m_angleTabPage.BackgroundImage = null;
            this.m_angleTabPage.Font = null;
            this.m_angleTabPage.Name = "m_angleTabPage";
            this.m_angleTabPage.UseVisualStyleBackColor = true;
            // 
            // m_backgroundTabPage
            // 
            this.m_backgroundTabPage.AccessibleDescription = null;
            this.m_backgroundTabPage.AccessibleName = null;
            resources.ApplyResources(this.m_backgroundTabPage, "m_backgroundTabPage");
            this.m_backgroundTabPage.BackColor = System.Drawing.Color.WhiteSmoke;
            this.m_backgroundTabPage.BackgroundImage = null;
            this.m_backgroundTabPage.Controls.Add(this.groupBox1);
            this.m_backgroundTabPage.Font = null;
            this.m_backgroundTabPage.Name = "m_backgroundTabPage";
            // 
            // groupBox1
            // 
            this.groupBox1.AccessibleDescription = null;
            this.groupBox1.AccessibleName = null;
            resources.ApplyResources(this.groupBox1, "groupBox1");
            this.groupBox1.BackgroundImage = null;
            this.groupBox1.Controls.Add(this.m_backgroundColorBox);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Font = null;
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.TabStop = false;
            // 
            // m_backgroundColorBox
            // 
            this.m_backgroundColorBox.AccessibleDescription = null;
            this.m_backgroundColorBox.AccessibleName = null;
            resources.ApplyResources(this.m_backgroundColorBox, "m_backgroundColorBox");
            this.m_backgroundColorBox.BackColor = System.Drawing.Color.RoyalBlue;
            this.m_backgroundColorBox.BackgroundImage = null;
            this.m_backgroundColorBox.Font = null;
            this.m_backgroundColorBox.ImageLocation = null;
            this.m_backgroundColorBox.Name = "m_backgroundColorBox";
            this.m_backgroundColorBox.TabStop = false;
            this.m_backgroundColorBox.Click += new System.EventHandler(this.BackgroundColor_Click);
            // 
            // label1
            // 
            this.label1.AccessibleDescription = null;
            this.label1.AccessibleName = null;
            resources.ApplyResources(this.label1, "label1");
            this.label1.Font = null;
            this.label1.Name = "label1";
            // 
            // m_ok
            // 
            this.m_ok.AccessibleDescription = null;
            this.m_ok.AccessibleName = null;
            resources.ApplyResources(this.m_ok, "m_ok");
            this.m_ok.BackgroundImage = null;
            this.m_ok.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.m_ok.Font = null;
            this.m_ok.Name = "m_ok";
            this.m_ok.UseVisualStyleBackColor = true;
            this.m_ok.Click += new System.EventHandler(this.Ok_Click);
            // 
            // m_cancel
            // 
            this.m_cancel.AccessibleDescription = null;
            this.m_cancel.AccessibleName = null;
            resources.ApplyResources(this.m_cancel, "m_cancel");
            this.m_cancel.BackgroundImage = null;
            this.m_cancel.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.m_cancel.Font = null;
            this.m_cancel.Name = "m_cancel";
            this.m_cancel.UseVisualStyleBackColor = true;
            this.m_cancel.Click += new System.EventHandler(this.Cancel_Click);
            // 
            // Settings
            // 
            this.AcceptButton = this.m_ok;
            this.AccessibleDescription = null;
            this.AccessibleName = null;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = null;
            this.CancelButton = this.m_cancel;
            this.Controls.Add(this.m_cancel);
            this.Controls.Add(this.m_ok);
            this.Controls.Add(this.m_tabControl);
            this.Font = null;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.Name = "Settings";
            this.m_tabControl.ResumeLayout(false);
            this.m_connectTabPage.ResumeLayout(false);
            this.m_backgroundTabPage.ResumeLayout(false);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_backgroundColorBox)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl m_tabControl;
        private System.Windows.Forms.TabPage m_connectTabPage;
        private System.Windows.Forms.TabPage m_angleTabPage;
        private System.Windows.Forms.TabPage m_backgroundTabPage;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button m_ok;
        private System.Windows.Forms.Button m_cancel;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox m_backgroundColorBox;
    }
}