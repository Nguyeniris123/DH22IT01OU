#include <iostream>
#include <iomanip>
using namespace std;
int pascal(int r, int c);
void Output(int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tam giac pascal: " << endl;
	Output(n);
	return 0;
}
int pascal(int r, int c)
{
	if (c == 1) return 1;
	if (c == r) return 1;
	return pascal (r - 1, c)+ pascal(r - 1, c - 1);
}
void Output(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << setw(4) << pascal(i, j);
		cout << endl;
	}
}
