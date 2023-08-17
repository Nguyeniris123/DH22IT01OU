#include <iostream>
using namespace std;
#define MAX 100
void Input(int a[MAX], int n);
void Output(int a[MAX], int n);
int search(int a[], int n, int x);
int BinarySearch(int a[], int n, int x);
void Delete(int a[], int &n, int i);
void themMotPhanTuVaoMang(int a[], int &n, int v, int x);
void hoanVi(int &a, int &b);
void sapXepTang(int a[], int n);
int main()
{
	int n, x;
	int a[MAX];
	cout << "Nhap vao n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	int v, z;
	cout << "Nhap vao vi tri can them: ";
	cin >> v;
	cout << "Nhap vao gia tri them: ";
	cin >> z;
	themMotPhanTuVaoMang(a, n, v, z);
	Output(a, n);
	cout << "Nhap vao gia tri can tim: ";
	cin >> x;
	int kq = search(a, n, x);
	if (kq == -1) cout << "Khong co x trong danh sach" << endl;
	else
	{
		cout << "Xoa x nam tai vi tri: " << kq << endl;
		Delete(a, n, kq);
		Output(a, n);
	}
	cout << "Mang sau khi sap xep: " << endl;
	sapXepTang(a, n);
	Output(a, n);
	return 0;
}

void Input(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void Output(int a[MAX], int n)
{
	cout << "Danh sach da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void themMotPhanTuVaoMang(int a[], int &n, int v, int x)
{
	if (v >= 0 && v <= n)
	{
		for (int i = n; i > v; i--)
			a[i] = a[i - 1];
		a[v] = x;
		n++;
	}
}

int search(int a[], int n, int x)
{
	int i = 0;
	while ((i < n) && (a[i] != x))
		i++;
	if (i == n)
		return -1;
	return i;
}

int BinarySearch(int a[], int n, int x)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == x) return mid;
		if (x > a[mid])
			left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

void Delete (int a[], int &n, int i)
{
	if (i >= 0 && i < n)
	{
		for (int j = i; j < n - 1; j++)
			a[j] = a[j + 1];
		n--;
	}
}

void hoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sapXepTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				hoanVi(a[i], a[j]);
}