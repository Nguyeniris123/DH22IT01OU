#include <iostream>
using namespace std;
const int MAX = 100;
void Khoitao(int arr[MAX][MAX], int r, int c, int min, int max);
void Xuatmang(int arr[MAX][MAX], int r, int c);
void swap(int &a, int &b);
void Sapxep(int arr[MAX][MAX], int r, int c, int n);
int main()
{
	int r = 0, c = 0;
	int arr[MAX][MAX];
	cout << "Nhap so hang cua mang: ";
	cin >> r;
	cout << "Nhap so cot cua mang: ";
	cin >> c;
	int min=0, max=0;
	cout << "Nhap min max: ";
	cin >> min >> max;
	Khoitao(arr, r, c, min, max);
	Xuatmang(arr, r, c);
	int n;
	cout << "Nhap hang muon sap xep tang dan: ";
	cin >> n;
	Xuatmang(arr, r, c);
	system("pause");
	return 0;
}
void Khoitao(int arr[MAX][MAX], int r, int c, int min, int max)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			arr[i][j] = rand() % (max - min + 1) + min;
	}
}
void Xuatmang(int arr[MAX][MAX], int r, int c)
{
	cout << "Ham da nhap la: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
void swap( int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void Sapxep(int arr[MAX][MAX], int r, int c, int n)
{
	for (int i = 0; i < r - 1; i++)
		for (int j = i+1; i < r; j++)
			if (arr[i][n] > arr[j][n])
				swap(arr[i][n], arr[j][n]);
}