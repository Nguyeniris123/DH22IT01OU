#include <iostream>
using namespace std;
int main()
{
	long a, b;
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	if (a == b) cout << "Hai so bang nhau"<< endl;
	else if (a < b) cout << "a be hon b" << endl;
	else cout << "a lon hon b" << endl;
	return 0;
}
