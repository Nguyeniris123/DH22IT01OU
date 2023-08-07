#include <iostream>
using namespace std;
int main()
{
	long n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	if (n >= 0) cout << "Tri tuyet doi n la: " << n << endl;
	else cout << "Tri tuyet doi n la: " << -n << endl;
	return 0;
}
