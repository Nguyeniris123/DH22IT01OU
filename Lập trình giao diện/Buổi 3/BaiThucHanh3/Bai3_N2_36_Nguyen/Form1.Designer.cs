
namespace Bai3_N2_36_Nguyen
{
    partial class Bai3_36_Nguyen
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
            this.btnNhap_36_Nguyen = new System.Windows.Forms.Button();
            this.btnXoa_36_Nguyen = new System.Windows.Forms.Button();
            this.btnIn_36_Nguyen = new System.Windows.Forms.Button();
            this.btnSap_36_Nguyen = new System.Windows.Forms.Button();
            this.btnDung_36_nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbKetQua_36_Nguyen
            // 
            this.lbKetQua_36_Nguyen.BackColor = System.Drawing.Color.Bisque;
            this.lbKetQua_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbKetQua_36_Nguyen.Location = new System.Drawing.Point(21, 23);
            this.lbKetQua_36_Nguyen.Name = "lbKetQua_36_Nguyen";
            this.lbKetQua_36_Nguyen.Size = new System.Drawing.Size(346, 245);
            this.lbKetQua_36_Nguyen.TabIndex = 0;
            this.lbKetQua_36_Nguyen.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // btnNhap_36_Nguyen
            // 
            this.btnNhap_36_Nguyen.Location = new System.Drawing.Point(383, 23);
            this.btnNhap_36_Nguyen.Name = "btnNhap_36_Nguyen";
            this.btnNhap_36_Nguyen.Size = new System.Drawing.Size(72, 37);
            this.btnNhap_36_Nguyen.TabIndex = 1;
            this.btnNhap_36_Nguyen.Text = "Nhập mảng";
            this.btnNhap_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnNhap_36_Nguyen.Click += new System.EventHandler(this.btnNhap_36_Nguyen_Click);
            // 
            // btnXoa_36_Nguyen
            // 
            this.btnXoa_36_Nguyen.Location = new System.Drawing.Point(148, 282);
            this.btnXoa_36_Nguyen.Name = "btnXoa_36_Nguyen";
            this.btnXoa_36_Nguyen.Size = new System.Drawing.Size(72, 37);
            this.btnXoa_36_Nguyen.TabIndex = 2;
            this.btnXoa_36_Nguyen.Text = "Xoá";
            this.btnXoa_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnXoa_36_Nguyen.Click += new System.EventHandler(this.btnXoa_36_Nguyen_Click);
            // 
            // btnIn_36_Nguyen
            // 
            this.btnIn_36_Nguyen.Location = new System.Drawing.Point(24, 282);
            this.btnIn_36_Nguyen.Name = "btnIn_36_Nguyen";
            this.btnIn_36_Nguyen.Size = new System.Drawing.Size(72, 37);
            this.btnIn_36_Nguyen.TabIndex = 3;
            this.btnIn_36_Nguyen.Text = "In mảng";
            this.btnIn_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnIn_36_Nguyen.Click += new System.EventHandler(this.btnIn_36_Nguyen_Click);
            // 
            // btnSap_36_Nguyen
            // 
            this.btnSap_36_Nguyen.Location = new System.Drawing.Point(383, 86);
            this.btnSap_36_Nguyen.Name = "btnSap_36_Nguyen";
            this.btnSap_36_Nguyen.Size = new System.Drawing.Size(72, 37);
            this.btnSap_36_Nguyen.TabIndex = 4;
            this.btnSap_36_Nguyen.Text = "Sắp xếp";
            this.btnSap_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnSap_36_Nguyen.Click += new System.EventHandler(this.btnSap_36_Nguyen_Click);
            // 
            // btnDung_36_nguyen
            // 
            this.btnDung_36_nguyen.Location = new System.Drawing.Point(285, 282);
            this.btnDung_36_nguyen.Name = "btnDung_36_nguyen";
            this.btnDung_36_nguyen.Size = new System.Drawing.Size(72, 37);
            this.btnDung_36_nguyen.TabIndex = 5;
            this.btnDung_36_nguyen.Text = "Dừng";
            this.btnDung_36_nguyen.UseVisualStyleBackColor = true;
            this.btnDung_36_nguyen.Click += new System.EventHandler(this.btnDung_36_nguyen_Click);
            // 
            // Bai3_36_Nguyen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(467, 331);
            this.Controls.Add(this.btnDung_36_nguyen);
            this.Controls.Add(this.btnSap_36_Nguyen);
            this.Controls.Add(this.btnIn_36_Nguyen);
            this.Controls.Add(this.btnXoa_36_Nguyen);
            this.Controls.Add(this.btnNhap_36_Nguyen);
            this.Controls.Add(this.lbKetQua_36_Nguyen);
            this.Name = "Bai3_36_Nguyen";
            this.Text = "Mảng 2 chiều";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label lbKetQua_36_Nguyen;
        private System.Windows.Forms.Button btnNhap_36_Nguyen;
        private System.Windows.Forms.Button btnXoa_36_Nguyen;
        private System.Windows.Forms.Button btnIn_36_Nguyen;
        private System.Windows.Forms.Button btnSap_36_Nguyen;
        private System.Windows.Forms.Button btnDung_36_nguyen;
    }
}

