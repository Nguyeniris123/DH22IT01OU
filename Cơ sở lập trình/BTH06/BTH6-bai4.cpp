#include <iostream>
using namespace std;
 int sum (int n)
{
	 int tong = 0;
	 for (int i = 1; i <= n; i++)
		 tong += i;
	 return tong;
}
//----------------------------------------
 int giaithua(int n)
 { 
	 int tich = 1;
	 for (int i = 1; i <= n; i++)
		 tich = tich*i;
	 return tich;
 }
 //---------------------------------------
int main()
{
	long n;
	do {
		cout << "nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << "Loi nhap lai" << endl;
	} while (n <= 0);
	cout << "tong cac so tu 1 den n la: " << sum(n) << endl;
	cout << "Giai thua cua so nguyen n la: " << giaithua(n) << endl;
	return 0;
}