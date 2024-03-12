using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BaiThucHanh1
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Bai1_36_Nguyen()); // bài 1
            Application.Run(new Bai4_36_Nguyen()); //bài 4
            Application.Run(new Form1()); // bai 5 thứ 1
            Application.Run(new Form2()); //bai 5 thứ 2
            Application.Run(new Bai6_36_Nguyen()); //bài 6
        }
    }
}
