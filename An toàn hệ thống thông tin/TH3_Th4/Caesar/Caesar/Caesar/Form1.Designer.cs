namespace Caesar
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.cbxKeyCaesar = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btnChuyenCaesar = new System.Windows.Forms.Button();
            this.BtnDichCaesar = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.txtMaCaesar = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtCaesar = new System.Windows.Forms.TextBox();
            this.groupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // cbxKeyCaesar
            // 
            this.cbxKeyCaesar.BackColor = System.Drawing.Color.WhiteSmoke;
            this.cbxKeyCaesar.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.cbxKeyCaesar.FormattingEnabled = true;
            this.cbxKeyCaesar.Items.AddRange(new object[] {
            "1",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9",
            "10",
            "11",
            "12",
            "13",
            "14",
            "15",
            "16",
            "17",
            "18",
            "19",
            "20",
            "21",
            "22",
            "23",
            "24",
            "25"});
            this.cbxKeyCaesar.Location = new System.Drawing.Point(412, 45);
            this.cbxKeyCaesar.Name = "cbxKeyCaesar";
            this.cbxKeyCaesar.Size = new System.Drawing.Size(44, 26);
            this.cbxKeyCaesar.TabIndex = 14;
            this.cbxKeyCaesar.Text = "3";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(416, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 20);
            this.label1.TabIndex = 13;
            this.label1.Text = "Key";
            // 
            // btnChuyenCaesar
            // 
            this.btnChuyenCaesar.Image = ((System.Drawing.Image)(resources.GetObject("btnChuyenCaesar.Image")));
            this.btnChuyenCaesar.Location = new System.Drawing.Point(389, 127);
            this.btnChuyenCaesar.Name = "btnChuyenCaesar";
            this.btnChuyenCaesar.Size = new System.Drawing.Size(84, 43);
            this.btnChuyenCaesar.TabIndex = 12;
            this.btnChuyenCaesar.UseVisualStyleBackColor = true;
            // 
            // BtnDichCaesar
            // 
            this.BtnDichCaesar.Image = ((System.Drawing.Image)(resources.GetObject("BtnDichCaesar.Image")));
            this.BtnDichCaesar.Location = new System.Drawing.Point(389, 192);
            this.BtnDichCaesar.Name = "BtnDichCaesar";
            this.BtnDichCaesar.Size = new System.Drawing.Size(84, 42);
            this.BtnDichCaesar.TabIndex = 11;
            this.BtnDichCaesar.UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.txtMaCaesar);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.Location = new System.Drawing.Point(483, 58);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(372, 283);
            this.groupBox2.TabIndex = 10;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Văn bản mã hóa";
            // 
            // txtMaCaesar
            // 
            this.txtMaCaesar.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtMaCaesar.Location = new System.Drawing.Point(21, 27);
            this.txtMaCaesar.Multiline = true;
            this.txtMaCaesar.Name = "txtMaCaesar";
            this.txtMaCaesar.Size = new System.Drawing.Size(342, 216);
            this.txtMaCaesar.TabIndex = 0;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtCaesar);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(3, 58);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(380, 283);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Văn bản";
            // 
            // txtCaesar
            // 
            this.txtCaesar.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtCaesar.Location = new System.Drawing.Point(21, 28);
            this.txtCaesar.Multiline = true;
            this.txtCaesar.Name = "txtCaesar";
            this.txtCaesar.Size = new System.Drawing.Size(342, 216);
            this.txtCaesar.TabIndex = 0;
            this.txtCaesar.Text = "HELLOWORLD";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(864, 348);
            this.Controls.Add(this.cbxKeyCaesar);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnChuyenCaesar);
            this.Controls.Add(this.BtnDichCaesar);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Caesar";
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox cbxKeyCaesar;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btnChuyenCaesar;
        private System.Windows.Forms.Button BtnDichCaesar;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.TextBox txtMaCaesar;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtCaesar;
    }
}

