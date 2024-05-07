using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace B5_Bai_3_N2_36_Nguyen
{
    public partial class DrawByText_36_Nguyen : Form
    {
        public DrawByText_36_Nguyen()
        {
            InitializeComponent();
        }

        private void DrawByText_36_Nguyen_Paint(object sender, PaintEventArgs e)
        {
            Graphics g_36_Nguyen = e.Graphics;
            string chuoi_36_Nguyen = "Hello";

            //cọ
            //cọ có hiệu ứng nền
            HatchBrush hatchBr = new HatchBrush(HatchStyle.DashedHorizontal, Color.Yellow, Color.Red);

            //Cọ pha trộn giữa 2 màu
            LinearGradientBrush linerBB_36_Nguyen = new LinearGradientBrush(new Rectangle(10, 10, 10, 10),
                Color.Blue, Color.Yellow, LinearGradientMode.BackwardDiagonal);

            Font f_36_Nguyen = new Font("Arial", 40, FontStyle.Bold);

            StringFormat fo_36_Nguyen = new StringFormat();
            fo_36_Nguyen.Alignment = StringAlignment.Far; // canh le phai
            g_36_Nguyen.DrawString(chuoi_36_Nguyen, new Font("Arial", 40), Brushes.Green, ClientRectangle, fo_36_Nguyen);

            //Co ne la doi tuong anh
            Image img_36_Nguyen = Image.FromFile(Application.StartupPath + @"\Anh\anh_3.jpg");
            TextureBrush textB_36_Nguyen = new TextureBrush(img_36_Nguyen);
            fo_36_Nguyen.Alignment = StringAlignment.Near; // canh le phai
            fo_36_Nguyen.LineAlignment = StringAlignment.Far; // canh le duoi
            g_36_Nguyen.DrawString(chuoi_36_Nguyen, new Font("Arial", 40), textB_36_Nguyen, ClientRectangle, fo_36_Nguyen);
        }
    }
}
