#include <iostream>
using namespace std;
void NhapMang(double a[], long n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
long PhamVi(const double a[], long n, double min, double max)
{
	for (int i = min; i <= max; i++)
		return a[i];
}
double GiaTriTrungBinh(const double a[], long n)
{
	long tong = 0;
	for (int i = 0; i < n; i++)
		tong = tong + a[i];
	return tong;
}
double GiaTriMax(const double a[], long n)
{
	int sln = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > sln) sln = a[i];
	return sln;
}
const double arr[];
int main()
{
	cout << " Nhap lan luot nhiet do 7 ngay trong tuan T2-CN:  ";
	
	return 0;
}