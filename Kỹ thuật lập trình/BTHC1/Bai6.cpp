/* Viết chương trình cho nhập vào hai ma trận (chứa các số nguyên). Sau đó tính kết quả
tổng và tích hai ma trận đó.
*/
#include <iostream>
using namespace std;
const int MAX = 100;
int menu();
void Input(int arr[MAX][MAX], int r, int c);
void Output(int arr[MAX][MAX], int r, int c);
void Tich(int A[MAX][MAX], int B[MAX][MAX], int row_a, int col_a, int col_b);
void Tong(int A[MAX][MAX], int B[MAX][MAX], int r, int c);
int main()
{
	int A[MAX][MAX];
	int B[MAX][MAX];
	int r, c, p;
	int select;
	do {
		system("pause");
		system("cls");
		select = menu();
		switch (select)
		{
		case 1:
			cout << "Nhap hang va cot 2 ma tran: ";
			cin >> r >> c;
			Input(A, r, c);
			cout << "ma tran 1" << endl;
			Output(A, r, c);
			Input(B, r, c);
			cout << "ma tran 2" << endl;
			Output(B, r, c);
			Tong(A, B, r, c);
			break;
		case 2:
			cout << "Nhap vao hang va cot ma tran 1: ";
			cin >> r >> c;
			Input(A, r, c);
			cout << "Nhap vao cot ma tran 2: ";
			cin >> p;
			Input(B, c, p);
			cout << "Ma tran 1 la: " << endl;
			Output(A, r, c);
			cout << "Ma tran 2 la: " << endl;
			Output(B, c, p);
			Tich(A, B, r, c, p);
			break;
		default:
			system("pause");
			return 0;
		}
		cout << "Nhan 1 phim de tiep tuc" << endl;
	} while (true);
	system("pause");
	return 0;
}
int menu()
{
	cout << "1. Tong hai ma tran" << endl;
	cout << "2. Tich hai ma tran" << endl;
	cout << "0. Ket thuc" << endl;
	int select;
	cout << "Chon: ";
	cin >> select;
	return select;
}
void Input(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " so nguyen cho dong thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];
	}
}
void Output(int arr[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
void Tich(int A[MAX][MAX], int B[MAX][MAX], int row_a, int col_a, int col_b)
{
	int C[MAX][MAX] = { {0} };
	for (int i = 0; i<row_a; i++)
		for (int j = 0; j<col_b; j++)
			for (int k = 0; k<col_a; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
	cout << "Ma tran tich: " << endl;
	Output(C, row_a, col_b);
}
void Tong(int A[MAX][MAX], int B[MAX][MAX], int r, int c)
{
	int C[MAX][MAX];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			C[i][j] = A[i][j] + B[i][j];
	cout << "Ma tran tong: " << endl;
	Output(C, r, c);
}