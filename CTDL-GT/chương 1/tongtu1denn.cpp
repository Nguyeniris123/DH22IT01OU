#include <iostream> 
using namespace std;
const int MAX = 100;
void input (int a[MAX][MAX], int r, int c);
void output (int a[MAX][MAX], int r, int c);
int main()
{
	int a[MAX][MAX];
	int r, c, n;
	int sum = 0, gan = 0, sosanh = 0;
	gan++;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		gan = gan + 2;
		sosanh = sosanh + 1;
	}
	gan++;
	sosanh++;
	cout << "So phep gan la: " << gan << endl;
	cout << "So phep so sanh la: " << sosanh << endl;
	return 0;
}

void input(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap gia tri hang thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
}

void output(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "mang da luu: " << endl;
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}