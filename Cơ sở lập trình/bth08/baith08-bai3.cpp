/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tìm và in ra
phần tử lớn nhất của mảng.
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
	long max = 0;
	for (int i = 0; i < currentsize; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
		cout <<"Phan tu lon nhat trong mang la: "<<max;
	cout << endl;
	return 0;
}
