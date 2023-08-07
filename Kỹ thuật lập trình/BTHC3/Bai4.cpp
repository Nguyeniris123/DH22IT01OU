#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 30;
void Input(int *a, int n);
void Output(int *a, int n);
int *Maxa(int *a, int n);
int main()
{
	int n;
	cout << "Nhap vao phan tu n: ";
	cin >> n;
	int *a;
	a = new int[n];
	Input(a, n);
	cout << "Cac phan tu le trong mang: " << endl;
	Output(a, n);
	int *pMAX = Maxa(a, n);
	cout << "Dia chi cua phan tu lon nhat " << *pMAX << " la " << pMAX << endl;
	return 0;
}
void Input(int *a, int n)
{
	cout << "Nhap vao mang so nguyen: ";
		for (int i = 0; i < n; i++)
			cin >> a[i];
}
void Output(int *a, int n) // in cac phan tu le
{
	for (int offset = 0; offset < n; offset++)
	{
		if (*(a + offset) % 2 != 0)
			cout << *(a + offset) << " ";
	}
	cout << endl;
}
int *Maxa(int *a, int n) // Dia chi cua phan tu lon nhat
{
	int max = a[0];
	int *p = NULL;
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			p = &a[i];
		}
	}
	return p;
}