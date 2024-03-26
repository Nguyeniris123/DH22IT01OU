using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDangNhap36_nguyen_Click(object sender, EventArgs e)
        {
            string thongbao_36_nguyen = "Tên đăng nhập là: ";
            thongbao_36_nguyen += this.txtTen_36_nguyen.Text;
            thongbao_36_nguyen += "\n\rMật khẩu là: ";
            thongbao_36_nguyen += this.txtMk_36_nguyen.Text;
            if (this.cbGhiNho_36_nguyen.Checked == true)
            {
                thongbao_36_nguyen += "\n\rBạn có ghi nhớ";

            }
            MessageBox.Show(thongbao_36_nguyen, "Thông báo");
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            this.txtTen_36_nguyen.Clear();
            this.txtTen_36_nguyen.Focus();
        }

        private void btnDung_Click(object sender, EventArgs e)
        {
            DialogResult traLoi;
            traLoi = MessageBox.Show("Chắc không?", "Trả lời", MessageBoxButtons.OKCancel, MessageBoxIcon.Question);
            if (traLoi == DialogResult.OK) Application.Exit();
        }
    }
}
