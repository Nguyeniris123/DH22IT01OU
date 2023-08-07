 /*Đọc tập tin matrix1.txt tạo ở câu 1, sắp xếp các hàng theo thứ tự tăng dần và lưu vào tập tin matrix2.txt*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inputFile;
	inputFile.open("matrix1.txt");
	if (!inputFile.is_open())
	{
		cout << "ko the mo file." << endl;
		return 1;
	}
	int m, n;
	inputFile >> m >> n;
	int** a = new int*[m];
	for (int i = 0; i < m; ++i)
	{
		a[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			inputFile >> a[i][j];
		}
	}
	inputFile.close();

	// Sắp xếp các hàng theo thứ tự tăng dần
	for (int i = 0; i < m; ++i) 
	{
		for (int j = 0; j < n - 1; ++j) 
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (a[i][j] > a[i][k])
				{
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}

	// Ghi mảng đã sắp xếp vào tập tin matrix2.txt
	ofstream outputFile("matrix2.txt");
	if (outputFile.is_open()) 
	{
		outputFile << m << " " << n << endl;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				outputFile << a[i][j] << " ";
			}
			outputFile << endl;
		}
		outputFile.close();
		cout << "ghi mang da sap xep thanh cong." << endl;
	}
	else {
		cout << "ko the mo tap tin." << endl;
	}
	// Giải phóng bộ nhớ của mảng
	for (int i = 0; i < m; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	return 0;
}