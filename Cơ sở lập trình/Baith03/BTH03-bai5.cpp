#include <iostream>
using namespace std;
int main()
{
	double d;
	cout << "Nhap vao diem tich luy: ";
	cin >> d;
	if (d >= 9) cout << "Xuat sac" << endl;
	else if (d>=8) cout << "Gioi" << endl;
	else if (d >= 7) cout << "Kha" << endl;
	else if (d >= 6) cout << "Trung binh kha " << endl;
	else if (d >= 5) cout << "Trung binh" << endl;
	else cout << "Yeu" << endl;
	return 0;
}
