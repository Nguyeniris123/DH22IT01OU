#include <iostream>
#include <iomanip>
using namespace std;
int Sumchan(int n);
int Sumle(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen n ko am: ";
		cin >> n;
		if (n < 0) cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "Tong chu so chan cua so nguyen n: " << Sumchan(n) << endl;
	cout << "Tong chu so le cua so nguyen n: " << Sumle(n) << endl;
	return 0;
}
int Sumchan(int n)
{
	if (n == 0)
		return 0;
	if ((n % 10) % 2 == 0)
		return n % 10 + Sumchan(n / 10);
	return Sumchan(n / 10);
}
int Sumle(int n)
{
	if (n == 0)
		return 0;
	if ((n % 10) % 2 != 0)
		return n % 10 + Sumle(n / 10);
	return Sumle(n / 10);
}