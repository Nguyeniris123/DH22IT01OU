#include <iostream>
using namespace std;
const int MAX =100;
void Khoitao(int arr[MAX][MAX], int r, int c);
void Xuatmang(int arr[MAX][MAX], int r, int c);
int Fibonacci(int n);
int main()
{
	int r=0, c=0;
	int arr[MAX][MAX];
	cout << "Nhap so hang cua mang: ";
	cin >> r;
	cout << "Nhap so cot cua mang: ";
	cin >> c;
	Khoitao(arr, r, c);
	Xuatmang(arr, r, c);
	return 0;
}
void Khoitao(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			arr[i][j] = rand() % 1000 + 1;
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
int Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}