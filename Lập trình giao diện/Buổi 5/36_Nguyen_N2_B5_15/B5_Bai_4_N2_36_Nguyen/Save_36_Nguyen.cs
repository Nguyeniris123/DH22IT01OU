using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace B5_Bai_4_N2_36_Nguyen
{
    public partial class SaveDialog_36_Nguyen : Form
    {
        public SaveDialog_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnSave_36_Nguyen_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFile_36_Nguyen = new SaveFileDialog();
            saveFile_36_Nguyen.Title = "Luu File";
            saveFile_36_Nguyen.Filter = "File text|*.txt |File pdf|*.pdf;|All file|*.*";

            if (saveFile_36_Nguyen.ShowDialog() == DialogResult.OK)
            {
                File.WriteAllText(saveFile_36_Nguyen.FileName, richTextBox_36_Nguyen.Text);
            }
            else
            {
                MessageBox.Show("Bạn chưa nhập nội dung", "Lỗi");
            }
        }
    }
}
