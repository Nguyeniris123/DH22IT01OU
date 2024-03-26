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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void btnSoSanh_36_Nguyen_Click(object sender, EventArgs e)
        {
            int soA_36_Nguyen = int.Parse(txtSoA_36_Nguyen.Text);
            int soB_36_Nguyen = int.Parse(txtSoB_36_Nguyen.Text);

            if (soA_36_Nguyen > soB_36_Nguyen)
            {
                txtKetQua_36_Nguyen.Text = soA_36_Nguyen.ToString();
                //MessageBox.Show("Số A lớn hơn số B");
                MessageBox.Show(string.Format("Số {0} lớn hơn số {1}", soA_36_Nguyen, soB_36_Nguyen));
            }

            else if (soA_36_Nguyen < soB_36_Nguyen)
            {
                txtKetQua_36_Nguyen.Text = soA_36_Nguyen.ToString();
                //MessageBox.Show("Số A nhỏ hơn số B");
                MessageBox.Show(string.Format("Số {0} nhỏ hơn số {1}", soA_36_Nguyen, soB_36_Nguyen));
            }

            else
            {
                txtKetQua_36_Nguyen.Text = "A và B bằng nhau";
                //MessageBox.Show("Số A bằng số B");
                MessageBox.Show(string.Format("Số {0} bằng số {1}", soA_36_Nguyen, soB_36_Nguyen));
            }
        }

        private void btnHuy_36_Nguyen_Click(object sender, EventArgs e)
        {
            txtSoA_36_Nguyen.Text = "";
            txtSoB_36_Nguyen.Text = "";
            txtKetQua_36_Nguyen.Text = "";           
        }
    }
}
