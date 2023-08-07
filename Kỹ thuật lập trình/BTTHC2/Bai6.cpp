#include <iostream>
#include <iomanip>
using namespace std;
int SoDaoNguoc(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen n ko am: ";
		cin >> n;
		if (n < 0) cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "So chu so cua so nguyen n: " << SoDaoNguoc(n) << endl;
	return 0;
}
int SoDaoNguoc(int n)
{
	static int kq = 0;
	if (n>0)
	{
		kq = kq * 10 + n % 10;
		SoDaoNguoc(n / 10);
	}
	return kq;
}