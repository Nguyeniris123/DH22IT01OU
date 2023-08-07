//Viết chương trình nhập vào 3 số nguyên a, b, c.Sau đó ghi xuống file songuyen.txt
//giá trị 3 số nguyên trên cách nhau bằng ký tự ‘#’.Sau đó đọc dữ liệu từ file này,
//tính giá trị tổng của 3 số nguyên trong file và ghi kết quả vào cuối file.
//Ví dụ : với a = 2, b = 3, c = 4, nội dung file songuyen.txt ban dầu là : 2#3#4
//Sau khi mở lại file songuyen.txt, tính tổng và ghi tiếp vào file : 2#3#4#9
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap vao 3 so nguyen: ";
	cin >> a >> b >> c;
	ofstream out;
	out.open("songuyen.txt");
	if (out.is_open())
	{
		out << a << "#" << b << "#" << c;
		out.close();
	}
	else cout << "ko the mo file" << endl;
	ifstream in;
	in.open("songuyen.txt");
	if (in.is_open())
	{
		in >> a;
		in >> b;
		in >> c;
		in.close();
	}
	else cout << "Khong the mo file" << endl;
	out.open("songuyen.txt");
	if (out.is_open())
	{
		int d = a + b + c;
		out << a << "#" << b << "#" << c << "#" << d;
		out.close();
	}
	else cout << "ko the mo file" << endl;
	return 0;
}