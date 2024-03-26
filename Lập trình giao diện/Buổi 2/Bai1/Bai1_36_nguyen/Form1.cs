using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai1_36_nguyen
{
    struct Time
    {
        int hour;
        int minute;
        int second;
        public Time(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        public int Hour
        {
            get { return hour; }
            set { hour = value; }
        }

        public int Minute
        {
            get { return minute; }
            set { minute = value; }
        }

        public int Second
        {
            get { return second; }
            set { second = value; }
        }

        public string Showtime()
        {
            return String.Format("{0:00}:{1:00}:{2:00}", hour, minute, second);
        }

        public void Normalize()
        {
            int t = second / 60;
            second = second >= 60 ? second % 60 : second;
            t = (minute + t) / 60;
            minute = (minute + t) >= 60 ? (minute + t) % 60 : (minute + t);
            hour = (hour + t) >= 24 ? (hour + t) % 24 : (hour + t);
        }
    }
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnHienThi_36_nguyen_Click(object sender, EventArgs e)
        {
            {
                Time t = new Time(int.Parse(txtGio_36_nguyen.Text),
                int.Parse(txtPhut_36_nguyen.Text),
                int.Parse(txtGiay_36_nguyen.Text));
                t.Normalize();
                txtTime_36_nguyen.Text = t.Showtime();
            }
        }
    }
}
