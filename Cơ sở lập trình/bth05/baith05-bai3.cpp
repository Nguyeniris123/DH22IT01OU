#include <iostream>
using namespace std;
int main()
{
	double s1 = 0.0, s2 = 0.0, s3 = 0.0, i = 1.0;
	long n = 0;
	do 
	{
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	if (n <= 0) cout << "Loi nhap lai!" << endl;
	} while (n <= 0);
	for ( i ; i <= n; i++)
	{
		s1 = s1 + i * i;
		s2 = s2 + 1.0 / i;
		s3 = s3 + 1.0 / (2 * i - 1);
	}
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	return 0; 
}