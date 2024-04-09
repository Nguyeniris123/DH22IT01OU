
namespace BaiThucHanh3
{
    partial class Bai1_36_Nguyen
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
            this.lbKetQua_36_Nguyen = new System.Windows.Forms.Label();
            this.btnIn_36_Nguyen = new System.Windows.Forms.Button();
            this.btnDung_36_nguyen = new System.Windows.Forms.Button();
            this.btnXoa_36_nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbKetQua_36_Nguyen
            // 
            this.lbKetQua_36_Nguyen.BackColor = System.Drawing.Color.Cornsilk;
            this.lbKetQua_36_Nguyen.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.lbKetQua_36_Nguyen.Location = new System.Drawing.Point(42, 26);
            this.lbKetQua_36_Nguyen.Name = "lbKetQua_36_Nguyen";
            this.lbKetQua_36_Nguyen.Size = new System.Drawing.Size(417, 119);
            this.lbKetQua_36_Nguyen.TabIndex = 0;
            this.lbKetQua_36_Nguyen.Text = "label1";
            // 
            // btnIn_36_Nguyen
            // 
            this.btnIn_36_Nguyen.Location = new System.Drawing.Point(45, 182);
            this.btnIn_36_Nguyen.Name = "btnIn_36_Nguyen";
            this.btnIn_36_Nguyen.Size = new System.Drawing.Size(102, 35);
            this.btnIn_36_Nguyen.TabIndex = 1;
            this.btnIn_36_Nguyen.Text = "In mảng";
            this.btnIn_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnIn_36_Nguyen.Click += new System.EventHandler(this.btnIn_36_Nguyen_Click);
            // 
            // btnDung_36_nguyen
            // 
            this.btnDung_36_nguyen.Location = new System.Drawing.Point(357, 182);
            this.btnDung_36_nguyen.Name = "btnDung_36_nguyen";
            this.btnDung_36_nguyen.Size = new System.Drawing.Size(102, 35);
            this.btnDung_36_nguyen.TabIndex = 2;
            this.btnDung_36_nguyen.Text = "Dừng";
            this.btnDung_36_nguyen.UseVisualStyleBackColor = true;
            this.btnDung_36_nguyen.Click += new System.EventHandler(this.btnDung_36_nguyen_Click);
            // 
            // btnXoa_36_nguyen
            // 
            this.btnXoa_36_nguyen.Location = new System.Drawing.Point(202, 182);
            this.btnXoa_36_nguyen.Name = "btnXoa_36_nguyen";
            this.btnXoa_36_nguyen.Size = new System.Drawing.Size(102, 35);
            this.btnXoa_36_nguyen.TabIndex = 3;
            this.btnXoa_36_nguyen.Text = "Xóa";
            this.btnXoa_36_nguyen.UseVisualStyleBackColor = true;
            this.btnXoa_36_nguyen.Click += new System.EventHandler(this.btnXoa_36_nguyen_Click);
            // 
            // Bai1_36_Nguyen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(515, 244);
            this.Controls.Add(this.btnXoa_36_nguyen);
            this.Controls.Add(this.btnDung_36_nguyen);
            this.Controls.Add(this.btnIn_36_Nguyen);
            this.Controls.Add(this.lbKetQua_36_Nguyen);
            this.Name = "Bai1_36_Nguyen";
            this.Text = "Mảng số nguyên";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label lbKetQua_36_Nguyen;
        private System.Windows.Forms.Button btnIn_36_Nguyen;
        private System.Windows.Forms.Button btnDung_36_nguyen;
        private System.Windows.Forms.Button btnXoa_36_nguyen;
    }
}

