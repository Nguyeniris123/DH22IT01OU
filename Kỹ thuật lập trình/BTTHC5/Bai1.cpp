#include <iostream>
using namespace std;

struct PhanSo {
	int tuSo;
	int mauSo;
};

int ucln(int a, int b);
void rutGonPhanSo(PhanSo &p);
void nhapPhanSo(PhanSo &p);
void inPhanSo(PhanSo p);
PhanSo congPhanSo(PhanSo a, PhanSo b);
PhanSo truPhanSo(PhanSo a, PhanSo b);
PhanSo nhanPhanSo(PhanSo a, PhanSo b);
PhanSo chiaPhanSo(PhanSo a, PhanSo b);

int main() {
	PhanSo a, b, c;
	int choice;

	while (true) {
		system("cls");
		cout << "Chon phep tinh:" << endl;
		cout << "1. Cong 2 phan so" << endl;
		cout << "2. Tru 2 phan so" << endl;
		cout << "3. Nhan 2 phan so" << endl;
		cout << "4. Chia 2 phan so" << endl;
		cout << "0. Thoat" << endl;
		cout << "Nhap lua chon cua ban: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Nhap phan so thu nhat:" << endl;
			nhapPhanSo(a);
			cout << "Nhap phan so thu hai:" << endl;
			nhapPhanSo(b);
			c = congPhanSo(a, b);
			inPhanSo(a);
			cout << " + ";
			inPhanSo(b);
			cout << " = ";
			inPhanSo(c);
			cout << endl;
			system("pause");
			break;

		case 2:
			cout << "Nhap phan so thu nhat:" << endl;
			nhapPhanSo(a);
			cout << "Nhap phan so thu hai:" << endl;
			nhapPhanSo(b);
			c = truPhanSo(a, b);
			inPhanSo(a);
			cout << " - ";
			inPhanSo(b);
			cout << " = ";
			inPhanSo(c);
			cout << endl;
			system("pause");
			break;

		case 3:
			cout << "Nhap phan so thu nhat:" << endl;
			nhapPhanSo(a);
			cout << "Nhap phan so thu hai:" << endl;
			nhapPhanSo(b);
			c = nhanPhanSo(a, b);
			inPhanSo(a);
			cout << " * ";
			inPhanSo(b);
			cout << " = ";
			inPhanSo(c);
			cout << endl;
			system("pause");
			break;

		case 4:
			cout << "Nhap phan so thu nhat:" << endl;
			nhapPhanSo(a);
			cout << "Nhap phan so thu hai:" << endl;
			nhapPhanSo(b);
			while (b.tuSo == 0) {
				cout << "Nhap lai phan so thu hai (mau so khac 0):" << endl;
				nhapPhanSo(b);
			}
			c = chiaPhanSo(a, b);
			inPhanSo(a);
			cout << " / ";
			inPhanSo(b);
			cout << " = ";
			inPhanSo(c);
			cout << endl;
			system("pause");
			break;

		case 0:
			cout << "Cam on da su dung chuong trinh" << endl;
			return 0;

		default:
			cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
		}
	}
	return 0;
}
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (b == 0) return a;
	return ucln(b, a % b);
}

void rutGonPhanSo(PhanSo &p)
{
	int gcd = ucln(p.tuSo, p.mauSo);
	p.tuSo /= gcd;
	p.mauSo /= gcd;
}

void nhapPhanSo(PhanSo &p)
{
	cout << "Nhap tu so: ";
	cin >> p.tuSo;
	cout << "Nhap mau so: ";
	cin >> p.mauSo;
	while (p.mauSo == 0)
	{
		cout << "Nhap lai mau so (khac 0): ";
		cin >> p.mauSo;
	}
}

void inPhanSo(PhanSo p)
{
	rutGonPhanSo(p);
	if (p.tuSo == 0) cout << "0";
	else if (p.mauSo == 1) cout << p.tuSo;
	else cout << p.tuSo << "/" << p.mauSo;
}

PhanSo congPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
	c.mauSo = a.mauSo * b.mauSo;
	rutGonPhanSo(c);
	return c;
}

PhanSo truPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tuSo = a.tuSo * b.mauSo - b.tuSo * a.mauSo;
	c.mauSo = a.mauSo * b.mauSo;
	rutGonPhanSo(c);
	return c;
}

PhanSo nhanPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tuSo = a.tuSo * b.tuSo;
	c.mauSo = a.mauSo * b.mauSo;
	rutGonPhanSo(c);
	return c;
}

PhanSo chiaPhanSo(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tuSo = a.tuSo * b.mauSo;
	c.mauSo = a.mauSo * b.tuSo;
	rutGonPhanSo(c);
	return c;
}