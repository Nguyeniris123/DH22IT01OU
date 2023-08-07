#include <iostream>
using namespace std;
int main()
{
	/*
	Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Tính và xuất tổng các
	số từ 1 đến n.
	Ví dụ: n = 4 thì kết quả là 10.
	*/
	long n=0, s=0;
	do
	{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << "Loi nhap lai" << endl;
	} while (n <= 0);
	for (long i = 1; i <= n; i++)
	{
		s = s + i;
	}
	cout << "tong cac so tu 1 den n la: " << s << endl;
	return 0;
}