#include <iostream>
using namespace std;
const int MAX = 50;
void randominit(int a[MAX][MAX], int r, int c);
void printarray(int a[MAX][MAX], int r, int c);
void sortarray(int a[MAX][MAX], int r, int c);

int main()
{
	int a[MAX][MAX];
	int r, c;
	cout << "Nhap hang va cot: ";
	cin >> r >> c;
	randominit(a, r, c);
	cout << "Mang da luu: " << endl;
	printarray(a, r, c);
	cout << "Mang sau khi sap xep: " << endl;
	sortarray(a, r, c);
	printarray(a, r, c);
	cout << endl;
	return 0;
}
void randominit(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 100;
	}
}
void printarray(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
void sortarray(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		// Nếu hàng lẻ, sắp xếp tăng dần
		if (i % 2 == 0)
		{
			for (int j = 0; j < c; j++)
			{
				for (int k = j + 1; k < c; k++) 
				{
					if (arr[i][j] > arr[i][k])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][k];
						arr[i][k] = temp;
					}
				}
			}
		}
		// Nếu hàng chẵn, sắp xếp giảm dần
		else {
			for (int j = 0; j < c; j++)
			{
				for (int k = j + 1; k < c; k++)
				{
					if (arr[i][j] < arr[i][k])
					{
						int temp = arr[i][j];
						arr[i][j] = arr[i][k];
						arr[i][k] = temp;
					}
				}
			}
		}
	}
}

