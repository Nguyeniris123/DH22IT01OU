//Định nghĩa kiểu dũ liệu Matran gồm các thông tin sau :
//-Số dòng, số cột kiểu int
//- Con trỏ kiểu con trỏ đến mảng 2 chiều lưu trữ số nguyên
//Viết chương trình C++ thực hiện các việc sau :
//-Phát sinh ngẫu nhiên giá trị cho 1 biến kiểu Matran
//- Xuất giá trị đang lưu trữ trong mảng 2 chiều của biến kiểu Matran
//- Tính tổng các phần tử nào là số đối xứng trong mảng 2 chiều của biến kiểu Matran
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Matran {
	int n_rows;  // số dòng
	int n_cols;  // số cột
	int** arr;   // mảng 2 chiều lưu trữ số nguyên

	// hàm khởi tạo mặc định
	Matran() {
		n_rows = 0;
		n_cols = 0;
		arr = NULL;
	}

	// hàm khởi tạo với số dòng và số cột
	Matran(int rows, int cols) 
	{
		n_rows = rows;
		n_cols = cols;
		arr = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}
	}

	// hàm phát sinh giá trị ngẫu nhiên cho mảng
	void randomize()
	{
		srand(time(NULL));
		for (int i = 0; i < n_rows; i++)
		{
			for (int j = 0; j < n_cols; j++) 
			{
				arr[i][j] = rand() % 10;
			}
		}
	}

	// hàm xuất mảng
	void print()
	{
		for (int i = 0; i < n_rows; i++)
		{
			for (int j = 0; j < n_cols; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	// hàm tính tổng các phần tử đối xứng (Đối xứng là tổng đường chéo của ma trận vuông)
	int sum_symmetric()
	{
		int sum = 0;
		for (int i = 0; i < n_rows; i++) 
		{
			for (int j = 0; j < n_cols; j++) 
			{
				if (i <= j && arr[i][j] == arr[j][i]) 
				{
					sum += arr[i][j];
				}
			}
		}
		return sum;
	}
};

int main()
{
	Matran A(3,3);  // tạo ma trận A có 3 dòng và 3 cột
	A.randomize();   // phát sinh giá trị ngẫu nhiên cho A
	cout << "Ma tran A:" << endl;
	A.print();       // xuất giá trị của A
	int sum = A.sum_symmetric();  // tính tổng các phần tử đối xứng của A
	cout << "Tong cac phan tu doi xung cua A la: " << sum << endl;
	return 0;
}




