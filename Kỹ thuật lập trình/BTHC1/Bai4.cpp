#include<iostream>
#include<iomanip>
using namespace std;
const int row = 5, col = 6;
void Input (int a[row][col], int r, int c);
void Output (int a[row][col], int r, int c);
int SumOf(int a[row][col], int r, int c, int n, int type = 0); 
void FindAll (int a[row][col], int r, int c, int x);
int main()
{
	int a[row][col], r, c, n;
	do
	{
		cout << "Nhap so dong, so cot: ";
		cin >> r >> c;
	} while (r <= 0 || r > row || c <= 0 || c > col);
	Input(a, r, c);
	Output(a, r, c);
	cout << "Nhap hang can tinh tong: ";
	cin >> n;
	cout << "Tong cac phan tu hang " << n << " la: " << SumOf(a, r, c, n) << endl;
	cout << "Nhap cot can tinh tong: ";
	cin >> n;
	cout << "Tong cac phan tu cot " << n << " la: " << SumOf(a, r, c, n, 1) << endl;
	cout << "Nhap gia tri can tim: ";
	cin >> n;
	FindAll(a, r, c, n);
    system("pause");
	return 0;
}
void Input(int a[row][col], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " phan tu cho dong " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
}
void Output(int a[row][col], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}
int SumOf(int a[row][col], int r, int c, int n, int type)
{
	int sum = 0;
	if (type == 0) 
	{
		for (int i = 0; i < c; i++)
			sum += a[n - 1][i];
	}
	else 
	{
		for (int i = 0; i < r; i++)
			sum += a[i][n - 1];
	}
	return sum;
}
void FindAll(int a[row][col], int r, int c, int x)
{
	int pos[row*col][2];
	int count = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (a[i][j] == x)
			{
				pos[count][0] = i;
				pos[count][1] = j;
				count++;
			}
	if (count)
	{
		cout << "Tim thay x " << count << " lan o cac vi tri: ";
		for (int i = 0; i < count; i++)
			cout << "(" << pos[i][0] << ", " << pos[i][1] << ")\t ";
	}
	else
		cout << "Khong tim thay" << endl;
}