/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tính và in ra
tổng và giá trị trung bình của các phần tử trong mảng.
*/
#include <iostream>
using namespace std;
const int MAXSIZE = 100;
int main()
{
	double currentsize;
	double arr[MAXSIZE];
	do {
		cout << "nhap vao gia tri cua currentsize: ";
		cin >> currentsize;
		if (currentsize <= 0 || currentsize>100)
			cout << "loi nhap lai!" << endl;
	} while (currentsize <= 0 || currentsize > 100);
	cout << "nhap vao cac gia tri trong mang: " << endl;
	for (int i = 0; i < currentsize; i++)
	{
		cout << "phan tu thu: " << i + 1 << endl;
		cin >> arr[i];
	}
	cout << endl;
	long tong = 0;
	double dtb = 0.0;
	for (int i = 0; i < currentsize; i++)
	{
		tong += arr[i];
	}
	dtb = tong*1.0 / currentsize;
	cout << "tong cac gia tri cua mang: " << tong << endl;
	cout << "dtb cac gia tri trong mang: " << dtb << endl;
	return 0;
}
