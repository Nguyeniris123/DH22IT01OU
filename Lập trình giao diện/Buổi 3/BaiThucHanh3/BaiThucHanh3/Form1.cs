using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BaiThucHanh3
{
    public partial class Bai1_36_Nguyen : Form
    {
        int[] a_36_nguyen = { 1, 2, 3, 4, 5 };
        public Bai1_36_Nguyen()
        {

            InitializeComponent();
        }

        private void btnIn_36_Nguyen_Click(object sender, EventArgs e)
        {
            this.lbKetQua_36_Nguyen.Text = "Các phần tử trong mảng là: \n\r";
            for (int i=0; i < a_36_nguyen.Length; i++)
            {
                this.lbKetQua_36_Nguyen.Text += a_36_nguyen[i] + "   ";
            }    
        }

        private void btnXoa_36_nguyen_Click(object sender, EventArgs e)
        {
            this.lbKetQua_36_Nguyen.Text = "";
        }

        private void btnDung_36_nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
