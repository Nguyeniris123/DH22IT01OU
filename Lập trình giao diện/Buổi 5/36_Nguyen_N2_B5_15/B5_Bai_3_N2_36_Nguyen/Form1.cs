using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace B5_Bai_3_N2_36_Nguyen
{
    public partial class FormBai3_36_nguyen : Form
    {
        public FormBai3_36_nguyen()
        {
            InitializeComponent();
        }

        private void exitToolStripMenuItem36_nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void drawByMouseToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            this.Hide();
            DrawByMouse_36_Nguyen mouseForm_36_Nguyen = new DrawByMouse_36_Nguyen();
            mouseForm_36_Nguyen.ShowDialog();
            this.Close();
        }

        private void drawByTextToolStripMenuItem_36_Nguyen_Click(object sender, EventArgs e)
        {
            this.Hide();
            DrawByText_36_Nguyen textForm_36_Nguyen = new DrawByText_36_Nguyen();
            textForm_36_Nguyen.ShowDialog();
            this.Close();
        }
    }
}
