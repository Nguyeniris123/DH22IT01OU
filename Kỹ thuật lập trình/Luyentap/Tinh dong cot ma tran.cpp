#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 100;
void Inputrand(int arr[MAX][MAX], int r, int c);
void Output(int arr[MAX][MAX], int r, int c);
int Tichdong(int arr[MAX][MAX], int row, int c);
int Tichcot(int arr[MAX][MAX], int r, int col);
int main()
{
	int arr[MAX][MAX];
	int r, c, row, col;
	cout << "Nhap vao so hang va cot: ";
	cin >> r >> c;
	Inputrand(arr, r, c);
	Output(arr, r, c);
	cout << "Nhap dong can tinh tich: ";
	cin >> row;
	cout << "Tich cua dong " << row << ": " << Tichdong(arr, row, c) << endl;
	cout << "Nhap cot can tinh tich: ";
	cin >> col;
	cout << "Tich cua cot " << col << ": " << Tichcot(arr, r, col) << endl;
	return 0;
}
void Inputrand(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		//cout << "Nhap vao " << c << " gia tri hang thu " << i + 1 << endl;
		//cin >> arr[i][j];
		for (int j = 0; j < c; j++)
			arr[i][j] = rand() % 100;
	}
}
void Output(int arr[MAX][MAX], int r, int c)
{
	cout << "Mang da luu tru la: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
int Tichdong(int arr[MAX][MAX], int row, int c)
{
	int nhan = 1;
	for (int j = 0; j < c; j++)
		nhan = nhan * arr[row - 1][j];
	return nhan;
}
int Tichcot(int arr[MAX][MAX], int r, int col)
{
	int nhan = 1;
	for (int i = 0; i < r; i++)
		nhan = nhan * arr[i][col-1];
	return nhan;
}