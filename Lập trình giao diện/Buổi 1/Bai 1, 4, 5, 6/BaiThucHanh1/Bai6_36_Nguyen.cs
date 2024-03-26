using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BaiThucHanh1
{
    public partial class Bai6_36_Nguyen : Form
    {
        public Bai6_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnTinh_Click(object sender, EventArgs e)
        {
            int soNguyen_36_Nguyen = int.Parse(txtSoNguyen_36_Nguyen.Text);
            int sum = 0;
            if (soNguyen_36_Nguyen < 0)
            {
                MessageBox.Show("Bạn nhập số nguyên dương(>0)", "Lỗi");
                return;
            }    
                
            for (int i = 0; i <= soNguyen_36_Nguyen; i++)
            {
                sum = sum + i;
            }
            lbKetQua.Text = string.Format("Tổng các số nguyên từ 1 đến {0} là: {1}", soNguyen_36_Nguyen, sum);
        }
    }
}
