#include <iostream>
using namespace std;
const int MAX = 100;
void Input(int arr[MAX][MAX], int n);
void Output(int arr[MAX][MAX], int n);
int Tongchinh(int arr[MAX][MAX], int n);
int Tongphu(int arr[MAX][MAX], int n);
int main()
{
	int arr[MAX][MAX];
	int n;
	do {
		cout << "Nhap vao n: ";
		cin >> n;
		if (n <= 0)
			cout << "Loi, nhap lai" << endl;
	} while (n <= 0);
	Input(arr, n);
	Output(arr, n);
	cout << "Tong cac gia tri tren duong cheo chinh la: " << Tongchinh(arr, n) << endl;
	cout << "Tong cac gia tri tren duong cheo phu la: " << Tongphu(arr, n) << endl;
	return 0;
}
void Input(int arr[MAX][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap " << n << " so nguyen cho dong thu " << i+1 << ": ";
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
}
void Output(int arr[MAX][MAX], int n)
{
	cout << "Mang da luu tru la: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
int Tongchinh(int arr[MAX][MAX], int n) //Cong tat ca phan tu tren duong cheo chinh
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				sum = sum + arr[i][j];
		}
	}
		return sum;
}
int Tongphu(int arr[MAX][MAX], int n) //Cong tat ca phan tu tren duong cheo phu
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i+ j==n-1)
				sum = sum + arr[i][j];
		}
	}
	return sum;
}