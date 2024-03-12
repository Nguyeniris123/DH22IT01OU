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
    public partial class Bai4_36_Nguyen : Form
    {
        public Bai4_36_Nguyen()
        {
            InitializeComponent();
        }

        private void button1_36_nguyen_Click(object sender, EventArgs e)
        {
            int a_36_Nguyen = int.Parse(textBox1_36_Nguyen.Text);
            int b_36_Nguyen = int.Parse(textBox2_36_Nguyen.Text);
            label2_36_Nguyen.Text = String.Format("Kết quả: {0}", a_36_Nguyen + b_36_Nguyen);
        }
    }
}
