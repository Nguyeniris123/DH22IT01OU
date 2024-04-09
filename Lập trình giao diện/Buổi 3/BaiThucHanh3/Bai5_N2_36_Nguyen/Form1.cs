using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai5_N2_36_Nguyen
{
    public partial class Bai5_36_Nguyen : Form
    {
        int total = 0;
        public Bai5_36_Nguyen()
        {
            InitializeComponent();
        }

        private void GetPay()
        {
            if (txtname_36_nguyen.Text == "")
                MessageBox.Show("Chưa nhập tên khách hàng!!!", "Lỗi");
            else
            {
                
                if (chkClean_36_Nguyen.Checked)
                    total += 100000;
                if (chkWhitening_36_Nguyen.Checked)
                    total += 120000;
                if (chkXRay_36_nguyen.Checked)
                    total += 200000;
                total += Convert.ToInt32(soTramRang_36_Nguyen.Value) * 80000;
                txtTong_36_nguyen.Text = String.Format("{0}", total);
            }
        }

        private void btnTinhTien_36_Nguyen_Click(object sender, EventArgs e)
        {
            GetPay();
        }

        private void btnThoat_36_Nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
