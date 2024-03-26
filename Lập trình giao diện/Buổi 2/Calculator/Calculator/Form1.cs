using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1_36_nguyen : Form
    {
        public Form1_36_nguyen()
        {
            InitializeComponent();
        }

        private void btTinh_36_nguyen_Click(object sender, EventArgs e)
        {
            try
            {
                int a_36_nguyen = checked(int.Parse(txtSo1_36_nguyen.Text));
                int b_36_nguyen = checked(int.Parse(txtSo2_36_nguyen.Text));
                if (rdCong_36_nguyen.Checked)
                    txtKetQua_36_nguyen.Text = String.Format("{0}", checked(a_36_nguyen + b_36_nguyen));
                else if (rdTru_36_nguyen.Checked)
                    txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen - b_36_nguyen);
                else if (rdNhan_36_Nhan.Checked)
                    txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen * b_36_nguyen);
                else if (rdChia_36_nguyen.Checked)
                {
                    if (b_36_nguyen == 0)
                        throw new DivideByZeroException("Số chia phải khác 0");
                    txtKetQua_36_nguyen.Text = String.Format("{0:0.00}", (double) a_36_nguyen / b_36_nguyen);

                }
                else
                {
                    if (b_36_nguyen == 0)
                        throw new DivideByZeroException("Số chia phải khác 0");
                    txtKetQua_36_nguyen.Text = String.Format("{0}", a_36_nguyen % b_36_nguyen);
                }                   
            }
            catch (FormatException) {
                txtKetQua_36_nguyen.Text = "Bạn phải nhập 2 số";
            }
            catch (DivideByZeroException ex) {
                txtKetQua_36_nguyen.Text = ex.Message;
            }
            catch (OverflowException) {
                txtKetQua_36_nguyen.Text = "Không thể xử lí số quá lớn";
            }
        }
    }
}   
