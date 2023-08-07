#include <iostream>
using namespace std;
int main()
{
	long a, b, max;
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	if (a > b) max = a;
	else max = b;
	cout << "So nguyen lon nhat la: " << max << endl;
	return 0;
}
