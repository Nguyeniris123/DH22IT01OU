using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai4_N2_36_Nguyen
{
    public partial class Bai4_36_Nguyen : Form
    {
        int diem = 0;
        public Bai4_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnQuay_36_Nguyen_Click(object sender, EventArgs e)
        {
            int so1_36_Nguyen, so2_36_Nguyen, so3_36_Nguyen;
            int tong_36_nguyen;
            Random rand = new Random();
            so1_36_Nguyen = rand.Next(0, 7);
            so2_36_Nguyen = rand.Next(7);
            so3_36_Nguyen = rand.Next(7);
            lbSo1_36_Nguyen.Text = so1_36_Nguyen.ToString();
            lbSo2_36_Nguyen.Text = so2_36_Nguyen.ToString();
            lbSo3_36_Nguyen.Text = so3_36_Nguyen.ToString();

            tong_36_nguyen = so1_36_Nguyen + so2_36_Nguyen + so3_36_Nguyen;
            
            if (rd310_36_Nguyen.Checked)
            {
                if (tong_36_nguyen >= 3 && tong_36_nguyen <= 10)
                    diem += 10;
                else
                    diem -= 10;
            }
            if (rd1118_36_Nguyen.Checked)
            {
                if (tong_36_nguyen >= 11 && tong_36_nguyen <= 18)
                    diem += 10;
                else
                    diem -= 10;
            }
            lbDiem.Text = String.Format("{0}", diem);
        }
    }
}
