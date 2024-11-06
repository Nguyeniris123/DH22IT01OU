namespace Vigenere
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
            this.label1 = new System.Windows.Forms.Label();
            this.btnChuyenVigenere = new System.Windows.Forms.Button();
            this.BtnDichVigenere = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.txtMaVigenere = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtVigenere = new System.Windows.Forms.TextBox();
            this.KeyVigenere = new System.Windows.Forms.TextBox();
            this.groupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
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
            // btnChuyenVigenere
            // 
            this.btnChuyenVigenere.Image = ((System.Drawing.Image)(resources.GetObject("btnChuyenVigenere.Image")));
            this.btnChuyenVigenere.Location = new System.Drawing.Point(389, 127);
            this.btnChuyenVigenere.Name = "btnChuyenVigenere";
            this.btnChuyenVigenere.Size = new System.Drawing.Size(84, 43);
            this.btnChuyenVigenere.TabIndex = 12;
            this.btnChuyenVigenere.UseVisualStyleBackColor = true;
            this.btnChuyenVigenere.Click += new System.EventHandler(this.btnChuyenVigenere_Click);
            // 
            // BtnDichVigenere
            // 
            this.BtnDichVigenere.Location = new System.Drawing.Point(389, 192);
            this.BtnDichVigenere.Name = "BtnDichVigenere";
            this.BtnDichVigenere.Size = new System.Drawing.Size(84, 42);
            this.BtnDichVigenere.TabIndex = 11;
            this.BtnDichVigenere.UseVisualStyleBackColor = true;
            this.BtnDichVigenere.Click += new System.EventHandler(this.BtnDichVigenere_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.txtMaVigenere);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.Location = new System.Drawing.Point(483, 58);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(372, 283);
            this.groupBox2.TabIndex = 10;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Văn bản mã hóa";
            // 
            // txtMaVigenere
            // 
            this.txtMaVigenere.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtMaVigenere.Location = new System.Drawing.Point(21, 27);
            this.txtMaVigenere.Multiline = true;
            this.txtMaVigenere.Name = "txtMaVigenere";
            this.txtMaVigenere.Size = new System.Drawing.Size(342, 216);
            this.txtMaVigenere.TabIndex = 0;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtVigenere);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(3, 58);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(380, 283);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Văn bản";
            // 
            // txtVigenere
            // 
            this.txtVigenere.CharacterCasing = System.Windows.Forms.CharacterCasing.Upper;
            this.txtVigenere.Location = new System.Drawing.Point(21, 28);
            this.txtVigenere.Multiline = true;
            this.txtVigenere.Name = "txtVigenere";
            this.txtVigenere.Size = new System.Drawing.Size(342, 216);
            this.txtVigenere.TabIndex = 0;
            this.txtVigenere.Text = "HELLOWORLD";
            // 
            // KeyVigenere
            // 
            this.KeyVigenere.Location = new System.Drawing.Point(398, 45);
            this.KeyVigenere.Name = "KeyVigenere";
            this.KeyVigenere.Size = new System.Drawing.Size(66, 20);
            this.KeyVigenere.TabIndex = 14;
            this.KeyVigenere.Text = "ABC";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(864, 348);
            this.Controls.Add(this.KeyVigenere);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnChuyenVigenere);
            this.Controls.Add(this.BtnDichVigenere);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Vigenere ";
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btnChuyenVigenere;
        private System.Windows.Forms.Button BtnDichVigenere;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.TextBox txtMaVigenere;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtVigenere;
        private System.Windows.Forms.TextBox KeyVigenere;
    }
}

