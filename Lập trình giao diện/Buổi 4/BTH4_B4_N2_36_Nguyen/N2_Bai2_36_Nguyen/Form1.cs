using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace N2_Bai2_36_Nguyen
{
    public partial class form_36_Nguyen : Form
    {
        public form_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnKetThuc_36_Nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void txtNhapSo_36_Nguyen_TextChanged(object sender, EventArgs e)
        {
            Control ctrSoNguyen = (Control)sender;
            if (ctrSoNguyen.Text.Length > 0)
                if (!char.IsDigit(ctrSoNguyen.Text[ctrSoNguyen.Text.Length - 1]))
                    this.errorProvider1.SetError(ctrSoNguyen, "Vui lòng nhập số nguyên");
            else
                    this.errorProvider1.Clear();
        }

        private void btnUpdate_36_Nguyen_Click(object sender, EventArgs e)
        {
            try
            {
                int x_36_Nguyen = int.Parse(txtNhapSo_36_Nguyen.Text);
                listBoxSo_36_Nguyen.Items.Add(x_36_Nguyen);
                txtNhapSo_36_Nguyen.Text = "";
                txtNhapSo_36_Nguyen.Focus();
            }
            catch(Exception )
            {
                MessageBox.Show("Chỉ nhập số", "Lỗi");
            }
        }

        private void btnTong_36_Nguyen_Click(object sender, EventArgs e)
        {
            int tong_36_Nguyen = 0;
            foreach (int i in listBoxSo_36_Nguyen.Items)
                tong_36_Nguyen += i;
            MessageBox.Show("Tổng các phần từ là " + tong_36_Nguyen, "Kết quả", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void btnXoaDau_36_nguyen_Click(object sender, EventArgs e)
        {
            listBoxSo_36_Nguyen.Items.RemoveAt(0);
            listBoxSo_36_Nguyen.Items.RemoveAt(listBoxSo_36_Nguyen.Items.Count - 1);
        }
      
        private void btnXoaDangChon_36_Nguyen_Click(object sender, EventArgs e)
        {
            listBoxSo_36_Nguyen.Items.RemoveAt(listBoxSo_36_Nguyen.SelectedIndex);           
        }

        private void btnTang2_36_nguyen_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < listBoxSo_36_Nguyen.Items.Count; i++)
            {
                int value_36_Nguyen = int.Parse(listBoxSo_36_Nguyen.Items[i].ToString());
                value_36_Nguyen += 2;
                listBoxSo_36_Nguyen.Items[i] = value_36_Nguyen;
            }
        }

        private void btnBinhPhuong_36_Nguyen_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < listBoxSo_36_Nguyen.Items.Count; i++)
            {
                int value_36_Nguyen = int.Parse(listBoxSo_36_Nguyen.Items[i].ToString());
                int a_36_Nguyen = (int) Math.Pow(value_36_Nguyen, 2);
                listBoxSo_36_Nguyen.Items[i] = a_36_Nguyen;
            }
        }
        private void brnSoChan_36_Nguyen_Click(object sender, EventArgs e)
        {
            listBoxSo_36_Nguyen.SelectedIndex = -1;
            int n = listBoxSo_36_Nguyen.Items.Count;
            for (int i = 0; i < n; i++)
            {
                if (int.Parse(listBoxSo_36_Nguyen.Items[i].ToString()) % 2 == 0)
                {
                    listBoxSo_36_Nguyen.SelectedIndex = i;
                    break; //chon so dau thi dung
                }
            }
        }

        private void btnSoLe_36_Nguyen_Click(object sender, EventArgs e)
        {
            listBoxSo_36_Nguyen.SelectedIndex = -1;
            int n = listBoxSo_36_Nguyen.Items.Count;
            for (int i = n -1 ; i >=0 ; i--)
            {
                if (int.Parse(listBoxSo_36_Nguyen.Items[i].ToString()) % 2 == 1)
                {
                    listBoxSo_36_Nguyen.SelectedIndex = i;
                    break; //chon so dau thi dung
                }
            }
        }
    }
}
