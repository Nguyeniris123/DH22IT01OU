#include <iostream>
using namespace std;
const int MAX = 100;
void Input(int arr[MAX], int n);
void Output(int arr[MAX], int n);
int Sum(int arr[MAX], int n);
int Minarr(int arr[MAX], int n);
int Maxarr(int arr[MAX], int n);
int main()
{
	int n;
	int arr[MAX];
	cout << "Nhap vao n: ";
	cin >> n;
	Input(arr, n);
	Output(arr, n);
	cout << "Tong cac pt mang: " << Sum(arr, n);
	cout << "Gia tri nho nhat trong mang: " << Minarr(arr, n) << endl;
	cout << "Gia tri lon nhat trong mang: " << Maxarr(arr, n) << endl;
	return 0;
}
void Input(int arr[MAX], int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 50;
}
void Output(int arr[MAX], int n)
{
	cout << "mang da luu la: " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " " << endl;
}
int Sum(int arr[MAX], int n)
{
	if (n == 0) return 0;
	return arr[n - 1] + Sum(arr, n - 1);
}
int Minarr(int arr[MAX], int n)
{
	if (n == 0) return 0;
	static int min = INT_MAX;
	if (min > arr[n - 1])
		min = arr[n - 1];
	Minarr(arr, n - 1);
	return min;
}
int Maxarr(int arr[MAX], int n)
{
	if (n == 0) return 0;
	static int max = INT_MIN;
	if (max < arr[n - 1])
		max = arr[n - 1];
	Maxarr(arr, n - 1);
	return max;
}