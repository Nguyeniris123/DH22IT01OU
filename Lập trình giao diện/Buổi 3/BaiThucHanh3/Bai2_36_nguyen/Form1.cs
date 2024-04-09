using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai2_36_nguyen
{
    public partial class Bai2_36_Nguyen : Form
    {
        int[] a = new int[5];
        int soPt_36_Nguyen = 0;
        public Bai2_36_Nguyen()
        {
            InitializeComponent();
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnNhap_36_nguyen_Click(object sender, EventArgs e)
        {
            if (soPt_36_Nguyen == 5)
                MessageBox.Show("Mảng đã đầy");
            else
            {
                a[soPt_36_Nguyen] = Convert.ToInt32(this.txtNhap_36_nguyen.Text);
                soPt_36_Nguyen++;
                this.txtNhap_36_nguyen.ResetText();
                this.txtNhap_36_nguyen.Focus();
            }
        }

        private void btnTang_36_Nguyen_Click(object sender, EventArgs e)
        {
            if (soPt_36_Nguyen == 0)
                this.lbKetQua_36_Nguyen.Text = "Mảng rống";
            else
                Array.Sort(a, 0, soPt_36_Nguyen);
            this.lbKetQua_36_Nguyen.Text = "Đã sắp xếp mảng tăng dần";
        }

        private void btnGiam_36_nGUYEN_Click(object sender, EventArgs e)
        {
            if (soPt_36_Nguyen == 0)
                this.lbKetQua_36_Nguyen.Text = "Mảng rống";
            else
                Array.Reverse(a, 0, soPt_36_Nguyen);
            this.lbKetQua_36_Nguyen.Text = "Đã sắp xếp mảng giảm dần";
        }

        private void btnIn_36_Nguyen_Click(object sender, EventArgs e)
        {
            this.lbKetQua_36_Nguyen.Text = "Các phần tử trong mảng là: \n\r";
            for (int i = 0; i < a.Length; i++)
            {
                this.lbKetQua_36_Nguyen.Text += a[i] + "   ";
            }
        }

        private void btnXoa_36_NGUYEN_Click(object sender, EventArgs e)
        {
            lbKetQua_36_Nguyen.Text = "";

        }

        private void btnDung_36_Nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
