using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bai4
{
    public partial class formDangNhap_36_nguyen : Form
    {
        public formDangNhap_36_nguyen()
        {
            InitializeComponent();
        }

        private void btnDn_36_nguyen_Click(object sender, EventArgs e)
        {
            if (txtDN_36_nguyen.Text == "nguyen" && txtMatKhau_36_nguyen.Text == "36")
            {
                this.Hide();
                manHinhChinh_36_nguyen frmMain = new manHinhChinh_36_nguyen();
                frmMain.ShowDialog();
                this.Close();
            }
            else
            {
                MessageBox.Show("Không đúng tên người dùng / mật khẩu!!!");
                txtDN_36_nguyen.Focus();
            }    
                
        }

        private void btnThoat_36_nguyen_Click(object sender, EventArgs e)
        {
            DialogResult traLoi;
            traLoi = MessageBox.Show("Chắc không?", "Trả lời", MessageBoxButtons.OKCancel, MessageBoxIcon.Question);
            if (traLoi == DialogResult.OK) Application.Exit();
        }
    }
}
