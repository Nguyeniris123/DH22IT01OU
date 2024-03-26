using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CacPhepTinh
{
    public partial class Form1_36_nguyen : Form
    {
        public Form1_36_nguyen()
        {
            InitializeComponent();
        }

        private void txtKetQua_36_nguyen_TextChanged(object sender, EventArgs e)
        {

        }

        private void btCong_36_nguyen_Click(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = string.Format("{0}", a_36_nguyen + b_36_nguyen);

        }

        private void btTru_36_nguyen_Click(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = string.Format("{0}", a_36_nguyen - b_36_nguyen);
        }

        private void btNhan_36_nguyen_Click(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            txtKetQua_36_nguyen.Text = string.Format("{0}", a_36_nguyen * b_36_nguyen);
        }

        private void btChia_36_nguyen_Click(object sender, EventArgs e)
        {
            int a_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
            int b_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
            if (b_36_nguyen != 0) 
            {
                txtKetQua_36_nguyen.Text = string.Format("{0:0.00}", (double) a_36_nguyen / b_36_nguyen);
            }
            else
            {
                txtKetQua_36_nguyen.Text = "Số chia phải khác 0";
            }
        }

        private void btDong_36_nguyen_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
