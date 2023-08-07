//Viết chương trình cho phép người dùng nhập vào số nguyên n, khởi tạo một mảng
//chứa n số nguyên với các giá trị ngẫu nhiên < 50. Ghi ra file array.txt theo quy tắc :
//giá trị n nằm riêng trên một dòng, dòng còn lại chứa lần lượt các giá trị của từng
//phần tử trong mảng, mội phần tử cách nhau dấu phẩy.Ví dụ :
//5
//4, 10, 16, 7, 5
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	srand(time(0));
	int n;
	cout << "Nhap vao n: ";
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		p[i] = rand() % 50;
	ofstream out;
	out.open("array.txt");
	if (out.is_open())
	{
		out << n << endl;
		out << p[0];
		for (int i = 1; i < n; i++)
			out << ", " << p[i];
		out.close();
	}
	delete[]p;
	p = NULL;
	return 0;
}
