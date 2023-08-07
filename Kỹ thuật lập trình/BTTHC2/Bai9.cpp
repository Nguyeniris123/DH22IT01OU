#include <iostream>
#include <iomanip>
using namespace std;
int Chuyen(int n, int mu);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nhi phan ko am: ";
		cin >> n;
		if (n <= 0) cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "So nguyen n tu nhi phan sang thap phan: " << Chuyen(n, 0) << endl;
	return 0;
}
int Chuyen(int n, int mu)
{
	if (n == 0)
		return 0;
	return (n % 10) * pow(2, mu) + Chuyen(n / 10, mu+1);
}