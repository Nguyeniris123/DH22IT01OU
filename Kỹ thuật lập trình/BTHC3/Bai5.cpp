#include <iostream>
#include <iomanip>
using namespace std;
void Fibo(int n);
int main()
{
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	Fibo(n);
	return 0;
}
void Fibo(int n)
{
	int *u, *v, *t;
	u = new int;
	v = new int;
	t = new int;
	*u = 0;
	*v = 1;
	if (n == 0)
		return;
	if (n == 1)
	{
		cout << "0\n";
		return;
	}
	cout << "0 1";
	int i = 2; // bien dem
	while (i < n)
	{
		*t = *u + *v;
		cout << " " << *t; // in so Fibo
		*u = *v;
		*v = *t;
		i++;
	}
	delete u, v, t;
	cout << endl;
}