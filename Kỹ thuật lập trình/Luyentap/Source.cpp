#include <iostream>
using namespace std;
int giaithua(int n)
{
	if (n==0 || n == 1) 
		return 1;
	else
	{
		return n*n + giaithua(n - 1);
	}
}
int main()
{
	int n;
	do {
		cout << "Nhap vao gia tri muon tinh n mu giai thua: ";
		cin >> n;
		if (n < 0) cout << "Loi" << endl;
	} while (n < 0);
	cout << "Giai thua cua " << n << " mu 2 la: " << giaithua(n)<< endl;
	return 0;
}