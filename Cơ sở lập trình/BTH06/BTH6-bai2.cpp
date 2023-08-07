#include <iostream>
using namespace std;
int MAX2(int a, int b)
{
	return (a > b) ? a : b;
}
//----------------------------------------
int MAX3(int a, int b, int c)
{
	int sln = a;
	if (b > sln) sln = b;
	if (c > sln) sln = c;
	return sln;
}
//----------------------------------------
int main()
{
	int a=0, b=0, c=0, d=0, e =0;
	cout << "Nhap vao 2 so nguyen a va b: ";
	cin >> a >> b;
	cout << "So nguyen lon nhat trong 2 so a va b la: " << MAX2(a, b) << endl;
	cout << "Nhap vao 3 so nguyen c, d va e: ";
	cin >> c >> d >> e;
	cout << "So nguyen lon nhat trong 3 so c, d va e la: " << MAX3(c,d,e) << endl;
	return 0;
}