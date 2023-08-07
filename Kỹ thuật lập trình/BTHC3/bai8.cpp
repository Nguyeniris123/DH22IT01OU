#include <iostream>
#include <iomanip>
using namespace std;
void Input(int **a, int h); // Luu vao tam giac pascal
void Output(int **a, int h); // Xuat tam giac Pascal
// ma tran vuong nen r=c goi chung la h
int main()
{
	int h;
	cout << "Nhap vao chieu cao h cua ma tran: ";
	cin >> h;
	int **a;
	a = new int* [h];
	// khoi tao cac phan tu = 0
	for (int i = 0; i < h; i++)
		a[i] = new int [h] {0};
	Input(a, h);
	cout << "Tam giac Pascal chieu cao " << h << " la: " << endl;
	Output(a, h);
	// don dep bo nho
	for (int i = 0; i < h; i++)
	delete[] a[i];
	a = NULL;
	return 0;
}
void Input(int **a, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			if (j == 0)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
}
void Output(int **a, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}