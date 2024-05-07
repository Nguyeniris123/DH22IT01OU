using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing.Drawing2D;

namespace B5_Bai_3_N2_36_Nguyen
{
    public partial class DrawByMouse_36_Nguyen : Form
    {
        public DrawByMouse_36_Nguyen()
        {
            InitializeComponent();
        }

        //Do day net ve
        int penW_36_Nguyen;
        Color color_36_Nguyen;
        Point oldPoint_36_Nguyen;
        Bitmap bmpmem_36_Nguyen;

        private void DrawByMouse_36_Nguyen_Load(object sender, EventArgs e)
        {
            penW_36_Nguyen = 1;
            color_36_Nguyen = Color.Red;
            bmpmem_36_Nguyen = new Bitmap(ClientRectangle.Width, ClientRectangle.Height, CreateGraphics());
        }

        private void DrawByMouse_36_Nguyen_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.DrawImageUnscaled(bmpmem_36_Nguyen, 10, 10);
        }

        private void DrawByMouse_36_Nguyen_MouseDown(object sender, MouseEventArgs e)
        {
            oldPoint_36_Nguyen = e.Location;
        }

        private void DrawByMouse_36_Nguyen_MouseMove(object sender, MouseEventArgs e)
        {
            //Nhan chuot trai
            if (e.Button == MouseButtons.Left)
            {
                // doi tuong ve, graphic
                Graphics g_36_Nguyen = Graphics.FromImage(bmpmem_36_Nguyen);
                Pen pen_36_Nguyen = new Pen(color_36_Nguyen, penW_36_Nguyen);
                pen_36_Nguyen.DashCap = DashCap.Round;
                pen_36_Nguyen.EndCap = LineCap.Round;
                pen_36_Nguyen.StartCap = LineCap.Round;
                g_36_Nguyen.DrawLine(pen_36_Nguyen, oldPoint_36_Nguyen, e.Location);
                oldPoint_36_Nguyen = e.Location;
                Invalidate(); //ve lai, goi ham paint
            }


        }
        private void DrawByMouse_36_Nguyen_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.R: color_36_Nguyen = Color.Red; break;
                case Keys.G: color_36_Nguyen = Color.Green; break;
                case Keys.B: color_36_Nguyen = Color.Blue; break;
                case Keys.Up: penW_36_Nguyen++; break;
                case Keys.Down: penW_36_Nguyen--; break;
            }
        }
    }
}
