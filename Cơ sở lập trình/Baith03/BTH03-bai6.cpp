#include <iostream>
using namespace std;
int main()
{
	long n;
	cout << "Nhap vao nam n: ";
	cin >> n;
	if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))) cout << "Nam nhuan 366 ngay" << endl;
	else cout << "Nam khong nhuan 365 ngay" << endl;
	return 0;
}
