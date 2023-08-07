#include <iostream>
using namespace std;
const int MAX = 100;
void Input(int arr[MAX][MAX], int r, int c);
void Output(int arr[MAX][MAX], int r, int c);
int Sum(int arr[MAX][MAX], int r, int c);
int MAXL(int arr[MAX][MAX], int r, int c);
int MINL(int arr[MAX][MAX], int r, int c);
void Timvitriminmax(int arr[MAX][MAX], int r, int c, int& hang, int& cot, bool timMin);
int main()
{
	int arr[MAX][MAX];
	int r , c;
	do {
		cout << "Nhap vao so hang: ";
		cin >> r;
		if (r <=0  || r>10)
			cout << "Loi, nhap lai" << endl;
	} while (r <= 0 || r > 10);
	do {
		cout << "Nhap vao so cot: ";
		cin >> c;
		if (c <= 0 || c > 15)
			cout << "Loi, nhap lai" << endl;
	} while (c <= 0 || c > 15);
	Input(arr, r, c);
	Output(arr, r, c);
	cout << "Tong cac phan tu cua mang la: " << Sum(arr, r, c) << endl;
	cout << "Gia tri lon nhat trong mang: " << MAXL(arr, r, c) << endl;
	cout << "Gia tri nho nhat trong mang: " << MINL(arr, r, c) << endl;
	int hangMin, cotMin;
	Timvitriminmax(arr, r, c, hangMin, cotMin, true);
	cout << "Gia tri nho nhat co vi tri [" << hangMin << "][" << cotMin << "]" << endl;
	int hangMax, cotMax;
	Timvitriminmax(arr, r, c, hangMax, cotMax, false);
	cout << "Gia tri lon nhat co vi tri [" << hangMax << "][" << cotMax << "]" << endl;
	return 0;
}
void Input(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " so nguyen cho dong thu " << i << ": ";
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];
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
int Sum(int arr[MAX][MAX], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tong += arr[i][j];
	return tong;
}
int MAXL(int arr[MAX][MAX], int r, int c)
{
	int maxsize = arr[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] > maxsize) maxsize = arr[i][j];
	return maxsize;
}
int MINL(int arr[MAX][MAX], int r, int c)
{
	int minsize = arr[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] < minsize) minsize = arr[i][j];
	return minsize;
}
void Timvitriminmax(int arr[MAX][MAX], int r, int c, int& hang, int& cot, bool timMin)
{
	int minMax = arr[0][0];
	hang = 0;
	cot = 0;
	for (int i = 0; i < r; i++) 
	{
		for (int j = 0; j < c; j++) 
		{
			if (timMin)
			{
				if (arr[i][j] < minMax)
				{
					minMax = arr[i][j];
					hang = i;
					cot = j;
				}
			}
			else
			{
				if (arr[i][j] > minMax)
				{
					minMax = arr[i][j];
					hang = i;
					cot = j;
				}
			}
		}
	}
}