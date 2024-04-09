using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai6_N2_36_Nguyen
{
    public partial class Bai6_36_Nguyen : Form
    {
        public Bai6_36_Nguyen()
        {
            InitializeComponent();
        }

        private void btnAdd_36_Nguyen_Click(object sender, EventArgs e)
        {
            CheckedListBox.CheckedItemCollection items = checkedListTrai_36_Nguyen.CheckedItems;
            foreach (var i in items)
            {
                checkedListBoxPhai_36_Nguyen.Items.Add(i);
            }

            foreach (var s in checkedListBoxPhai_36_Nguyen.Items)
            {
                checkedListTrai_36_Nguyen.Items.Remove(s);
            }
        }

        private void btnAddAll_36_nguyen_Click(object sender, EventArgs e)
        {
            checkedListBoxPhai_36_Nguyen.Items.AddRange(checkedListTrai_36_Nguyen.Items);
            checkedListTrai_36_Nguyen.Items.Clear();
        }

        private void btnDele_36_Nguyen_Click(object sender, EventArgs e)
        {
            CheckedListBox.CheckedItemCollection items = checkedListBoxPhai_36_Nguyen.CheckedItems;
            foreach (var i in items)
            {
                checkedListTrai_36_Nguyen.Items.Add(i);
            }

            foreach (var s in checkedListTrai_36_Nguyen.Items)
            {
                checkedListBoxPhai_36_Nguyen.Items.Remove(s);
            }
        }

        private void btnDeleAll_36_Nguyen_Click(object sender, EventArgs e)
        {
            checkedListTrai_36_Nguyen.Items.AddRange(checkedListBoxPhai_36_Nguyen.Items);
            checkedListBoxPhai_36_Nguyen.Items.Clear();
        }
    }
}
