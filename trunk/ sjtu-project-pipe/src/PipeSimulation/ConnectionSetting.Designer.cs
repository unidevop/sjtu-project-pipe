﻿namespace PipeSimulation
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
            this.m_connectBtn = new System.Windows.Forms.Button();
            this.m_connGroup = new System.Windows.Forms.GroupBox();
            this.m_readInterval = new System.Windows.Forms.NumericUpDown();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.m_autoConnInterval = new System.Windows.Forms.NumericUpDown();
            this.label2 = new System.Windows.Forms.Label();
            this.m_autoConnect = new System.Windows.Forms.CheckBox();
            this.label1 = new System.Windows.Forms.Label();
            this.m_userName = new System.Windows.Forms.TextBox();
            this.m_pwdLabel = new System.Windows.Forms.Label();
            this.m_userNameLabel = new System.Windows.Forms.Label();
            this.m_password = new System.Windows.Forms.MaskedTextBox();
            this.m_dbServerLabel = new System.Windows.Forms.Label();
            this.m_dbServer = new System.Windows.Forms.TextBox();
            this.m_saveBtn = new System.Windows.Forms.Button();
            this.m_resetBtn = new System.Windows.Forms.Button();
            this.m_configGroup = new System.Windows.Forms.GroupBox();
            this.m_connConfigGroup = new System.Windows.Forms.GroupBox();
            this.m_cancelBtn = new System.Windows.Forms.Button();
            this.m_connGroup.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_readInterval)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.m_autoConnInterval)).BeginInit();
            this.m_configGroup.SuspendLayout();
            this.m_connConfigGroup.SuspendLayout();
            this.SuspendLayout();
            // 
            // m_connectBtn
            // 
            this.m_connectBtn.AccessibleDescription = null;
            this.m_connectBtn.AccessibleName = null;
            resources.ApplyResources(this.m_connectBtn, "m_connectBtn");
            this.m_connectBtn.BackgroundImage = null;
            this.m_connectBtn.Font = null;
            this.m_connectBtn.Name = "m_connectBtn";
            this.m_connectBtn.UseVisualStyleBackColor = true;
            this.m_connectBtn.Click += new System.EventHandler(this.Connect_ButtonClick);
            // 
            // m_connGroup
            // 
            this.m_connGroup.AccessibleDescription = null;
            this.m_connGroup.AccessibleName = null;
            resources.ApplyResources(this.m_connGroup, "m_connGroup");
            this.m_connGroup.BackgroundImage = null;
            this.m_connGroup.Controls.Add(this.m_readInterval);
            this.m_connGroup.Controls.Add(this.label3);
            this.m_connGroup.Controls.Add(this.label4);
            this.m_connGroup.Controls.Add(this.m_autoConnInterval);
            this.m_connGroup.Controls.Add(this.label2);
            this.m_connGroup.Controls.Add(this.m_autoConnect);
            this.m_connGroup.Controls.Add(this.label1);
            this.m_connGroup.Font = null;
            this.m_connGroup.Name = "m_connGroup";
            this.m_connGroup.TabStop = false;
            // 
            // m_readInterval
            // 
            this.m_readInterval.AccessibleDescription = null;
            this.m_readInterval.AccessibleName = null;
            resources.ApplyResources(this.m_readInterval, "m_readInterval");
            this.m_readInterval.DecimalPlaces = 1;
            this.m_readInterval.Font = null;
            this.m_readInterval.Increment = new decimal(new int[] {
            1,
            0,
            0,
            65536});
            this.m_readInterval.Name = "m_readInterval";
            this.m_readInterval.Value = new decimal(new int[] {
            5,
            0,
            0,
            65536});
            this.m_readInterval.ValueChanged += new System.EventHandler(this.ConnectSettingChanged);
            // 
            // label3
            // 
            this.label3.AccessibleDescription = null;
            this.label3.AccessibleName = null;
            resources.ApplyResources(this.label3, "label3");
            this.label3.Font = null;
            this.label3.Name = "label3";
            // 
            // label4
            // 
            this.label4.AccessibleDescription = null;
            this.label4.AccessibleName = null;
            resources.ApplyResources(this.label4, "label4");
            this.label4.Font = null;
            this.label4.Name = "label4";
            // 
            // m_autoConnInterval
            // 
            this.m_autoConnInterval.AccessibleDescription = null;
            this.m_autoConnInterval.AccessibleName = null;
            resources.ApplyResources(this.m_autoConnInterval, "m_autoConnInterval");
            this.m_autoConnInterval.DecimalPlaces = 1;
            this.m_autoConnInterval.Font = null;
            this.m_autoConnInterval.Increment = new decimal(new int[] {
            1,
            0,
            0,
            65536});
            this.m_autoConnInterval.Name = "m_autoConnInterval";
            this.m_autoConnInterval.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.m_autoConnInterval.ValueChanged += new System.EventHandler(this.ConnectSettingChanged);
            // 
            // label2
            // 
            this.label2.AccessibleDescription = null;
            this.label2.AccessibleName = null;
            resources.ApplyResources(this.label2, "label2");
            this.label2.Font = null;
            this.label2.Name = "label2";
            // 
            // m_autoConnect
            // 
            this.m_autoConnect.AccessibleDescription = null;
            this.m_autoConnect.AccessibleName = null;
            resources.ApplyResources(this.m_autoConnect, "m_autoConnect");
            this.m_autoConnect.BackgroundImage = null;
            this.m_autoConnect.Font = null;
            this.m_autoConnect.Name = "m_autoConnect";
            this.m_autoConnect.UseVisualStyleBackColor = true;
            this.m_autoConnect.CheckedChanged += new System.EventHandler(this.AutoConnect_CheckedChanged);
            // 
            // label1
            // 
            this.label1.AccessibleDescription = null;
            this.label1.AccessibleName = null;
            resources.ApplyResources(this.label1, "label1");
            this.label1.Font = null;
            this.label1.Name = "label1";
            // 
            // m_userName
            // 
            this.m_userName.AccessibleDescription = null;
            this.m_userName.AccessibleName = null;
            resources.ApplyResources(this.m_userName, "m_userName");
            this.m_userName.BackgroundImage = null;
            this.m_userName.Font = null;
            this.m_userName.Name = "m_userName";
            this.m_userName.TextChanged += new System.EventHandler(this.ConnectSettingChanged);
            // 
            // m_pwdLabel
            // 
            this.m_pwdLabel.AccessibleDescription = null;
            this.m_pwdLabel.AccessibleName = null;
            resources.ApplyResources(this.m_pwdLabel, "m_pwdLabel");
            this.m_pwdLabel.Font = null;
            this.m_pwdLabel.Name = "m_pwdLabel";
            // 
            // m_userNameLabel
            // 
            this.m_userNameLabel.AccessibleDescription = null;
            this.m_userNameLabel.AccessibleName = null;
            resources.ApplyResources(this.m_userNameLabel, "m_userNameLabel");
            this.m_userNameLabel.Font = null;
            this.m_userNameLabel.Name = "m_userNameLabel";
            // 
            // m_password
            // 
            this.m_password.AccessibleDescription = null;
            this.m_password.AccessibleName = null;
            resources.ApplyResources(this.m_password, "m_password");
            this.m_password.BackgroundImage = null;
            this.m_password.Font = null;
            this.m_password.Name = "m_password";
            this.m_password.UseSystemPasswordChar = true;
            this.m_password.TextChanged += new System.EventHandler(this.ConnectSettingChanged);
            // 
            // m_dbServerLabel
            // 
            this.m_dbServerLabel.AccessibleDescription = null;
            this.m_dbServerLabel.AccessibleName = null;
            resources.ApplyResources(this.m_dbServerLabel, "m_dbServerLabel");
            this.m_dbServerLabel.Font = null;
            this.m_dbServerLabel.Name = "m_dbServerLabel";
            // 
            // m_dbServer
            // 
            this.m_dbServer.AccessibleDescription = null;
            this.m_dbServer.AccessibleName = null;
            resources.ApplyResources(this.m_dbServer, "m_dbServer");
            this.m_dbServer.BackgroundImage = null;
            this.m_dbServer.Font = null;
            this.m_dbServer.Name = "m_dbServer";
            this.m_dbServer.TextChanged += new System.EventHandler(this.ConnectSettingChanged);
            // 
            // m_saveBtn
            // 
            this.m_saveBtn.AccessibleDescription = null;
            this.m_saveBtn.AccessibleName = null;
            resources.ApplyResources(this.m_saveBtn, "m_saveBtn");
            this.m_saveBtn.BackgroundImage = null;
            this.m_saveBtn.Font = null;
            this.m_saveBtn.Name = "m_saveBtn";
            this.m_saveBtn.UseVisualStyleBackColor = true;
            this.m_saveBtn.Click += new System.EventHandler(this.SaveButton_Click);
            // 
            // m_resetBtn
            // 
            this.m_resetBtn.AccessibleDescription = null;
            this.m_resetBtn.AccessibleName = null;
            resources.ApplyResources(this.m_resetBtn, "m_resetBtn");
            this.m_resetBtn.BackgroundImage = null;
            this.m_resetBtn.Font = null;
            this.m_resetBtn.Name = "m_resetBtn";
            this.m_resetBtn.UseVisualStyleBackColor = true;
            this.m_resetBtn.Click += new System.EventHandler(this.ResetButton_Click);
            // 
            // m_configGroup
            // 
            this.m_configGroup.AccessibleDescription = null;
            this.m_configGroup.AccessibleName = null;
            resources.ApplyResources(this.m_configGroup, "m_configGroup");
            this.m_configGroup.BackgroundImage = null;
            this.m_configGroup.Controls.Add(this.m_dbServer);
            this.m_configGroup.Controls.Add(this.m_dbServerLabel);
            this.m_configGroup.Controls.Add(this.m_password);
            this.m_configGroup.Controls.Add(this.m_userNameLabel);
            this.m_configGroup.Controls.Add(this.m_pwdLabel);
            this.m_configGroup.Controls.Add(this.m_userName);
            this.m_configGroup.Font = null;
            this.m_configGroup.Name = "m_configGroup";
            this.m_configGroup.TabStop = false;
            // 
            // m_connConfigGroup
            // 
            this.m_connConfigGroup.AccessibleDescription = null;
            this.m_connConfigGroup.AccessibleName = null;
            resources.ApplyResources(this.m_connConfigGroup, "m_connConfigGroup");
            this.m_connConfigGroup.BackgroundImage = null;
            this.m_connConfigGroup.Controls.Add(this.m_resetBtn);
            this.m_connConfigGroup.Controls.Add(this.m_configGroup);
            this.m_connConfigGroup.Controls.Add(this.m_connGroup);
            this.m_connConfigGroup.Controls.Add(this.m_saveBtn);
            this.m_connConfigGroup.Font = null;
            this.m_connConfigGroup.Name = "m_connConfigGroup";
            this.m_connConfigGroup.TabStop = false;
            // 
            // m_cancelBtn
            // 
            this.m_cancelBtn.AccessibleDescription = null;
            this.m_cancelBtn.AccessibleName = null;
            resources.ApplyResources(this.m_cancelBtn, "m_cancelBtn");
            this.m_cancelBtn.BackgroundImage = null;
            this.m_cancelBtn.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.m_cancelBtn.Font = null;
            this.m_cancelBtn.Name = "m_cancelBtn";
            this.m_cancelBtn.UseVisualStyleBackColor = true;
            this.m_cancelBtn.Click += new System.EventHandler(this.CancelBtn_Click);
            // 
            // ConnectionSetting
            // 
            this.AccessibleDescription = null;
            this.AccessibleName = null;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = null;
            this.CancelButton = this.m_cancelBtn;
            this.Controls.Add(this.m_cancelBtn);
            this.Controls.Add(this.m_connConfigGroup);
            this.Controls.Add(this.m_connectBtn);
            this.Font = null;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.Name = "ConnectionSetting";
            this.m_connGroup.ResumeLayout(false);
            this.m_connGroup.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_readInterval)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.m_autoConnInterval)).EndInit();
            this.m_configGroup.ResumeLayout(false);
            this.m_configGroup.PerformLayout();
            this.m_connConfigGroup.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button m_connectBtn;
        private System.Windows.Forms.CheckBox m_autoConnect;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.NumericUpDown m_autoConnInterval;
        private System.Windows.Forms.GroupBox m_connGroup;
        private System.Windows.Forms.GroupBox m_configGroup;
        private System.Windows.Forms.Button m_resetBtn;
        private System.Windows.Forms.Button m_saveBtn;
        private System.Windows.Forms.TextBox m_dbServer;
        private System.Windows.Forms.Label m_dbServerLabel;
        private System.Windows.Forms.MaskedTextBox m_password;
        private System.Windows.Forms.Label m_userNameLabel;
        private System.Windows.Forms.Label m_pwdLabel;
        private System.Windows.Forms.TextBox m_userName;
        private System.Windows.Forms.GroupBox m_connConfigGroup;
        private System.Windows.Forms.Button m_cancelBtn;
        private System.Windows.Forms.NumericUpDown m_readInterval;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
    }
}