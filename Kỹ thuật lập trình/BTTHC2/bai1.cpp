#include <iostream>
#include <iomanip>
using namespace std;
int Tong(int n);
int Binhphuongtong(int n);
double Tongmotphanle(int n);
int giaithua(int n);
double tonggiaithua(int n);
int main()
{
	int n;
	do {
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << "Nhap sai" << endl;
	} while (n <= 0);
	cout << "Tong cac so nguyen tu 1 den n la: " << Tong(n) << endl;
	cout << "Tong cac so nguyen tu 1^2 den n^2 la: " <<fixed<<setprecision(3)<< Binhphuongtong(n) << endl;
	cout << "Tong cac giai thua: " << tonggiaithua(n) << endl;
	do {
		cout << "Nhap vao so nguyen n le: ";
		cin >> n;
		if (n % 2 == 0) cout << "Nhap sai" << endl;
	} while (n % 2 == 0);
	cout << "Tong cac so nguyen tu 1 den 1/n voi n le la: " << fixed << setprecision(3) << Tongmotphanle(n) << endl;
	return 0;
}
int Tong(int n)
{
	if (n == 1)
		return 1;
	else
		return n + Tong(n - 1);
}
int Binhphuongtong(int n)
{
	if (n == 1)
		return 1;
	else
		return n*n + Binhphuongtong(n - 1);
}
double Tongmotphanle(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return 1.0/n + Tongmotphanle(n - 2.0);
}
int giaithua(int n)
{
	if (n == 0)
		return 1;
	else
		return n*giaithua(n - 1);
}
double tonggiaithua(int n)
{
	if (n == 1)
		return 1;
	else
		return giaithua(n)+tonggiaithua(n - 1);
}
