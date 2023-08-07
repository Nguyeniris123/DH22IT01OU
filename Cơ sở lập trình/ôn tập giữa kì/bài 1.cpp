/*
Viết chương trình mô phỏng các chức năng sau:
a. Hiển thị menu các chức năng bên dưới cho người dùng chọn, chỉ kết thúc khi
người dùng chọn kết thúc.
b. Tính tổng: S = 1 + 2 + ... + n (n > 0)
c. Tính diện tích hình tròn với bán kính r (S = PI * r), làm tròn đến 3 chữ số thập phân, với PI = 3,1416
d. Kiểm tra 1 số nguyên có phải là số nguyên tố không
e. Nhập vào 3 số nguyên, tìm số lớn nhất, số nhỏ nhất
f. Tiếp theo câu e, sắp xếp các số theo thứ tự tăng dần, giảm dần.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	long m = 0;
	long sum = 0, n = 0;
	const double pi = 3.1416;
	double r = 0.0, s = 0.0; //s la dien tich hinh tron
	bool isprime = true;
	long t = 0;
	long a = 0, b = 0, c = 0, max = 0, min = 0;
	do {
	cout << "Chon menu ben duoi: " << endl
		<< "1. Tinh tong S (1-n)" << endl
		<< "2. Tinh dien tich hinh tron" << endl
		<< "3. Kiem tra 1 so nguyen to > 0" << endl
		<< "4. Nhap 3 so nguyen, tim so max - sap xep tang dan, giam dan" << endl;
	cout << "Ban chon so may: ";
	cin >> m;
	if (m > 4 || m <= 0) cout << "Loi nhap lai" << endl;
	} while (m > 4 || m <= 0);
	switch (m)
	{
	case 1:
		{
			do {
				cout << "Nhap vao so nguyen n > 0: ";
				cin >> n;
				if (n <= 0) cout << "Loi nhap lai" << endl;
			} while (n <= 0);
		}
			for (int i = 0; i <= n; i++)
				sum += i;
			cout << "Tong: " << sum << endl;
			break;
	case 2:
		do {
			cout << "nhap ban kinh r hinh tron: ";
			cin >> r;
			if (r <= 0) cout << "Loi nhap lai!" << endl;
		} while (r <= 0);
		s = pi * pow(r, 2);
		cout << "Dien tich hinh tron: " << setprecision(3) << fixed
			<< s << endl;
	case 3: 
		cout << "Nhap vao so t: ";
		cin >> t;
		if (t < 2)
		{
			isprime = false;
		}
		else
			for (int i = 2; i <= sqrt(t); i++)
				if (t%i == 0)
				{
					isprime = false;
					break;
				}
		cout << t << (isprime ? " la snt" : " Ko phai la snt") << endl;
	case 4:
		cout << "Nhap ba so nguyen a, b va c: ";
		cin >> a >> b >> c;
		max = a;
		if (max < b) max = b;
		if (max < c) max = c;
		cout << "so lon nhat la: " << max << endl;
		min = a;
		if (min > b) min = b;
		if (min > c) min = c;
		cout << "so be nhat la: " << min << endl;
		long tmp = a;
		if (a > b)
		{
			b = a;
			b = tmp;
		}
		if (a > c)
		{
			c = a;
			c = tmp;
		}
		if (b > c)
		{
			b = c;
			c = tmp;
		}
		cout << "sap xep tang dan: " << a << b << c << endl;
		cout << "sap xep giam dan: " << c << b << a << endl;
	}
	return 0;
}
