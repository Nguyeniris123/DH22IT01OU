#include <iostream>
using namespace std;
int main()
{
	long h;
	do
	{
		cout << "Nhap do dai chieu cao tam giac: ";
		cin >> h;
		if (h <= 0) cout << "Loi nhap lai" << endl;
	} while (h <= 0);
	for ( int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
		return 0;
}