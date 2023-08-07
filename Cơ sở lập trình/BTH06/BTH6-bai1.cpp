#include <iostream>
using namespace std;
int DTHCN(int a, int b)
{
	return a*b;
}
int CVHCN(int a, int b)
{
	return (a+b)*2;
}
int main()
{
	int a, b;
	cout << "Nhap vao chieu dai va chieu rong hinh chu nhat: ";
	cin >> a >> b;
	cout << "Dien tich hinh chu nhat: " << DTHCN(a,b) << endl;
	cout << "Chu vi hinh chu nhat: " << CVHCN(a,b) << endl;
	return 0;
}