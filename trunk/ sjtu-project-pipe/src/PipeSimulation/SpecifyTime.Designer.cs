﻿namespace PipeSimulation
{
    partial class SpecifyTime
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(SpecifyTime));
            this.okBtn = new System.Windows.Forms.Button();
            this.cancelBtn = new System.Windows.Forms.Button();
            this.dateTimePicker = new System.Windows.Forms.DateTimePicker();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // okBtn
            // 
            this.okBtn.AccessibleDescription = null;
            this.okBtn.AccessibleName = null;
            resources.ApplyResources(this.okBtn, "okBtn");
            this.okBtn.BackgroundImage = null;
            this.okBtn.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.okBtn.Font = null;
            this.okBtn.Name = "okBtn";
            this.okBtn.UseVisualStyleBackColor = true;
            // 
            // cancelBtn
            // 
            this.cancelBtn.AccessibleDescription = null;
            this.cancelBtn.AccessibleName = null;
            resources.ApplyResources(this.cancelBtn, "cancelBtn");
            this.cancelBtn.BackgroundImage = null;
            this.cancelBtn.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.cancelBtn.Font = null;
            this.cancelBtn.Name = "cancelBtn";
            this.cancelBtn.UseVisualStyleBackColor = true;
            // 
            // dateTimePicker
            // 
            this.dateTimePicker.AccessibleDescription = null;
            this.dateTimePicker.AccessibleName = null;
            resources.ApplyResources(this.dateTimePicker, "dateTimePicker");
            this.dateTimePicker.BackgroundImage = null;
            this.dateTimePicker.CalendarFont = null;
            this.dateTimePicker.Font = null;
            this.dateTimePicker.Format = System.Windows.Forms.DateTimePickerFormat.Custom;
            this.dateTimePicker.Name = "dateTimePicker";
            // 
            // label1
            // 
            this.label1.AccessibleDescription = null;
            this.label1.AccessibleName = null;
            resources.ApplyResources(this.label1, "label1");
            this.label1.Font = null;
            this.label1.Name = "label1";
            // 
            // SpecifyTime
            // 
            this.AcceptButton = this.okBtn;
            this.AccessibleDescription = null;
            this.AccessibleName = null;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = null;
            this.CancelButton = this.cancelBtn;
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dateTimePicker);
            this.Controls.Add(this.cancelBtn);
            this.Controls.Add(this.okBtn);
            this.Font = null;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.Name = "SpecifyTime";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button okBtn;
        private System.Windows.Forms.Button cancelBtn;
        private System.Windows.Forms.DateTimePicker dateTimePicker;
        private System.Windows.Forms.Label label1;
    }
}