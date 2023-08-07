#include <iostream>
using namespace std;
int sodaonguoc(int n);
int main()
{
	sodaonguoc(123);
	return 0;
}
int sodaonguoc(int n)
{
	int t = n % 10;
	if (n > 0)
		cout << t << " ";
	return sodaonguoc(n / 10);
}