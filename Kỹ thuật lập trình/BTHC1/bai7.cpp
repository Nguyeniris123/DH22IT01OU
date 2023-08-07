#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 100;
void Inputrand(int a[MAX][MAX], int r, int c);
void Output(int a[MAX][MAX], int r, int c);
double Trungbinhcong(int a[MAX][MAX], int r, int c);
//void Timkiem(int a[MAX][MAX], int r, int c);
void findNumber(int a[MAX][MAX], int r, int c, int x);
double Tich(int a[MAX][MAX], int r, int c);
void swapNumbers(int a[MAX][MAX], int r, int c, int x, int y);
int main()
{
	int a[MAX][MAX];
	int r, c, x, y;
	cout << "Nhap hang va cot: ";
	cin >> r >> c;
	Inputrand(a, r, c);
	cout << "mang da luu: " << endl;
	Output(a, r, c);
	cout << "Trung binh tong cac phan tu: " <<fixed<<setprecision(2)<< Trungbinhcong(a, r, c) << endl;
	//Timkiem(a, r, c);
	cout << "Nhap vao gia tri can tim: ";
	cin >> x;
	findNumber(a, r, c, x);
	cout << "Nhap vao gia tri cua x va y de hoan doi: ";
	cin >> x >> y;
	swapNumbers(a, r, c, x, y);
	cout << "mang sau khi hoan doi: " << endl;
	Output(a, r, c);
	cout << "Nhap cot can tinh tich: ";
	cin >> c;
	cout << "Tich cac phan tu cua cot da chon: " << Tich(a, r, c) << endl;
	return 0;
}
void Inputrand(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 1000;
	}
}
void Output(int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
double Trungbinhcong(int a[MAX][MAX], int r, int c)
{
	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum += a[i][j];
		}
	}
	double avg = sum / (r * c);
	return avg;
}
/*void Timkiem(int a[MAX][MAX], int r, int c)
{
	int x;
	bool flag = false;
	cout << "Nhap vao gia tri can tim: ";
	cin >> x;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; i++)
			if (a[i][j] == x)
			{
				flag = true;
				break;
			}
	if (flag)
		cout << x << " co trong mang" << endl;
	else
		cout << x << " Khong co trong mang" << endl;
}
*/
void findNumber(int a[MAX][MAX], int r, int c, int x) 
{
	bool found = false;
	int row, col;
	// Duyệt qua từng phần tử trong mảng và so sánh với giá trị x
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == x) 
			{
				found = true;
				row = i+1;
				col = j+1;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}
	// Nếu tìm thấy giá trị x, in ra vị trí của nó trong mảng
	if (found) {
		cout << "Gia tri " << x << " o dong " << row << " va cot " << col << endl;
	}
	// Nếu không tìm thấy giá trị x, in ra thông báo không tìm thấy
	else {
		cout << "Gia tri " << x << " khong co trong mang" << endl;
	}
}
void swapNumbers(int a[MAX][MAX], int r, int c, int x, int y)
{
	// Tìm vị trí của x và y trong mảng
	int x_row, x_col, y_row, y_col;
	for (int i = 0; i < r; i++) 
	{
		for (int j = 0; j < c; j++) 
		{
			if (a[i][j] == x)
			{
				x_row = i;
				x_col = j;
			}
			if (a[i][j] == y) 
			{
				y_row = i;
				y_col = j;
			}
		}
	}
	// Hoán đổi giá trị của x và y
	int temp = a[x_row][x_col];
	a[x_row][x_col] = a[y_row][y_col];
	a[y_row][y_col] = temp;
}
double Tich(int a[MAX][MAX], int r, int c)
{
	int tich = 1;
	for (int i = 0; i < r; i++)
		tich *= a[i][c-1];
	return tich;
}