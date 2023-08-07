#include <iostream> 
using namespace std;
const int MAX = 100;
void input(int a[MAX][MAX], int n);
void output(int a[MAX][MAX], int n);
int main()
{
	int a[MAX][MAX];
	int n;
	int sum = 0; 
	int gan = 0, sosanh = 0;
	gan++;
	cout << "Nhap n: ";
	cin >> n;
	input(a, n);
	output(a, n);
	for (int i = 0; i < n; i++)
	{
		gan = gan+1;
		sosanh = sosanh + 1;
		for (int j = 0; j < n; j++)
		{
			gan = gan + 2;
			sosanh = sosanh + 1;
		}
		gan++;
		sosanh++;
	}
	gan++;
	sosanh++;
	cout << "So phep gan la: " << gan << endl;
	cout << "So phep so sanh la: " << sosanh << endl;
	return 0;
}

void input(int a[MAX][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri hang thu " << i + 1 << ": ";
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

void output(int a[MAX][MAX], int n)
{
	cout << "mang da luu: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}