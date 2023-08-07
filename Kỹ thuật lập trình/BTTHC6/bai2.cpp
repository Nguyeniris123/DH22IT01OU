//Viết chương trình cho phép nhập vào n chuỗi(n do người dùng nhập), ghi từng
//chuỗi trên ra file string.txt, mỗi chuỗi nằm trên một dòng.Sau đó mở lại file
//string.txt, đọc các chuỗi trong file, chuyển về chữ hoa, ghi ra file string2.txt, có
//đánh số thứ tự tăng dần trước mỗi dòng trong file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string Toupper(string s);

int main()
{
	ifstream in;
	ofstream out;
	string str;
	int n;
	cout << "Nhap vao so chuoi: ";
	cin >> n;
	cin.ignore();
	string file1 = "string1.txt";
	string file2 = "string2.txt";
	out.open(file1);
	if (out.is_open())
	{
		for (int i = 1; i <= n; i++)
		{
			cout << "Nhap chuoi thu " << i << ": ";
			getline(cin, str);
			out << str << endl;
		}
		out.close();
	}
	in.open(file1);
	if (in.is_open())
	{
		out.open(file2);
		if (!out.is_open())
			return 0;
		int stt = 1;
		while (!in.eof())
		{
			getline(in, str);
			if (str.length() > 0)
				out << stt++ << ". " << Toupper(str) << endl;
		}
		in.close();
		out.close();
	}
	return 0;
}
string Toupper(string s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}