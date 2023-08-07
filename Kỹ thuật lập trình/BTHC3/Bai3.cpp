#include <iostream>
#include <iomanip>
using namespace std;
int UCLN(int a, int b);
int main()
{
	int *p, *q;
	p = new int;
	q = new int;
	do
	{
		cout << "Nhap so nguyen thu nhat: ";
		cin >> *p;
	} while (*p <= 0);
	do
	{
		cout << "Nhap so nguyen thu hai:  ";
		cin >> *q;
	} while (*q <= 0);
	cout << "UCLN cua " << *p << " va " << *q << " la: " << UCLN(*p, *q) << endl;
	delete p, q;
	return 0;
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a%b);
}