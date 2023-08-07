#include <iostream>
#include <cstdlib> // thu vien chua ham rand()
#include <iomanip>
using namespace std;

// ham cap phat dong 
int **createMatrix(int r, int c) 
{
	int **matrix = new int *[r];
	for (int i = 0; i < r; i++) 
	{
		matrix[i] = new int[c];
	}
	return matrix;
}

// ham tao gia tri ngau nhien
void NgauNhien(int **matrix, int r, int c) 
{
	for (int i = 0; i < r; i++) 
	{
		for (int j = 0; j < c; j++)
			matrix[i][j] = rand() % 10; // khoi tao gia tri ngau nhien tu 0 - 9
	}
}

// ham tinh tong 
int **Tong_Matrix(int **matrix1, int **matrix2, int r, int c) 
{
	int **sum = createMatrix(r, c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
	}
	return sum;
}

// ham tinh tich 
int **Tich_Matrix(int **matrix1, int **matrix2, int r1, int c1, int r2, int c2)
{
	if (c1 != r2) 
		return NULL; // neu kich thuoc khong hop le tra ve NULL 
	int **tich = createMatrix(r1, c2);
	for (int i = 0; i < r1; i++) 
	{
		for (int j = 0; j < c2; j++)
		{
			tich[i][j] = 0;
			for (int k = 0; k < c1; k++) 
				tich[i][j] += matrix1[i][k] * matrix2[k][j];
		}
	}
	return tich;
}

// Hàm in ra ma trận
void printMatrix(int **matrix, int r, int c) 
{
	for (int i = 0; i < r; i++) 
	{
		for (int j = 0; j < c; j++) 
			cout <<setw(4)<< matrix[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

int main()
{
	int r1, c1, r2, c2;

	cout << "Nhap kich thuoc cua ma tran 1: ";
	cin >> r1 >> c1;

	cout << "Nhap kich thuoc cua ma tran 2: ";
	cin >> r2 >> c2;

	// cap phat dong 
	int **matrix1 = createMatrix(r1, c1);
	int **matrix2 = createMatrix(r2, c2);

	NgauNhien(matrix1, r1, c1);
	NgauNhien(matrix2, r2, c2);

	cout << "Ma tran 1: " << endl;
	printMatrix(matrix1, r1, c1);

	cout << "Ma tran 2: " << endl;
	printMatrix(matrix2, r2, c2);

	// tong va tich 2 ma tran
	int **sum = Tong_Matrix(matrix1, matrix2, r1, c1);
	int **tich = Tich_Matrix(matrix1, matrix2, r1, c1, r2, c2);

	// kiem tra kich thuoc co hop le hay khong
	//tong 2 ma tran
	if (r1 != r2 || c1 != c2)
		cout << "khong the cong hai ma tran nay." << endl;
	else
	{
		cout << "Tong cua hai ma tran la: " << endl;
		printMatrix(sum, r1, c1);
	}
	// tich 2 ma tran
	if (c1 != r2)
		cout << "Khong the nhan hai ma tran nay." << endl;
	else
	{
		cout << "Tich cua hai ma tran la: " << endl;
		if (tich == NULL)
			cout << "Khong the nhan hai ma tran nay." << endl;
		else
			printMatrix(tich, r1, c2);
	}
		
	
	// Giai phong bo nho
	for (int i = 0; i < r1; i++)
		delete[] matrix1[i];
	delete[] matrix1;

	for (int i = 0; i < r2; i++)
		delete[] matrix2[i];
	delete[] matrix2;

	for (int i = 0; i < r1; i++)
		delete[] sum[i];
	delete[] sum;

	for (int i = 0; i < r1; i++)
		delete[] tich[i];
	delete[] tich;

	return 0;
}