#include <iostream>
using namespace std;
const int MAX = 100;
int arr[MAX];
void Input(int arr[MAX], int n);
void Output(int arr[MAX], int n);
void Add(int arr[MAX], int n, int x, int a);
int main()
{
	int n, x, a;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	Input(arr, n);
	Output(arr, n);
	cout << "Nhap vi tri can thay: ";
	cin >> x;
	cout << "Nhap gia tri muon thay: ";
	cin >> a;
	Add(arr, n, x, a);
	Output(arr, n);
	return 0;
}
void Input(int arr[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> arr[i];
	}
}
void Output(int arr[MAX], int n)
{
	cout << "Mang da luu tru: " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void Add(int arr[MAX], int n, int x, int a)
{
	if (x < 0 || x >= n)
	{
		cout << "Vi tri khong hop le!" << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == x)
		{
			arr[i-1] = a;
		}
	}
}