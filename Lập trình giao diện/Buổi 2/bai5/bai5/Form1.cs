using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bai5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rdCong_CheckedChanged(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen + b_36_nguyen);
        }

        private void rdTru_CheckedChanged(object sender, EventArgs e)
        {

            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen - b_36_nguyen);
        }

        private void rdNhan_CheckedChanged(object sender, EventArgs e)
        {

            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen * b_36_nguyen);
        }

        private void rdChia_CheckedChanged(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            if (b_36_nguyen != 0)
                txtKetQua_36_nguyen.Text = String.Format("{0:0.00}", (double) a_36_nguyen / b_36_nguyen);   
            else txtKetQua_36_nguyen.Text = "Số chia phải khác 0";
        }

        private void btnDong_Click(object sender, EventArgs e)
        {
            DialogResult traLoi;
            traLoi = MessageBox.Show("Chắc không?", "Trả lời", MessageBoxButtons.OKCancel, MessageBoxIcon.Question);
            if (traLoi == DialogResult.OK) Application.Exit();
        }
    }
}
