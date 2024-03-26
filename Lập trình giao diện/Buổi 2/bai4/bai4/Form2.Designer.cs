
namespace bai4
{
    partial class formDangNhap_36_nguyen
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
            this.lbDN_36_nguyen = new System.Windows.Forms.Label();
            this.lbMatKhau_36_nguyen = new System.Windows.Forms.Label();
            this.txtDN_36_nguyen = new System.Windows.Forms.TextBox();
            this.txtMatKhau_36_nguyen = new System.Windows.Forms.TextBox();
            this.btnDn_36_nguyen = new System.Windows.Forms.Button();
            this.btnThoat_36_nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbDN_36_nguyen
            // 
            this.lbDN_36_nguyen.AutoSize = true;
            this.lbDN_36_nguyen.Location = new System.Drawing.Point(59, 43);
            this.lbDN_36_nguyen.Name = "lbDN_36_nguyen";
            this.lbDN_36_nguyen.Size = new System.Drawing.Size(81, 13);
            this.lbDN_36_nguyen.TabIndex = 0;
            this.lbDN_36_nguyen.Text = "Tên đăng nhập";
            // 
            // lbMatKhau_36_nguyen
            // 
            this.lbMatKhau_36_nguyen.AutoSize = true;
            this.lbMatKhau_36_nguyen.Location = new System.Drawing.Point(59, 111);
            this.lbMatKhau_36_nguyen.Name = "lbMatKhau_36_nguyen";
            this.lbMatKhau_36_nguyen.Size = new System.Drawing.Size(52, 13);
            this.lbMatKhau_36_nguyen.TabIndex = 1;
            this.lbMatKhau_36_nguyen.Text = "Mật khẩu";
            // 
            // txtDN_36_nguyen
            // 
            this.txtDN_36_nguyen.Location = new System.Drawing.Point(185, 40);
            this.txtDN_36_nguyen.Name = "txtDN_36_nguyen";
            this.txtDN_36_nguyen.PasswordChar = '*';
            this.txtDN_36_nguyen.Size = new System.Drawing.Size(212, 20);
            this.txtDN_36_nguyen.TabIndex = 2;
            this.txtDN_36_nguyen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // txtMatKhau_36_nguyen
            // 
            this.txtMatKhau_36_nguyen.Location = new System.Drawing.Point(185, 108);
            this.txtMatKhau_36_nguyen.Name = "txtMatKhau_36_nguyen";
            this.txtMatKhau_36_nguyen.Size = new System.Drawing.Size(212, 20);
            this.txtMatKhau_36_nguyen.TabIndex = 3;
            this.txtMatKhau_36_nguyen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // btnDn_36_nguyen
            // 
            this.btnDn_36_nguyen.Location = new System.Drawing.Point(123, 184);
            this.btnDn_36_nguyen.Name = "btnDn_36_nguyen";
            this.btnDn_36_nguyen.Size = new System.Drawing.Size(98, 39);
            this.btnDn_36_nguyen.TabIndex = 4;
            this.btnDn_36_nguyen.Text = "Đăng nhập";
            this.btnDn_36_nguyen.UseVisualStyleBackColor = true;
            this.btnDn_36_nguyen.Click += new System.EventHandler(this.btnDn_36_nguyen_Click);
            // 
            // btnThoat_36_nguyen
            // 
            this.btnThoat_36_nguyen.Location = new System.Drawing.Point(255, 184);
            this.btnThoat_36_nguyen.Name = "btnThoat_36_nguyen";
            this.btnThoat_36_nguyen.Size = new System.Drawing.Size(98, 39);
            this.btnThoat_36_nguyen.TabIndex = 5;
            this.btnThoat_36_nguyen.Text = "Thoát";
            this.btnThoat_36_nguyen.UseVisualStyleBackColor = true;
            this.btnThoat_36_nguyen.Click += new System.EventHandler(this.btnThoat_36_nguyen_Click);
            // 
            // formDangNhap_36_nguyen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(472, 267);
            this.Controls.Add(this.btnThoat_36_nguyen);
            this.Controls.Add(this.btnDn_36_nguyen);
            this.Controls.Add(this.txtMatKhau_36_nguyen);
            this.Controls.Add(this.txtDN_36_nguyen);
            this.Controls.Add(this.lbMatKhau_36_nguyen);
            this.Controls.Add(this.lbDN_36_nguyen);
            this.Name = "formDangNhap_36_nguyen";
            this.Text = "Form đăng nhập";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbDN_36_nguyen;
        private System.Windows.Forms.Label lbMatKhau_36_nguyen;
        private System.Windows.Forms.TextBox txtDN_36_nguyen;
        private System.Windows.Forms.TextBox txtMatKhau_36_nguyen;
        private System.Windows.Forms.Button btnDn_36_nguyen;
        private System.Windows.Forms.Button btnThoat_36_nguyen;
    }
}