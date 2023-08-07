#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 100;
void Input(int **a, int r, int c);
void Output(int **a, int r, int c);
void Sort(int **a, int r, int c);
int main()
{
	int r, c, x;
	cout << "Nhap vao hang va cot: ";
	cin >> r >> c;
	int **a = new int*[r];
	for (int i = 0; i < r; i++) 
	{
		a[i] = new int[c];
	}
	Input(a, r, c);
	Output(a, r, c);
	cout << "Nhap vao so hang muon sap xep: ";
	int row;
	cin >> row;
	Sort(a, row, c);
	Output(a, r, c);
	for (int i = 0; i < r; i++)
		delete[] a[i];
	delete[]a;
	a = NULL;
	return 0;
}
void Input(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 50;
	}
}
void Output(int **a, int r, int c)
{
	cout << "Mang da luu: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
// Hàm sắp xếp mảng hai chiều tăng dần theo hàng người dùng chọn
void Sort(int **a, int row, int c)
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < c - 1; j++)
		{
			for (int k = 0; k < c - j - 1; k++)
			{
				if (a[i][k] > a[i][k + 1])
				{
					swap(a[i][k], a[i][k + 1]);
				}
			}
		}
	}
}