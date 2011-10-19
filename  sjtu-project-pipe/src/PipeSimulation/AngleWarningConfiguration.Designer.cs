namespace PipeSimulation
{
    partial class AngleWarningConfiguration
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(AngleWarningConfiguration));
            this.AngleWarningLabel = new System.Windows.Forms.Label();
            this.AlphaAngleTextBox = new System.Windows.Forms.TextBox();
            this.AlphaGroupBox = new System.Windows.Forms.GroupBox();
            this.BetaGroupBox = new System.Windows.Forms.GroupBox();
            this.BetaTextBox = new System.Windows.Forms.TextBox();
            this.BetaAnglelabel = new System.Windows.Forms.Label();
            this.OkBtn = new System.Windows.Forms.Button();
            this.CancelBtn = new System.Windows.Forms.Button();
            this.AlphaGroupBox.SuspendLayout();
            this.BetaGroupBox.SuspendLayout();
            this.SuspendLayout();
            // 
            // AngleWarningLabel
            // 
            this.AngleWarningLabel.AccessibleDescription = null;
            this.AngleWarningLabel.AccessibleName = null;
            resources.ApplyResources(this.AngleWarningLabel, "AngleWarningLabel");
            this.AngleWarningLabel.Font = null;
            this.AngleWarningLabel.Name = "AngleWarningLabel";
            // 
            // AlphaAngleTextBox
            // 
            this.AlphaAngleTextBox.AccessibleDescription = null;
            this.AlphaAngleTextBox.AccessibleName = null;
            resources.ApplyResources(this.AlphaAngleTextBox, "AlphaAngleTextBox");
            this.AlphaAngleTextBox.BackgroundImage = null;
            this.AlphaAngleTextBox.Font = null;
            this.AlphaAngleTextBox.Name = "AlphaAngleTextBox";
            this.AlphaAngleTextBox.TextChanged += new System.EventHandler(this.AngleTextBox_TextChanged);
            // 
            // AlphaGroupBox
            // 
            this.AlphaGroupBox.AccessibleDescription = null;
            this.AlphaGroupBox.AccessibleName = null;
            resources.ApplyResources(this.AlphaGroupBox, "AlphaGroupBox");
            this.AlphaGroupBox.BackgroundImage = null;
            this.AlphaGroupBox.Controls.Add(this.AlphaAngleTextBox);
            this.AlphaGroupBox.Controls.Add(this.AngleWarningLabel);
            this.AlphaGroupBox.Font = null;
            this.AlphaGroupBox.Name = "AlphaGroupBox";
            this.AlphaGroupBox.TabStop = false;
            this.AlphaGroupBox.Enter += new System.EventHandler(this.AlphaGroupBox_Enter);
            // 
            // BetaGroupBox
            // 
            this.BetaGroupBox.AccessibleDescription = null;
            this.BetaGroupBox.AccessibleName = null;
            resources.ApplyResources(this.BetaGroupBox, "BetaGroupBox");
            this.BetaGroupBox.BackgroundImage = null;
            this.BetaGroupBox.Controls.Add(this.BetaTextBox);
            this.BetaGroupBox.Controls.Add(this.BetaAnglelabel);
            this.BetaGroupBox.Font = null;
            this.BetaGroupBox.Name = "BetaGroupBox";
            this.BetaGroupBox.TabStop = false;
            // 
            // BetaTextBox
            // 
            this.BetaTextBox.AccessibleDescription = null;
            this.BetaTextBox.AccessibleName = null;
            resources.ApplyResources(this.BetaTextBox, "BetaTextBox");
            this.BetaTextBox.BackgroundImage = null;
            this.BetaTextBox.Font = null;
            this.BetaTextBox.Name = "BetaTextBox";
            this.BetaTextBox.TextChanged += new System.EventHandler(this.AngleTextBox_TextChanged);
            // 
            // BetaAnglelabel
            // 
            this.BetaAnglelabel.AccessibleDescription = null;
            this.BetaAnglelabel.AccessibleName = null;
            resources.ApplyResources(this.BetaAnglelabel, "BetaAnglelabel");
            this.BetaAnglelabel.Font = null;
            this.BetaAnglelabel.Name = "BetaAnglelabel";
            // 
            // OkBtn
            // 
            this.OkBtn.AccessibleDescription = null;
            this.OkBtn.AccessibleName = null;
            resources.ApplyResources(this.OkBtn, "OkBtn");
            this.OkBtn.BackgroundImage = null;
            this.OkBtn.Font = null;
            this.OkBtn.Name = "OkBtn";
            this.OkBtn.UseVisualStyleBackColor = true;
            this.OkBtn.Click += new System.EventHandler(this.OkButton_Click);
            // 
            // CancelBtn
            // 
            this.CancelBtn.AccessibleDescription = null;
            this.CancelBtn.AccessibleName = null;
            resources.ApplyResources(this.CancelBtn, "CancelBtn");
            this.CancelBtn.BackgroundImage = null;
            this.CancelBtn.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.CancelBtn.Font = null;
            this.CancelBtn.Name = "CancelBtn";
            this.CancelBtn.UseVisualStyleBackColor = true;
            // 
            // AngleWarningConfiguration
            // 
            this.AcceptButton = this.OkBtn;
            this.AccessibleDescription = null;
            this.AccessibleName = null;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = null;
            this.CancelButton = this.CancelBtn;
            this.Controls.Add(this.CancelBtn);
            this.Controls.Add(this.OkBtn);
            this.Controls.Add(this.BetaGroupBox);
            this.Controls.Add(this.AlphaGroupBox);
            this.Font = null;
            this.Name = "AngleWarningConfiguration";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Show;
            this.AlphaGroupBox.ResumeLayout(false);
            this.AlphaGroupBox.PerformLayout();
            this.BetaGroupBox.ResumeLayout(false);
            this.BetaGroupBox.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label AngleWarningLabel;
        private System.Windows.Forms.TextBox AlphaAngleTextBox;
        private System.Windows.Forms.GroupBox AlphaGroupBox;
        private System.Windows.Forms.GroupBox BetaGroupBox;
        private System.Windows.Forms.TextBox BetaTextBox;
        private System.Windows.Forms.Label BetaAnglelabel;
        private System.Windows.Forms.Button OkBtn;
        private System.Windows.Forms.Button CancelBtn;
    }
}