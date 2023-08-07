#include <iostream>
#include <iomanip>
using namespace std;
int Chuyen(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen thap phan n ko am: ";
		cin >> n;
		if (n < 0) cout << "Sai nhap lai" << endl;
	} while (n <= 0);
	cout << "So nguyen n tu thap phan sang nhi phan: " <<Chuyen(n) << endl;
	return 0;
}
int Chuyen(int n)
{
	if (n == 0)
		return 0;
	return n % 2 + Chuyen(n / 2) * 10;
}