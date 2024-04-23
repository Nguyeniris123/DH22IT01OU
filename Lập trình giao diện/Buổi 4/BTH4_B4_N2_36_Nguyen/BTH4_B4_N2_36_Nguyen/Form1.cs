using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BTH4_B4_N2_36_Nguyen
{
    public partial class Form_36_nguyen : Form
    {
        public Form_36_nguyen()
        {
            InitializeComponent();
        }

        private void btnXoa_36_Nguyen_Click(object sender, EventArgs e)
        {
            txtMa_36_Nguyen.Text = "";
            txtTen_36_Nguyen.Text = "";
            listBoxSinhVien_36_Nguyen.Items.Clear();
        }

        private void btnLuu_36_Nguyen_Click(object sender, EventArgs e)
        {
            //int ma_36_Nguyen = int.Parse(txtMa_36_Nguyen.Text);
            //String ten_36_Nguyen = txtTen_36_Nguyen.Text;
            //String s_36_nguyen = ma_36_Nguyen + "\t" + ten_36_Nguyen;
            //listBoxSinhVien_36_Nguyen.Items.Add(s_36_nguyen);

            SinhVien sv = new SinhVien();
            sv.Ma = int.Parse(txtMa_36_Nguyen.Text);
            sv.Ten = txtTen_36_Nguyen.Text;

            // Hiển thị tên sinh viên mới được thêm vào ListBox
            listBoxSinhVien_36_Nguyen.Items.Add(sv.Ma + " - " + sv.Ten);
        }
    }
}
