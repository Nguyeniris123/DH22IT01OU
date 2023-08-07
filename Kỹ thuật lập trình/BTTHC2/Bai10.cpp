#include <iostream>
#include <iomanip>
using namespace std;
int UCLN(int a, int b);
int main()
{
	int a, b;
		cout << "Nhap vao so nguyen a va b: ";
		cin >> a >> b;
	cout << "Uoc chung lon nhat cua a va b: " << UCLN(a,b) << endl;
	return 0;
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a%b);
}