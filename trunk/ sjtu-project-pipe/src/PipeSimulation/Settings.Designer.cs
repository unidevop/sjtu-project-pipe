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
            this.m_tabControl = new System.Windows.Forms.TabControl();
            this.m_connectTabPage = new System.Windows.Forms.TabPage();
            this.panel1 = new System.Windows.Forms.Panel();
            this.m_angleTabPage = new System.Windows.Forms.TabPage();
            this.m_backgroundTabPage = new System.Windows.Forms.TabPage();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label1 = new System.Windows.Forms.Label();
            this.m_ok = new System.Windows.Forms.Button();
            this.m_cancel = new System.Windows.Forms.Button();
            this.colorDialog2 = new System.Windows.Forms.ColorDialog();
            this.m_tabControl.SuspendLayout();
            this.m_connectTabPage.SuspendLayout();
            this.m_backgroundTabPage.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // m_tabControl
            // 
            this.m_tabControl.Controls.Add(this.m_connectTabPage);
            this.m_tabControl.Controls.Add(this.m_angleTabPage);
            this.m_tabControl.Controls.Add(this.m_backgroundTabPage);
            this.m_tabControl.Location = new System.Drawing.Point(-2, 0);
            this.m_tabControl.Multiline = true;
            this.m_tabControl.Name = "m_tabControl";
            this.m_tabControl.SelectedIndex = 0;
            this.m_tabControl.Size = new System.Drawing.Size(409, 320);
            this.m_tabControl.TabIndex = 0;
            this.m_tabControl.SelectedIndexChanged += new System.EventHandler(this.SelectIndexChanged);
            // 
            // m_connectTabPage
            // 
            this.m_connectTabPage.Controls.Add(this.panel1);
            this.m_connectTabPage.Location = new System.Drawing.Point(4, 22);
            this.m_connectTabPage.Name = "m_connectTabPage";
            this.m_connectTabPage.Padding = new System.Windows.Forms.Padding(3);
            this.m_connectTabPage.Size = new System.Drawing.Size(401, 294);
            this.m_connectTabPage.TabIndex = 0;
            this.m_connectTabPage.Text = "Connection Setting";
            this.m_connectTabPage.UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(401, 294);
            this.panel1.TabIndex = 0;
            // 
            // m_angleTabPage
            // 
            this.m_angleTabPage.Location = new System.Drawing.Point(4, 22);
            this.m_angleTabPage.Name = "m_angleTabPage";
            this.m_angleTabPage.Padding = new System.Windows.Forms.Padding(3);
            this.m_angleTabPage.Size = new System.Drawing.Size(401, 294);
            this.m_angleTabPage.TabIndex = 1;
            this.m_angleTabPage.Text = "Angle Warning";
            this.m_angleTabPage.UseVisualStyleBackColor = true;
            // 
            // m_backgroundTabPage
            // 
            this.m_backgroundTabPage.Controls.Add(this.groupBox1);
            this.m_backgroundTabPage.Location = new System.Drawing.Point(4, 22);
            this.m_backgroundTabPage.Name = "m_backgroundTabPage";
            this.m_backgroundTabPage.Size = new System.Drawing.Size(401, 294);
            this.m_backgroundTabPage.TabIndex = 2;
            this.m_backgroundTabPage.Text = "Background";
            this.m_backgroundTabPage.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(5, 10);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(387, 122);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Background";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(7, 34);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(107, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "Background color:";
            // 
            // m_ok
            // 
            this.m_ok.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.m_ok.Location = new System.Drawing.Point(83, 333);
            this.m_ok.Name = "m_ok";
            this.m_ok.Size = new System.Drawing.Size(75, 23);
            this.m_ok.TabIndex = 1;
            this.m_ok.Text = "OK";
            this.m_ok.UseVisualStyleBackColor = true;
            // 
            // m_cancel
            // 
            this.m_cancel.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.m_cancel.Location = new System.Drawing.Point(249, 332);
            this.m_cancel.Name = "m_cancel";
            this.m_cancel.Size = new System.Drawing.Size(75, 23);
            this.m_cancel.TabIndex = 2;
            this.m_cancel.Text = "Cancel";
            this.m_cancel.UseVisualStyleBackColor = true;
            // 
            // Settings
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(406, 367);
            this.Controls.Add(this.m_cancel);
            this.Controls.Add(this.m_ok);
            this.Controls.Add(this.m_tabControl);
            this.Name = "Settings";
            this.Text = "Settings";
            this.m_tabControl.ResumeLayout(false);
            this.m_connectTabPage.ResumeLayout(false);
            this.m_backgroundTabPage.ResumeLayout(false);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
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
        private System.Windows.Forms.ColorDialog colorDialog2;
    }
}