#include <iostream>
using namespace std;
void t(int n);
int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	t(n);
	cout << endl;
	return 0;
}
void t(int n)
{
	cout << "Gia tri vua nhap la: " << n << endl;
	if (n>0) t(n - 2);
}
