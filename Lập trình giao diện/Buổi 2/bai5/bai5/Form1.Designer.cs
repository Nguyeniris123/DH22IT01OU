
namespace bai5
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
            this.lbSo1_36_nguyen = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lbSo2_36_nguyen = new System.Windows.Forms.Label();
            this.txtSo1_36_nguyen = new System.Windows.Forms.TextBox();
            this.txtSo2_36_nguyen = new System.Windows.Forms.TextBox();
            this.lbKetQua_36_nguyen = new System.Windows.Forms.Label();
            this.txtKetQua_36_nguyen = new System.Windows.Forms.TextBox();
            this.btnDong = new System.Windows.Forms.Button();
            this.rdCong = new System.Windows.Forms.RadioButton();
            this.rdTru = new System.Windows.Forms.RadioButton();
            this.rdNhan = new System.Windows.Forms.RadioButton();
            this.rdChia = new System.Windows.Forms.RadioButton();
            this.SuspendLayout();
            // 
            // lbSo1_36_nguyen
            // 
            this.lbSo1_36_nguyen.AutoSize = true;
            this.lbSo1_36_nguyen.Location = new System.Drawing.Point(91, 47);
            this.lbSo1_36_nguyen.Name = "lbSo1_36_nguyen";
            this.lbSo1_36_nguyen.Size = new System.Drawing.Size(53, 13);
            this.lbSo1_36_nguyen.TabIndex = 0;
            this.lbSo1_36_nguyen.Text = "Số thứ 1: ";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(389, 39);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(0, 13);
            this.label2.TabIndex = 1;
            // 
            // lbSo2_36_nguyen
            // 
            this.lbSo2_36_nguyen.AutoSize = true;
            this.lbSo2_36_nguyen.Location = new System.Drawing.Point(371, 47);
            this.lbSo2_36_nguyen.Name = "lbSo2_36_nguyen";
            this.lbSo2_36_nguyen.Size = new System.Drawing.Size(50, 13);
            this.lbSo2_36_nguyen.TabIndex = 2;
            this.lbSo2_36_nguyen.Text = "Số thứ 2:";
            // 
            // txtSo1_36_nguyen
            // 
            this.txtSo1_36_nguyen.Location = new System.Drawing.Point(150, 44);
            this.txtSo1_36_nguyen.Name = "txtSo1_36_nguyen";
            this.txtSo1_36_nguyen.Size = new System.Drawing.Size(88, 20);
            this.txtSo1_36_nguyen.TabIndex = 3;
            this.txtSo1_36_nguyen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // txtSo2_36_nguyen
            // 
            this.txtSo2_36_nguyen.Location = new System.Drawing.Point(437, 44);
            this.txtSo2_36_nguyen.Name = "txtSo2_36_nguyen";
            this.txtSo2_36_nguyen.Size = new System.Drawing.Size(88, 20);
            this.txtSo2_36_nguyen.TabIndex = 4;
            this.txtSo2_36_nguyen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // lbKetQua_36_nguyen
            // 
            this.lbKetQua_36_nguyen.AutoSize = true;
            this.lbKetQua_36_nguyen.Location = new System.Drawing.Point(91, 228);
            this.lbKetQua_36_nguyen.Name = "lbKetQua_36_nguyen";
            this.lbKetQua_36_nguyen.Size = new System.Drawing.Size(50, 13);
            this.lbKetQua_36_nguyen.TabIndex = 5;
            this.lbKetQua_36_nguyen.Text = "Kết quả: ";
            // 
            // txtKetQua_36_nguyen
            // 
            this.txtKetQua_36_nguyen.Location = new System.Drawing.Point(167, 225);
            this.txtKetQua_36_nguyen.Name = "txtKetQua_36_nguyen";
            this.txtKetQua_36_nguyen.ReadOnly = true;
            this.txtKetQua_36_nguyen.Size = new System.Drawing.Size(254, 20);
            this.txtKetQua_36_nguyen.TabIndex = 6;
            this.txtKetQua_36_nguyen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // btnDong
            // 
            this.btnDong.Location = new System.Drawing.Point(447, 225);
            this.btnDong.Name = "btnDong";
            this.btnDong.Size = new System.Drawing.Size(105, 27);
            this.btnDong.TabIndex = 7;
            this.btnDong.Text = "Đóng";
            this.btnDong.UseVisualStyleBackColor = true;
            this.btnDong.Click += new System.EventHandler(this.btnDong_Click);
            // 
            // rdCong
            // 
            this.rdCong.AutoSize = true;
            this.rdCong.Location = new System.Drawing.Point(167, 146);
            this.rdCong.Name = "rdCong";
            this.rdCong.Size = new System.Drawing.Size(31, 17);
            this.rdCong.TabIndex = 8;
            this.rdCong.TabStop = true;
            this.rdCong.Text = "+";
            this.rdCong.UseVisualStyleBackColor = true;
            this.rdCong.CheckedChanged += new System.EventHandler(this.rdCong_CheckedChanged);
            // 
            // rdTru
            // 
            this.rdTru.AutoSize = true;
            this.rdTru.Location = new System.Drawing.Point(265, 146);
            this.rdTru.Name = "rdTru";
            this.rdTru.Size = new System.Drawing.Size(28, 17);
            this.rdTru.TabIndex = 9;
            this.rdTru.TabStop = true;
            this.rdTru.Text = "-";
            this.rdTru.UseVisualStyleBackColor = true;
            this.rdTru.CheckedChanged += new System.EventHandler(this.rdTru_CheckedChanged);
            // 
            // rdNhan
            // 
            this.rdNhan.AutoSize = true;
            this.rdNhan.Location = new System.Drawing.Point(359, 146);
            this.rdNhan.Name = "rdNhan";
            this.rdNhan.Size = new System.Drawing.Size(30, 17);
            this.rdNhan.TabIndex = 10;
            this.rdNhan.TabStop = true;
            this.rdNhan.Text = "x";
            this.rdNhan.UseVisualStyleBackColor = true;
            this.rdNhan.CheckedChanged += new System.EventHandler(this.rdNhan_CheckedChanged);
            // 
            // rdChia
            // 
            this.rdChia.AutoSize = true;
            this.rdChia.Location = new System.Drawing.Point(466, 146);
            this.rdChia.Name = "rdChia";
            this.rdChia.Size = new System.Drawing.Size(30, 17);
            this.rdChia.TabIndex = 11;
            this.rdChia.TabStop = true;
            this.rdChia.Text = "/";
            this.rdChia.UseVisualStyleBackColor = true;
            this.rdChia.CheckedChanged += new System.EventHandler(this.rdChia_CheckedChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(648, 291);
            this.Controls.Add(this.rdChia);
            this.Controls.Add(this.rdNhan);
            this.Controls.Add(this.rdTru);
            this.Controls.Add(this.rdCong);
            this.Controls.Add(this.btnDong);
            this.Controls.Add(this.txtKetQua_36_nguyen);
            this.Controls.Add(this.lbKetQua_36_nguyen);
            this.Controls.Add(this.txtSo2_36_nguyen);
            this.Controls.Add(this.txtSo1_36_nguyen);
            this.Controls.Add(this.lbSo2_36_nguyen);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.lbSo1_36_nguyen);
            this.Name = "Form1";
            this.Text = "C2: Các phép tính";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbSo1_36_nguyen;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label lbSo2_36_nguyen;
        private System.Windows.Forms.TextBox txtSo1_36_nguyen;
        private System.Windows.Forms.TextBox txtSo2_36_nguyen;
        private System.Windows.Forms.Label lbKetQua_36_nguyen;
        private System.Windows.Forms.TextBox txtKetQua_36_nguyen;
        private System.Windows.Forms.Button btnDong;
        private System.Windows.Forms.RadioButton rdCong;
        private System.Windows.Forms.RadioButton rdTru;
        private System.Windows.Forms.RadioButton rdNhan;
        private System.Windows.Forms.RadioButton rdChia;
    }
}

