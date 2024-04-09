using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai3_N2_36_Nguyen
{
    public partial class Bai3_36_Nguyen : Form
    {
        const int sodong_36_nguyen = 4;
        const int socot_36_nguyen = 3;
        int[,] Arr2 = new int[sodong_36_nguyen, socot_36_nguyen];

        public Bai3_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnXoa_36_Nguyen_Click(object sender, EventArgs e)
        {
            lbKetQua_36_Nguyen.Text = "";
        }

        private void btnDung_36_nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnNhap_36_Nguyen_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < sodong_36_nguyen; i++)
                for (int j = 0; j < socot_36_nguyen; j++)
                    Arr2[i, j] = i - j;
            MessageBox.Show("Đã nhập mảng thành công");
        }

        private void btnIn_36_Nguyen_Click(object sender, EventArgs e)
        {
            string mang = "Mảng\n";
            for (int i = 0; i < sodong_36_nguyen; i++)
            {
                for (int j = 0; j < socot_36_nguyen; j++)
                {
                    mang += Arr2[i, j] + "\t ";
                }
                mang += "\n ";
            }              
            lbKetQua_36_Nguyen.Text = mang;
        }

        private void btnSap_36_Nguyen_Click(object sender, EventArgs e)
        {            
            for (int i = 0; i < sodong_36_nguyen; i++)
            {
                for (int j = 0; j < socot_36_nguyen - 1; j++)
                {
                    for (int k = 0; k < socot_36_nguyen - j - 1; k++)
                    {
                        if (Arr2[i, k] > Arr2[i, k + 1])
                        {
                            int tmp = Arr2[i, k];
                            Arr2[i, k] = Arr2[i, k + 1];
                            Arr2[i, k + 1] = tmp;
                        }
                    }
                }
            }

            StringBuilder arrString = new StringBuilder("Mảng đã sắp xếp\n");
            for (int i = 0; i < sodong_36_nguyen; i++)
            {
                for (int j = 0; j < socot_36_nguyen; j++)
                {
                    if (j > 0)
                        arrString.Append("\t");
                    arrString.Append(Arr2[i, j]);
                }
                arrString.Append("\n");
            }        
            MessageBox.Show("Sắp xếp mảng thành công");
        }
    }
}
