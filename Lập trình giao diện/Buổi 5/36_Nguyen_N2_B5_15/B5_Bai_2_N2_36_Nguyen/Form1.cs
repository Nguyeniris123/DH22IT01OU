using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace B5_Bai_2_N2_36_Nguyen
{
    public partial class FormBai2_36_Nguyen : Form
    {
        public FormBai2_36_Nguyen()
        {
            InitializeComponent();
        }

        private void closeToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void redToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            btnMau_36_Nguyen.BackColor = Color.Red;
        }

        private void greenToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            btnMau_36_Nguyen.BackColor = Color.Green;
        }

        private void blueToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            btnMau_36_Nguyen.BackColor = Color.Blue;
        }
    }
}
