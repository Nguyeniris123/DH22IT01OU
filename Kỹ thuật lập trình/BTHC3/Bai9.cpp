#include <iostream>
#include <iomanip>
using namespace std;
void Input(int **a, int r, int c);
void Output(int **a, int r, int c);
int TongSNT(int **a, int r, int c);
bool KTSNT(int *n);
void findPrimesInArray(int **a, int r, int c);

int main()
{
	int r, c;
	cout << "Nhap vao hang va cot: ";
	cin >> r >> c;
	int **a;
	a = new int* [r];
	for (int i = 0; i < r; i++)
		a[i] = new int [c];
	Input(a, r, c);
	cout << "Mang da luu tru: " << endl;
	Output(a, r, c);
	cout << "Cac so nguyen to trong mang: " << endl;
	findPrimesInArray(a, r, c);
	cout << "tong cac so nguyen to trong mang: " << TongSNT(a, r, c) << endl;
	for (int i = 0; i < r; i++)
		delete[] a[i];
	delete[]a;
	a = NULL;
	return 0;
}
void Input(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 100;
}
void Output(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
int TongSNT(int **a, int r, int c)
{
	int tong = 0;
	int *p = NULL;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			if (KTSNT(&a[i][j]))
				tong += a[i][j];
		}
	return tong;
}
bool KTSNT(int *n)
{
	if (*n < 2) return false;
	for (int i = 2; i < sqrt(*n); i++)
		if (*n%i == 0)
			return false;
	return true;
}
void findPrimesInArray(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
		{
			if (KTSNT(&a[i][j]))
				cout << a[i][j] << " ";
		}
	cout << endl;
}