#include <iostream>
using namespace std;
int Fibo(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen n ko am: ";
		cin >> n;
		if (n < 0)
			cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "Gia tri Fibo cua so thu " << n << " la: " << Fibo(n) << endl;
	return 0;
}
int Fibo(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}