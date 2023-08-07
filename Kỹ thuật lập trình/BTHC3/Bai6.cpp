#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 100;
void Input(int *a, int n);
void Output(int *a, int n);
void Daomang(int *a, int n);
int main()
{
	srand(time(0));
	int n=0;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	int *a;
	a = new int[n];
	Input(a, n);
	cout << "Mang khoi tao ban dau: " << endl;
	Output(a, n);
	Daomang(a, n);
	cout << "Mang sau khi dao nguoc la: " << endl;
	Output(a, n);
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
void Daomang(int *a, int n)
{
	for (int i = 0; i < n/2; i++)
	{
		int tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}