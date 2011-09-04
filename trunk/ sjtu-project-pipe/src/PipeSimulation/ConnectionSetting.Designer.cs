namespace PipeSimulation
{
    partial class ConnectionSetting
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ConnectionSetting));
            this.m_hasDataSource = new System.Windows.Forms.CheckBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.m_dbServer = new System.Windows.Forms.TextBox();
            this.m_dbServerLabel = new System.Windows.Forms.Label();
            this.m_userNameLabel = new System.Windows.Forms.Label();
            this.m_userName = new System.Windows.Forms.TextBox();
            this.m_pwdLabel = new System.Windows.Forms.Label();
            this.m_password = new System.Windows.Forms.MaskedTextBox();
            this.m_saveBtn = new System.Windows.Forms.Button();
            this.m_cancelBtn = new System.Windows.Forms.Button();
            this.m_connectBtn = new System.Windows.Forms.Button();
            this.m_status = new System.Windows.Forms.Label();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // m_hasDataSource
            // 
            this.m_hasDataSource.AutoSize = true;
            this.m_hasDataSource.Location = new System.Drawing.Point(12, 81);
            this.m_hasDataSource.Name = "m_hasDataSource";
            this.m_hasDataSource.Size = new System.Drawing.Size(90, 16);
            this.m_hasDataSource.TabIndex = 0;
            this.m_hasDataSource.Text = "Data source";
            this.m_hasDataSource.UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.m_cancelBtn);
            this.panel1.Controls.Add(this.m_saveBtn);
            this.panel1.Controls.Add(this.m_password);
            this.panel1.Controls.Add(this.m_pwdLabel);
            this.panel1.Controls.Add(this.m_userName);
            this.panel1.Controls.Add(this.m_userNameLabel);
            this.panel1.Controls.Add(this.m_dbServerLabel);
            this.panel1.Controls.Add(this.m_dbServer);
            this.panel1.Location = new System.Drawing.Point(12, 112);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(376, 148);
            this.panel1.TabIndex = 1;
            // 
            // m_dbServer
            // 
            this.m_dbServer.Location = new System.Drawing.Point(127, 23);
            this.m_dbServer.Name = "m_dbServer";
            this.m_dbServer.Size = new System.Drawing.Size(233, 21);
            this.m_dbServer.TabIndex = 2;
            // 
            // m_dbServerLabel
            // 
            this.m_dbServerLabel.AutoSize = true;
            this.m_dbServerLabel.Location = new System.Drawing.Point(10, 26);
            this.m_dbServerLabel.Name = "m_dbServerLabel";
            this.m_dbServerLabel.Size = new System.Drawing.Size(95, 12);
            this.m_dbServerLabel.TabIndex = 3;
            this.m_dbServerLabel.Text = "Dababase Server";
            // 
            // m_userNameLabel
            // 
            this.m_userNameLabel.AutoSize = true;
            this.m_userNameLabel.Location = new System.Drawing.Point(10, 52);
            this.m_userNameLabel.Name = "m_userNameLabel";
            this.m_userNameLabel.Size = new System.Drawing.Size(59, 12);
            this.m_userNameLabel.TabIndex = 4;
            this.m_userNameLabel.Text = "User Name";
            // 
            // m_userName
            // 
            this.m_userName.Location = new System.Drawing.Point(127, 49);
            this.m_userName.Name = "m_userName";
            this.m_userName.Size = new System.Drawing.Size(148, 21);
            this.m_userName.TabIndex = 5;
            // 
            // m_pwdLabel
            // 
            this.m_pwdLabel.AutoSize = true;
            this.m_pwdLabel.Location = new System.Drawing.Point(10, 83);
            this.m_pwdLabel.Name = "m_pwdLabel";
            this.m_pwdLabel.Size = new System.Drawing.Size(53, 12);
            this.m_pwdLabel.TabIndex = 6;
            this.m_pwdLabel.Text = "Password";
            // 
            // m_password
            // 
            this.m_password.Location = new System.Drawing.Point(127, 83);
            this.m_password.Name = "m_password";
            this.m_password.Size = new System.Drawing.Size(148, 21);
            this.m_password.TabIndex = 7;
            // 
            // m_saveBtn
            // 
            this.m_saveBtn.Location = new System.Drawing.Point(66, 110);
            this.m_saveBtn.Name = "m_saveBtn";
            this.m_saveBtn.Size = new System.Drawing.Size(75, 23);
            this.m_saveBtn.TabIndex = 8;
            this.m_saveBtn.Text = "Save";
            this.m_saveBtn.UseVisualStyleBackColor = true;
            // 
            // m_cancelBtn
            // 
            this.m_cancelBtn.Location = new System.Drawing.Point(237, 110);
            this.m_cancelBtn.Name = "m_cancelBtn";
            this.m_cancelBtn.Size = new System.Drawing.Size(75, 23);
            this.m_cancelBtn.TabIndex = 9;
            this.m_cancelBtn.Text = "Cancel";
            this.m_cancelBtn.UseVisualStyleBackColor = true;
            // 
            // m_connectBtn
            // 
            this.m_connectBtn.Location = new System.Drawing.Point(12, 12);
            this.m_connectBtn.Name = "m_connectBtn";
            this.m_connectBtn.Size = new System.Drawing.Size(75, 23);
            this.m_connectBtn.TabIndex = 2;
            this.m_connectBtn.Text = "Connect";
            this.m_connectBtn.UseVisualStyleBackColor = true;
            // 
            // m_status
            // 
            this.m_status.AutoSize = true;
            this.m_status.Location = new System.Drawing.Point(10, 51);
            this.m_status.Name = "m_status";
            this.m_status.Size = new System.Drawing.Size(95, 12);
            this.m_status.TabIndex = 3;
            this.m_status.Text = "Database status";
            // 
            // ConnectionSetting
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(401, 267);
            this.Controls.Add(this.m_status);
            this.Controls.Add(this.m_connectBtn);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.m_hasDataSource);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "ConnectionSetting";
            this.Text = "ConnectionSetting";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox m_hasDataSource;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label m_dbServerLabel;
        private System.Windows.Forms.TextBox m_dbServer;
        private System.Windows.Forms.Label m_userNameLabel;
        private System.Windows.Forms.TextBox m_userName;
        private System.Windows.Forms.Button m_cancelBtn;
        private System.Windows.Forms.Button m_saveBtn;
        private System.Windows.Forms.MaskedTextBox m_password;
        private System.Windows.Forms.Label m_pwdLabel;
        private System.Windows.Forms.Button m_connectBtn;
        private System.Windows.Forms.Label m_status;
    }
}