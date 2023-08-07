#include <iostream>
#include <iomanip>
using namespace std;
int Count(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen n ko am: ";
		cin >> n;
		if (n < 0) cout << "Sai nhap lai" << endl;
	} while (n < 0);
	cout << "So chu so cua so nguyen n: " << Count(n) << endl;
	return 0;
}
int Count( int n)
{
	static int ctr = 0;
	if (n != 0)
	{
		ctr++;
		Count(n / 10);
	}
	return ctr;
}