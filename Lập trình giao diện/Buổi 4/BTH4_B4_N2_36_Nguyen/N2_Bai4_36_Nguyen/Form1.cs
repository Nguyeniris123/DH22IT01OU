using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace N2_Bai4_36_Nguyen
{
    public partial class Form_36_Nguyen : Form
    {
        public Form_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnThopat_36_Nguyen_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void txtSoDienThoai_36_Nguyen_TextChanged(object sender, EventArgs e)
        {
            Control ctrSoNguyen = (Control)sender;
            if (ctrSoNguyen.Text.Length > 0)
                if (!char.IsDigit(ctrSoNguyen.Text[ctrSoNguyen.Text.Length - 1]))
                    this.errorProvider_36_Nguyen.SetError(ctrSoNguyen, "Vui lòng nhập số nguyên");
                else
                    this.errorProvider_36_Nguyen.Clear();
        }

        private void btnThem_36_Nguyen_Click(object sender, EventArgs e)
        {
            
            try
            {
                int a = int.Parse(txtSoDienThoai_36_Nguyen.Text);
                ListViewItem lvi_36_Nguyen = listViewNhanVien_36_Nguyen.Items.Add(txtHoTen_36_Nguyen.Text);
                lvi_36_Nguyen.SubItems.Add(dateTimePickerNgaaySInh_36_Nguyen.Value.ToShortDateString());
                lvi_36_Nguyen.SubItems.Add(txtDiaChi_36_Nguyen.Text);
                lvi_36_Nguyen.SubItems.Add(txtSoDienThoai_36_Nguyen.Text);
            }
            catch (Exception)
            {
                MessageBox.Show("Chỉ nhập số", "Lỗi");
            }         
        }

        private void btnSua_36_Nguyen_Click(object sender, EventArgs e)
        {
            if (listViewNhanVien_36_Nguyen.SelectedItems.Count > 0)
            {
                listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[0].Text = txtHoTen_36_Nguyen.Text;
                listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[1].Text = dateTimePickerNgaaySInh_36_Nguyen.Value.ToShortDateString();             
                listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[3].Text = txtDiaChi_36_Nguyen.Text;
                listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[2].Text = txtSoDienThoai_36_Nguyen.Text;
            }
        }


        private void btnXoa_36_Nguyen_Click(object sender, EventArgs e)
        {
            if (listViewNhanVien_36_Nguyen.SelectedItems.Count > 0)
            {
                listViewNhanVien_36_Nguyen.Items.Remove(listViewNhanVien_36_Nguyen.SelectedItems[0]);
            }
        }

        private void listViewNhanVien_36_Nguyen_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listViewNhanVien_36_Nguyen.SelectedItems.Count > 0)
            {
                txtHoTen_36_Nguyen.Text = listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[0].Text;
                dateTimePickerNgaaySInh_36_Nguyen.Text = listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[1].Text;
                txtDiaChi_36_Nguyen.Text = listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[2].Text;
                txtSoDienThoai_36_Nguyen.Text = listViewNhanVien_36_Nguyen.SelectedItems[0].SubItems[3].Text;
            }
        }
    }
}