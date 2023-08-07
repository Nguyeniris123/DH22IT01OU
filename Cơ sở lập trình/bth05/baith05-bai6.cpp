#include <iostream>
using namespace std;
int main()
{
	/*
	Viết chương trình nhận vào 2 số nguyên dương là chiều dài d và chiều rộng r của
hình chữ nhật. Xuất ra hình chữ nhật dưới dạng các dấu *.
Ví dụ d = 3, r = 5 thì kết quả:
				*****
				*****
				*****
	*/

	long d = 0, r = 0;
	do {
	cout << "nhap vao so nguyen duong chieu dai: ";
	cin >> d;
	if (d <= 0) cout << "Loi nhap lai" << endl;
	} while (d <= 0);
	do {
		cout << "nhap vao so nguyen duong chieu rong: ";
		cin >> r;
		if (r <= 0) cout << "Loi nhap lai" << endl;
	} while (r <= 0);
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= r; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
