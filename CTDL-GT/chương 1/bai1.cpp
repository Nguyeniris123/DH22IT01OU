//Đếm số phép toán gán, phép so sánh được thực thi và xác định độ phức tạp trong đoạn code sau :
#include <iostream>
using namespace std;
const int MAX = 100;
void input(int a[MAX][MAX], int m, int n);
void output(int a[MAX][MAX], int m, int n);
int main() {
	int a[MAX][MAX];
	int i, j, m, n, x;
	bool flag;
	cout << "Nhap m, n: ";
	cin >> m >> n;
	cout << "Nhap x: ";
	cin >> x;
	input(a, m, n);
	output(a, m, n);
	int phepgan = 0;
	int phepsosanh = 0;
	for (int i = 0; i < m; i++)
	{
		phepgan++;
		phepsosanh++;
		for (int j = 0; j < n; j++)
		{
			phepgan++;
			phepsosanh++;
			if (a[i][j] == x)
			{
				phepsosanh++;
				flag = true;
				break;
			}
			phepsosanh++;
			if (j = n - 1)
			{
				phepgan++;
				phepsosanh++;
			}
		}
			if (flag)
			{
				break;
			}
			if (i = m - 1)
			{
				phepgan++;
				phepsosanh++;
			}
	}
	return 0;
}

void input(int a[MAX][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap vao gia tri thu " << i + 1 << endl;
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
			
}

void output(int a[MAX][MAX], int m, int n)
{
	cout << "Mang da nhap: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
/*cout << "So phep toan gan: " << (m + 1)*(n + 1) << endl;
cout << "So phep toan so sanh: " << (2*m + 1)*(n + 1) << endl;
cout << "Do phuc tap cua thuat toan: " << (m + 1)*(n + 1) + (2 * m + 1)*(n + 1) << endl;*/