#include <iostream>
#include <cmath>
using namespace std;
double Nhan2so(double a, double b)
{
	return a*b;
}
double Tong2so(double a, double b)
{
	return a + b;
}
double Tongbinhphuong(double a, double b)
{
	return (a*a + b*b);
}
double Canbac2(double a)
{
	return sqrt(a);
}
int main()
{
	int n;
	long x = 0;
	do {
		do {
			cout << "CHON MENU SAU: " << endl
				<< "1. Thong tin hinh vuong" << endl
				<< "2. Thong tin hinh chu nhat" << endl
				<< "3. Thong tin tam giac vuong" << endl
				<< "4. Cham dut" << endl;
			cin >> n;
			if (n <= 0 || n > 4) cout << "Loi nhap lai!!!" << endl;
		} while (n <= 0 || n > 4);
		switch (n)
		{
		case 1:
		{
			long a = 0;
			do {
				cout << "Nhap canh hinh vuong: ";
				cin >> a;
				if (a <= 0) cout << "Loi nhap lai!!!" << endl;
			} while (a <= 0);
			cout << "Chu vi cua hinh vuong: " << Nhan2so(a, 4) << endl;
			cout << "Dien tich cua hinh vuong: " << Nhan2so(a, a) << endl;
			cout << "Chieu dai duong cheo cua hinh vuong: " << Canbac2(Tongbinhphuong(a, a)) << endl;
			break;
		}
		case 2:
		{
			long a, b;
			do {
				cout << "Nhap lan luot chieu dai va chieu rong cua hinh chu nhat: ";
				cin >> a >> b;
				if (a <= 0 || b <= 0 || b > a) cout << "Loi nhap lai!!!" << endl;
			} while (a <= 0 || b <= 0 || b > a);
			cout << "Chu vi cua hinh cn: " << 2 * Tong2so(a, b) << endl;
			cout << "Dien tich cua hinh cn: " << Nhan2so(a, b) << endl;
			cout << "Chieu dai duong cheo cua hinh cn: " << Canbac2(Tongbinhphuong(a, b)) << endl;
			break;
		}
		case 3:
		{
			long a, b;
			do {
				cout << "Nhap do chieu dai 2 canh goc vuong cua tam giac vuong: ";
				cin >> a >> b;
				if (a <= 0 || b <= 0) cout << "LOi nhap lai" << endl;
			} while (a <= 0 || b <= 0);
			cout << "Chu vi cua tam giac vuong: " << Tong2so(a, b) + Canbac2(Tongbinhphuong(a, b)) << endl;
			cout << "Dien tich cua tam giac vuong: " << 0.5 * Nhan2so(a, b) << endl;
			cout << "Chieu dai canh huyen cua tam giac vuong: " << Canbac2(Tongbinhphuong(a, b)) << endl;
			break;
		}
		case 4:
		{
			cout << "Cam on ban da su dung chuong trinh" << endl;
			return 0;
		}
		}
		do {
			cout << "Ban co muon tiep tuc chuong trinh khong?" << endl
				<< "1. Tiep tuc" << endl
				<< "2. ket thuc" << endl;
			cin >> x;
			if (x > 2 || x < 1) cout << " Loi nhap lai" << endl;
		} while (x > 2 || x < 1);
	} while (x != 2);
	return 0;
}