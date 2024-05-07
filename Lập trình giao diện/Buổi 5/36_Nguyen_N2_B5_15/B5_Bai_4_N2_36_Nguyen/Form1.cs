using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace B5_Bai_4_N2_36_Nguyen
{
    public partial class FormBai4_36_Nguyen : Form
    {
        public FormBai4_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnOpen_36_Nguyen_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFile_36_Nguyen = new OpenFileDialog();
            openFile_36_Nguyen.Title = "Mo File";
            openFile_36_Nguyen.Filter = "File anh|*.jpg;*.png;|All file|*.*";

            if (openFile_36_Nguyen.ShowDialog() == DialogResult.OK)
            {
                pictureBox_36_Nguyen.Image = Image.FromFile(openFile_36_Nguyen.FileName);
            }
        }
    }
}
