
namespace B5_Bai_4_N2_36_Nguyen
{
    partial class SaveDialog_36_Nguyen
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
            this.richTextBox_36_Nguyen = new System.Windows.Forms.RichTextBox();
            this.btnSave_36_Nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // richTextBox_36_Nguyen
            // 
            this.richTextBox_36_Nguyen.Location = new System.Drawing.Point(120, 66);
            this.richTextBox_36_Nguyen.Name = "richTextBox_36_Nguyen";
            this.richTextBox_36_Nguyen.Size = new System.Drawing.Size(332, 293);
            this.richTextBox_36_Nguyen.TabIndex = 0;
            this.richTextBox_36_Nguyen.Text = "";
            // 
            // btnSave_36_Nguyen
            // 
            this.btnSave_36_Nguyen.Location = new System.Drawing.Point(537, 147);
            this.btnSave_36_Nguyen.Name = "btnSave_36_Nguyen";
            this.btnSave_36_Nguyen.Size = new System.Drawing.Size(170, 153);
            this.btnSave_36_Nguyen.TabIndex = 1;
            this.btnSave_36_Nguyen.Text = "Save";
            this.btnSave_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnSave_36_Nguyen.Click += new System.EventHandler(this.btnSave_36_Nguyen_Click);
            // 
            // SaveDialog_36_Nguyen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnSave_36_Nguyen);
            this.Controls.Add(this.richTextBox_36_Nguyen);
            this.Name = "SaveDialog_36_Nguyen";
            this.Text = "B5_Bai4_36_Nguyen_Save";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.RichTextBox richTextBox_36_Nguyen;
        private System.Windows.Forms.Button btnSave_36_Nguyen;
    }
}