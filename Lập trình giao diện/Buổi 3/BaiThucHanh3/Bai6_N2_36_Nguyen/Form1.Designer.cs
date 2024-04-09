
namespace Bai6_N2_36_Nguyen
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
            this.checkedListTrai_36_Nguyen = new System.Windows.Forms.CheckedListBox();
            this.checkedListBoxPhai_36_Nguyen = new System.Windows.Forms.CheckedListBox();
            this.btnAdd_36_Nguyen = new System.Windows.Forms.Button();
            this.btnDele_36_Nguyen = new System.Windows.Forms.Button();
            this.btnDeleAll_36_Nguyen = new System.Windows.Forms.Button();
            this.btnAddAll_36_nguyen = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // checkedListTrai_36_Nguyen
            // 
            this.checkedListTrai_36_Nguyen.FormattingEnabled = true;
            this.checkedListTrai_36_Nguyen.Items.AddRange(new object[] {
            "nguyen",
            "minh",
            "Tin",
            "Dan",
            "Hieu"});
            this.checkedListTrai_36_Nguyen.Location = new System.Drawing.Point(23, 29);
            this.checkedListTrai_36_Nguyen.Name = "checkedListTrai_36_Nguyen";
            this.checkedListTrai_36_Nguyen.Size = new System.Drawing.Size(143, 199);
            this.checkedListTrai_36_Nguyen.TabIndex = 0;
            // 
            // checkedListBoxPhai_36_Nguyen
            // 
            this.checkedListBoxPhai_36_Nguyen.FormattingEnabled = true;
            this.checkedListBoxPhai_36_Nguyen.Items.AddRange(new object[] {
            "Phuc"});
            this.checkedListBoxPhai_36_Nguyen.Location = new System.Drawing.Point(456, 29);
            this.checkedListBoxPhai_36_Nguyen.Name = "checkedListBoxPhai_36_Nguyen";
            this.checkedListBoxPhai_36_Nguyen.Size = new System.Drawing.Size(143, 199);
            this.checkedListBoxPhai_36_Nguyen.TabIndex = 1;
            // 
            // btnAdd_36_Nguyen
            // 
            this.btnAdd_36_Nguyen.Location = new System.Drawing.Point(269, 29);
            this.btnAdd_36_Nguyen.Name = "btnAdd_36_Nguyen";
            this.btnAdd_36_Nguyen.Size = new System.Drawing.Size(89, 33);
            this.btnAdd_36_Nguyen.TabIndex = 2;
            this.btnAdd_36_Nguyen.Text = ">";
            this.btnAdd_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnAdd_36_Nguyen.Click += new System.EventHandler(this.btnAdd_36_Nguyen_Click);
            // 
            // btnDele_36_Nguyen
            // 
            this.btnDele_36_Nguyen.Location = new System.Drawing.Point(270, 140);
            this.btnDele_36_Nguyen.Name = "btnDele_36_Nguyen";
            this.btnDele_36_Nguyen.Size = new System.Drawing.Size(89, 33);
            this.btnDele_36_Nguyen.TabIndex = 3;
            this.btnDele_36_Nguyen.Text = "<";
            this.btnDele_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnDele_36_Nguyen.Click += new System.EventHandler(this.btnDele_36_Nguyen_Click);
            // 
            // btnDeleAll_36_Nguyen
            // 
            this.btnDeleAll_36_Nguyen.Location = new System.Drawing.Point(270, 195);
            this.btnDeleAll_36_Nguyen.Name = "btnDeleAll_36_Nguyen";
            this.btnDeleAll_36_Nguyen.Size = new System.Drawing.Size(89, 33);
            this.btnDeleAll_36_Nguyen.TabIndex = 4;
            this.btnDeleAll_36_Nguyen.Text = "<<";
            this.btnDeleAll_36_Nguyen.UseVisualStyleBackColor = true;
            this.btnDeleAll_36_Nguyen.Click += new System.EventHandler(this.btnDeleAll_36_Nguyen_Click);
            // 
            // btnAddAll_36_nguyen
            // 
            this.btnAddAll_36_nguyen.Location = new System.Drawing.Point(270, 82);
            this.btnAddAll_36_nguyen.Name = "btnAddAll_36_nguyen";
            this.btnAddAll_36_nguyen.Size = new System.Drawing.Size(89, 33);
            this.btnAddAll_36_nguyen.TabIndex = 5;
            this.btnAddAll_36_nguyen.Text = ">>";
            this.btnAddAll_36_nguyen.UseVisualStyleBackColor = true;
            this.btnAddAll_36_nguyen.Click += new System.EventHandler(this.btnAddAll_36_nguyen_Click);
            // 
            // Bai6_36_Nguyen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(628, 292);
            this.Controls.Add(this.btnAddAll_36_nguyen);
            this.Controls.Add(this.btnDeleAll_36_Nguyen);
            this.Controls.Add(this.btnDele_36_Nguyen);
            this.Controls.Add(this.btnAdd_36_Nguyen);
            this.Controls.Add(this.checkedListBoxPhai_36_Nguyen);
            this.Controls.Add(this.checkedListTrai_36_Nguyen);
            this.Name = "Bai6_36_Nguyen";
            this.Text = "CheckListBox";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.CheckedListBox checkedListTrai_36_Nguyen;
        private System.Windows.Forms.CheckedListBox checkedListBoxPhai_36_Nguyen;
        private System.Windows.Forms.Button btnAdd_36_Nguyen;
        private System.Windows.Forms.Button btnDele_36_Nguyen;
        private System.Windows.Forms.Button btnDeleAll_36_Nguyen;
        private System.Windows.Forms.Button btnAddAll_36_nguyen;
    }
}

