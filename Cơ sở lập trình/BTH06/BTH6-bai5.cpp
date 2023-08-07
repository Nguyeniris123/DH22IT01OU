#include <iostream>
using namespace std;
void hinhvuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << "*";
		cout << endl;
	}
}
//----------------------------------------
int main()
{
	long n;
	do {
		cout << "nhap vao so do canh hinh vuong: ";
		cin >> n;
		if (n <= 0) cout << "Loi nhap lai" << endl;
	} while (n <= 0);
	cout << "tong cac so tu 1 den n la: " << endl;
	hinhvuong(n);
	return 0;
} 