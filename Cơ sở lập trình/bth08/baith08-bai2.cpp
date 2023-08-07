/*
Viết chương trình thực hiện các công việc sau đây:
a) Định nghĩa hằng MAXSIZE là 100.
b) Khai báo mảng values có thể lưu số phần tử tối đa là MAXSIZE, kiểu của mỗi
phần tử là double.
c) Khai báo currentSize lưu số phần tử hiện có trong mảng.
d) Nhập vào giá trị của currentSize.
e) Nhập vào các giá trị trong mảng values, số phần tử đọc vào là currentSize.
f) In các phần tử trong mảng values trên một dòng, cách nhau bởi dấu phẩy
*/
#include <iostream>
using namespace std;
const int MAXSIZE = 100;
int main()
{
	double values[MAXSIZE];
	int currentsize;
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
		cin >> values[i];
	}
	cout << endl;
	for (int i = 0; i < currentsize; i++)
	{
		cout << values[i];
		if (i != currentsize - 1) cout << ", ";
	}
	cout << endl;
	return 0;
}
