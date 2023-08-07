#include <iostream>
#include <string>
using namespace std;
#define SIZE 20
void InMang(int a[SIZE][SIZE], int r, int c);
void ZizacNgang(int a[SIZE][SIZE], int r, int c);
void ZizacDung(int a[SIZE][SIZE], int r, int c);
void XoanOc(int a[SIZE][SIZE], int r, int c);
int main()
{
	int a[SIZE][SIZE], r, c;
	cout << " Nhap so hang va cot: ";
	cin >> r >> c;
	ZizacNgang(a, r, c);
	cout << "Mang zizacngang: " << endl;
	InMang(a, r, c);
	ZizacDung(a, r, c);
	cout << "Mang zizacdung: " << endl;
	InMang(a, r, c);
	XoanOc(a, r, c);
	cout << "Mang xoanoc: " << endl;
	InMang(a, r, c);
	return 0;
}
void ZizacNgang(int a[SIZE][SIZE], int r, int c)
{
	int k = 1, i = 0, j;
	while (k <= r*c)
	{
		//qua phai
		for (j = 0; j < c; j++)
			a[i][j] = k++;
		i++;
		//qua trai
		for (j = c - 1; j >= 0; j--)
			a[i][j] = k++;
		i++;
	}
}
void ZizacDung(int a[SIZE][SIZE], int r, int c)
{
	int k = 1, i, j = 0;
	while (k <= r*c)
	{
		//xuong
		for (i= 0; i < r; i++)
			a[i][j] = k++;
		j++;
		//len
		for (i = r - 1; i >= 0; i--)
			a[i][j] = k++;
		j++;
	}
}
void XoanOc(int a[SIZE][SIZE], int r, int c)
{
	int max = r*c;
	int k = 1, i, j;
	int minrow = 0, mincol = 0;
	while (k <= max)
	{
		// qua phai
		i = minrow;
		for (j = mincol; j < c; j++)
			a[i][j] = k++;
		minrow++;
		//di xuong
		j = c - 1;
		for (i = minrow; i < r; i++)
			a[i][j] = k++;
		c--;
		// qua trai
		i = r - 1;
		for (j = c - 1; j >= mincol; j--)
			a[i][j] = k++;
		r--;
		//di len
		j =mincol;
		for (i = r-1; i>=minrow; i--)
			a[i][j] = k++;
		mincol++;
	}
}
void InMang(int a[SIZE][SIZE], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}