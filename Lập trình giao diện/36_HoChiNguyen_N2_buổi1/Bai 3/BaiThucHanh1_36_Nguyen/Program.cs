using System;

namespace BaiThucHanh1_36_Nguyen
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("{0}", "Nhap So thu nhat: "); // read first number from user
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("{0}", "Nhap So thu hai: "); 
            int b = Convert.ToInt32(Console.ReadLine());
            int tong = a + b;
            Console.WriteLine("Tong cua {0} và {1} la: {2}", a, b, tong);
        }
    }
}
