#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 100;
void Input(int *a, int n);
void Output(int *a, int n);
int Timkiem(int *a, int n, int x);
int main()
{
	srand(time(0));
	int n = 0, x;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	int *a;
	a = new int[n];
	Input(a, n);
	cout << "Mang khoi tao ban dau: " << endl;
	Output(a, n);
	cout << "Nhap vao so can tim: ";
	cin >> x;
	int Vitri = Timkiem(a, n, x);
	if (Vitri != -1)
		cout << "Vi tri xuat hien la dai cua " << x << " la: " << Vitri +1 << endl;
	else  cout << "Khong tim thay!!!" << endl;
	delete[] a;
	a = NULL;
	return 0;
}
void Input(int *a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 20;
}
void Output(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int Timkiem(int *a, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}