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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Break_36_Nguyen_Click(object sender, EventArgs e)
        {
            int sum = 0;
            for (int i = 1; i<=10; i++)
            {
                if (i % 2 == 0) break;
                sum += i;
            }   
            textBox1_36_Nguyen.Text = String.Format("{0}",sum);
        }

        private void Continue_36_Nguyen_Click(object sender, EventArgs e)
        {
            {
                int sum = 0;
                for (int i = 1; i <= 10; i++)
                {
                    if (i % 2 == 0) continue;
                    sum += i;
                }
                textBox1_36_Nguyen.Text = String.Format("{0}", sum);
            }
        }

        private void Return_36_Nguyen_Click(object sender, EventArgs e)
        {
            {
                int sum = 0;
                for (int i = 1; i <= 10; i++)
                {
                    if (i % 2 == 0) return;
                    sum += i;
                }
                textBox1_36_Nguyen.Text = String.Format("{0}", sum);
            }
        }
    }
}
