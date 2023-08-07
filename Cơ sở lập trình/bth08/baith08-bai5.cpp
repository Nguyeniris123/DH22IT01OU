/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử) và vị trí của
phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa.
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
	int vt = 0;
	do {
		cout << "nhap vi tri muon xoa: " << endl;
		cin >> vt;
		if (vt <= 0 || vt > currentsize) 
			cout << "khong hop le!" << endl;
	} while (vt <= 0 || vt > currentsize);
	vt--;
	for (int i = vt; i < currentsize-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	cout << "Mang sau khi xoa la: " << endl;
	currentsize--;
	for (int i = 0; i < currentsize; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
