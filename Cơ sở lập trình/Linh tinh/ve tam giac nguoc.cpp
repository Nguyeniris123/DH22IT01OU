#include <iostream>
using namespace std;
int main()
{
	long n, i, j;
	do
	{
		cout << "Nhap do dai tam giac: ";
		cin >> n;
		if (n <= 0) cout << "Loi nhap lai" << endl;
	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			cout << " ";
		for (j = i; j < n; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}