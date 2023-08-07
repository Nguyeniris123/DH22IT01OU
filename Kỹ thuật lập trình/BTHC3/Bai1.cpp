#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x, y;
	int *p;
	p = &x;
	*p = 80;
	cout << "Dia chi cua x: " << &x << endl;
	cout << "Dia chi cua p: " << p << endl;
	cout << "Gia tri p tro den: " << *p << endl;
	cout << "Gia tri cua x: " << x << endl;
	cout << ((x == *p) ? "x giong p" : "x khac p") << endl;
	return 0;
}
