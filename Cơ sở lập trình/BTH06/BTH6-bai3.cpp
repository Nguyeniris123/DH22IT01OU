#include <iostream>
using namespace std;
double tinhluythua(double x, int y)
{
	double luythua = 1.0;
	if (y >= 0)
		for (int i = 1; i <= y; i++)
			luythua = luythua * x;
	else
		for (int i = 1; i <= -y; i++)
			luythua = luythua / x;
	return luythua;

}
//----------------------------------------
int main()
{
	double x = 0;
	int y = 0;
	cout << "Nhap vao so thuc x va so nguyen y: ";
	cin >> x;
	cin >> y;
	cout << "Luy thua cua X mu y la: " << tinhluythua(x, y) << endl;
	return 0;
}