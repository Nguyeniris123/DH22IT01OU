
namespace BaiThucHanh1
{
    partial class Bai6_36_Nguyen
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
            this.lbTieuDe_36_Nguyen = new System.Windows.Forms.Label();
            this.lbsoNguyen_36_Nguyen = new System.Windows.Forms.Label();
            this.txtSoNguyen_36_Nguyen = new System.Windows.Forms.TextBox();
            this.btnTinh = new System.Windows.Forms.Button();
            this.lbKetQua = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lbTieuDe_36_Nguyen
            // 
            this.lbTieuDe_36_Nguyen.AutoSize = true;
            this.lbTieuDe_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbTieuDe_36_Nguyen.Location = new System.Drawing.Point(31, 21);
            this.lbTieuDe_36_Nguyen.Name = "lbTieuDe_36_Nguyen";
            this.lbTieuDe_36_Nguyen.Size = new System.Drawing.Size(826, 31);
            this.lbTieuDe_36_Nguyen.TabIndex = 0;
            this.lbTieuDe_36_Nguyen.Text = "CHƯƠNG TRÌNH TÍNH TỔNG CÁC SỐ NGUYÊN TỪ 1 ĐẾN N";
            this.lbTieuDe_36_Nguyen.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lbsoNguyen_36_Nguyen
            // 
            this.lbsoNguyen_36_Nguyen.AutoSize = true;
            this.lbsoNguyen_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbsoNguyen_36_Nguyen.Location = new System.Drawing.Point(142, 113);
            this.lbsoNguyen_36_Nguyen.Name = "lbsoNguyen_36_Nguyen";
            this.lbsoNguyen_36_Nguyen.Size = new System.Drawing.Size(182, 25);
            this.lbsoNguyen_36_Nguyen.TabIndex = 1;
            this.lbsoNguyen_36_Nguyen.Text = "Số nguyên dương";
            // 
            // txtSoNguyen_36_Nguyen
            // 
            this.txtSoNguyen_36_Nguyen.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtSoNguyen_36_Nguyen.Location = new System.Drawing.Point(397, 104);
            this.txtSoNguyen_36_Nguyen.Name = "txtSoNguyen_36_Nguyen";
            this.txtSoNguyen_36_Nguyen.Size = new System.Drawing.Size(343, 38);
            this.txtSoNguyen_36_Nguyen.TabIndex = 2;
            // 
            // btnTinh
            // 
            this.btnTinh.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTinh.Location = new System.Drawing.Point(610, 200);
            this.btnTinh.Name = "btnTinh";
            this.btnTinh.Size = new System.Drawing.Size(130, 78);
            this.btnTinh.TabIndex = 3;
            this.btnTinh.Text = "Tính";
            this.btnTinh.UseVisualStyleBackColor = true;
            this.btnTinh.Click += new System.EventHandler(this.btnTinh_Click);
            // 
            // lbKetQua
            // 
            this.lbKetQua.AutoSize = true;
            this.lbKetQua.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbKetQua.Location = new System.Drawing.Point(503, 336);
            this.lbKetQua.Name = "lbKetQua";
            this.lbKetQua.Size = new System.Drawing.Size(333, 25);
            this.lbKetQua.TabIndex = 4;
            this.lbKetQua.Text = "Tổng các số nguyên từ 1 đến n là";
            // 
            // Bai6
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(885, 402);
            this.Controls.Add(this.lbKetQua);
            this.Controls.Add(this.btnTinh);
            this.Controls.Add(this.txtSoNguyen_36_Nguyen);
            this.Controls.Add(this.lbsoNguyen_36_Nguyen);
            this.Controls.Add(this.lbTieuDe_36_Nguyen);
            this.Name = "Bai6";
            this.Text = "Chương trình tính tổng đơn giản";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbTieuDe_36_Nguyen;
        private System.Windows.Forms.Label lbsoNguyen_36_Nguyen;
        private System.Windows.Forms.TextBox txtSoNguyen_36_Nguyen;
        private System.Windows.Forms.Button btnTinh;
        private System.Windows.Forms.Label lbKetQua;
    }
}