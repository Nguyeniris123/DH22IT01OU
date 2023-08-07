#include <iostream>
using namespace std;
int sdn(int n)
{
	int tmp = 0, x = 0;
	while (n > 0) {
		tmp = n % 10;
		x = x * 10 + tmp;
		n = n / 10;
	}
	return x;
}
//----------------------------------------
int main()
{
	long n;
	do {
		cout << "nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << "Loi nhap lai" << endl;
	} while (n <= 0);
	cout << "so dao nguoc cua so nguyen duong n la: "<< sdn(n) << endl;
	return 0;
}