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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnChia_36_nguyen_Click(object sender, EventArgs e)
        {
            try
            {
                int so1_36_nguyen = int.Parse(txtSo1_36_nguyen.Text);
                int so2_36_nguyen = int.Parse(txtSo2_36_nguyen.Text);
                if (so1_36_nguyen > 10 || so1_36_nguyen < 0 || so2_36_nguyen > 10 || so2_36_nguyen < 0)
                        throw new Exception("Điểm phải nằm trong khoảng từ 0 đến 10");
                int kq = so1_36_nguyen / so2_36_nguyen;
                //double kq = (double) so1_36_nguyen / so2_36_nguyen;

                txtKetQua_36_nguyen.Text = kq.ToString();
            }
            catch (FormatException)
            {
                MessageBox.Show("Bạn phải nhập số");
            }
            catch (DivideByZeroException ex)
            {
                MessageBox.Show(ex.Message, "Lỗi chia cho 0");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
    }
}
