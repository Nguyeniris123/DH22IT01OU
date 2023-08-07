//Viết chương trình khởi tạo một mảng hai chiều m hàng và n cột(m và n nhập từ bàn phím) chứa các số
//nguyên từ 1 - 100. Lưu mảng vào tập tin matrix1.txt
#include <iostream>
#include <fstream>
using namespace std;
void Input(int **a, int r, int c);
int main()
{
	int m, n;
	cout << "Nhap vao hang va cot: ";
	cin >> m >> n;
	// Khởi tạo mảng hai chiều
	int** a = new int*[m];
	for (int i = 0; i < m; ++i) 
	{
		a[i] = new int[n];
	}
	Input(a, m, n);
	ofstream out;
	out.open("matrix1.txt");
	if (out.is_open())
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				out << a[i][j] << " ";
			out << endl;
		}
		out.close();
	}
	else cout << "Ko the m file" << endl;
	// Giải phóng bộ nhớ của mảng
	for (int i = 0; i < m; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
void Input(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 100 + 1;
	}
}
