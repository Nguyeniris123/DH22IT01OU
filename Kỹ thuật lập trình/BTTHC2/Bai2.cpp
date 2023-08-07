#include <iostream>
using namespace std;
int giaithua(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen n ko am: ";
		cin >> n;
		if (n < 0)
			cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "Gia thua cua " << n << " la: " << giaithua(n) << endl;
	return 0;
}
int giaithua(int n)
{
	if (n == 0)
		return 1;
	else
		return n*giaithua(n - 1);
}