
namespace BaiThucHanh1
{
    partial class Form1
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
            this.textBox1_36_Nguyen = new System.Windows.Forms.TextBox();
            this.Continue_36_Nguyen = new System.Windows.Forms.Button();
            this.Break_36_Nguyen = new System.Windows.Forms.Button();
            this.Return_36_Nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1_36_Nguyen
            // 
            this.textBox1_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox1_36_Nguyen.Location = new System.Drawing.Point(170, 51);
            this.textBox1_36_Nguyen.Name = "textBox1_36_Nguyen";
            this.textBox1_36_Nguyen.Size = new System.Drawing.Size(178, 38);
            this.textBox1_36_Nguyen.TabIndex = 0;
            // 
            // Continue_36_Nguyen
            // 
            this.Continue_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Continue_36_Nguyen.Location = new System.Drawing.Point(182, 127);
            this.Continue_36_Nguyen.Name = "Continue_36_Nguyen";
            this.Continue_36_Nguyen.Size = new System.Drawing.Size(145, 101);
            this.Continue_36_Nguyen.TabIndex = 1;
            this.Continue_36_Nguyen.Text = "Continue";
            this.Continue_36_Nguyen.UseVisualStyleBackColor = true;
            this.Continue_36_Nguyen.Click += new System.EventHandler(this.Continue_36_Nguyen_Click);
            // 
            // Break_36_Nguyen
            // 
            this.Break_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Break_36_Nguyen.Location = new System.Drawing.Point(23, 127);
            this.Break_36_Nguyen.Name = "Break_36_Nguyen";
            this.Break_36_Nguyen.Size = new System.Drawing.Size(139, 101);
            this.Break_36_Nguyen.TabIndex = 2;
            this.Break_36_Nguyen.Text = "Break";
            this.Break_36_Nguyen.UseVisualStyleBackColor = true;
            this.Break_36_Nguyen.Click += new System.EventHandler(this.Break_36_Nguyen_Click);
            // 
            // Return_36_Nguyen
            // 
            this.Return_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Return_36_Nguyen.Location = new System.Drawing.Point(346, 127);
            this.Return_36_Nguyen.Name = "Return_36_Nguyen";
            this.Return_36_Nguyen.Size = new System.Drawing.Size(123, 101);
            this.Return_36_Nguyen.TabIndex = 3;
            this.Return_36_Nguyen.Text = "Return";
            this.Return_36_Nguyen.UseVisualStyleBackColor = true;
            this.Return_36_Nguyen.Click += new System.EventHandler(this.Return_36_Nguyen_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(500, 315);
            this.Controls.Add(this.Return_36_Nguyen);
            this.Controls.Add(this.Break_36_Nguyen);
            this.Controls.Add(this.Continue_36_Nguyen);
            this.Controls.Add(this.textBox1_36_Nguyen);
            this.Name = "Form1";
            this.Text = "Break-Continue-Return";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1_36_Nguyen;
        private System.Windows.Forms.Button Continue_36_Nguyen;
        private System.Windows.Forms.Button Break_36_Nguyen;
        private System.Windows.Forms.Button Return_36_Nguyen;
    }
}