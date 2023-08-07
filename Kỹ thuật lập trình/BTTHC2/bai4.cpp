#include <iostream>
#include <iomanip>
using namespace std;
double XmuN(int x, int n);
int main()
{
	int n, x;
	cout << "Nhap vao so nguyen x: ";
	cin >> x;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	cout << "Gia tri " << x << "^" << n << " la: " << fixed << setprecision(3) << XmuN(x, n) << endl;
	return 0;
}
double XmuN(int x, int n)
{
	if (n == 0 )
		return 1;
	if (n > 0) return 1.0*XmuN(x, n - 1)*x;
	return XmuN(x, n + 1)/x;
}