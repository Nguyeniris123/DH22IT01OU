#include <iostream>
using namespace std;
int main()
{
	const int MAXROW = 50, MAXCOL = 50;
	int a[MAXROW][MAXCOL];
	int r, c;
	cout << "So dong: ";
	cin >> r;
	cout << "So cot: ";
	cin >> c;
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " so nguyen cho dong thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
	int tong = 0;
	cout << "Mang da luu tru: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{

			cout << a[i][j] << " ";
			tong = tong + a[i][j];
		}
		cout << endl;
	}
			cout << "Tong cac phan tu la: " << tong << endl;			
	return 0;
}