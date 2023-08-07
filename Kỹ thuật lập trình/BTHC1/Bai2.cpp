#include <iostream>
using namespace std;
const int MAX = 10;
void Input(int arr[MAX][MAX], int r, int c);
void Output(int arr[MAX][MAX], int r, int c);
int main()
{
	int arr[MAX][MAX];
	int r=4, c=3;
	Input(arr, r, c);
	cout << "Mang da luu tru la: " << endl;
	Output(arr, r, c);
	return 0;
}
void Input(int arr[MAX][MAX], int r, int c)
{
	int i = 0, j = 0;
	while (i < r)
	{
		j = 0;
			while (j < c)
			{
				cout << "Nhap vao gia tri phan tu mang a[" << i << "][" << j << "]: ";
				cin >> arr[i][j];
				j++;
			}
			i++;
	}
}
void Output(int arr[MAX][MAX], int r, int c)
{
	int i = 0, j = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			cout << arr[i][j] << " ";
			j++;
		}
		cout << endl;
		i++;
	}
}