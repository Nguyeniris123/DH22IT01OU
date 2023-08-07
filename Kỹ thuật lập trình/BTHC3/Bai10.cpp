#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL)); // Thiết lập seed cho hàm rand()

	int m, n, p;
	cout << "Nhap so hang va so cot cua ma tran A: ";
	cin >> m >> n;
	cout << "Nhap so cot cua ma tran B: ";
	cin >> n >> p;

	int **A = new int *[m]; // Khai báo mảng động A
	for (int i = 0; i < m; i++)
	{
		A[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 50; // Khởi tạo giá trị ngẫu nhiên cho ma trận A
		}
	}

	int **B = new int *[n]; // Khai báo mảng động B
	for (int i = 0; i < n; i++)
	{
		B[i] = new int[p];
		for (int j = 0; j < p; j++)
		{
			B[i][j] = rand() % 50; // Khởi tạo giá trị ngẫu nhiên cho ma trận B
		}
	}

	// Tính tổng của 2 ma trận
	int **C = new int *[m];
	for (int i = 0; i < m; i++) {
		C[i] = new int[p];
		for (int j = 0; j < p; j++) {
			C[i][j] = 0; // Khởi tạo giá trị ban đầu của phần tử ma trận C[i][j] bằng 0
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j]; // Tính tổng các tích của phần tử ma trận A và B
			}
		}
	}

	// In ra các ma trận A, B và C
	cout << "Ma tran A:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Ma tran B:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Tong cua hai ma tran:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	// Gi

		// Tính tích của 2 ma trận
	int **D = new int *[m];
	for (int i = 0; i < m; i++) {
		D[i] = new int[p];
		for (int j = 0; j < p; j++) {
			D[i][j] = 0; // Khởi tạo giá trị ban đầu của phần tử ma trận D[i][j] bằng 0
			for (int k = 0; k < n; k++) {
				D[i][j] += A[i][k] * B[k][j]; // Tính tổng các tích của phần tử ma trận A và B
			}
		}
	}

	// In ra ma trận tích
	cout << "Tich cua hai ma tran:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			cout << D[i][j] << " ";
		}
		cout << endl;
	}

	// Giải phóng bộ nhớ động
	for (int i = 0; i < m; i++) {
		delete[] A[i];
		delete[] C[i];
		delete[] D[i];
	}
	for (int i = 0; i < n; i++) {
		delete[] B[i];
	}
	delete[] A;
	delete[] B;
	delete[] C;
	delete[] D;

	return 0;
}