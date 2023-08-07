//Bài 10. Viết hàm mã hóa chuỗi theo nguyên tắc sau :
//-Nếu là chữ cái : thay bằng ký tự đứng sau nó trong bảng mã ascii n ký tự theo hướng xoay
//vòng(với n được nhập từ bàn phím), ví dụ n = 2 : ‘A’ thay bằng ‘C’, ‘B’ thay bằng ‘D’, ‘Y’ thay bằng ‘A’, ‘Z’ thay bằng ‘B’.
//- Nếu là chữ số : thay bằng chữ số cách nó n giá trị theo hướng xoay vòng(với n được nhập từ
//	bàn phím), ví dụ n = 2 : ‘0’ thay bằng ‘2’, ‘1’ thay bằng ‘3’, ‘8’ thay bằng ‘0’, ‘9’ thay bằng ‘1’.
//	- Viết chương trình kiểm chứng hàm vừa xây dựng, giả sử nhập “Hello128”, n = 2, chuỗi mã hóa là “Jgnnq340”
#include <iostream>
#include <string>
using namespace std;
string Mahoa(string s, int n);
#pragma warning( disable : 4996 )
int main()
{
	string s;
	int n;
	cout << "Nhap chuoi s: ";
	getline(cin, s);
	cout << "Nhap ma hoa n: ";
	cin >> n;
	cout << "Chuoi sau khi ma hoa: " << Mahoa(s, n) << endl;
	return 0;
}
string Mahoa(string s, int n)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))// neu s[i] la so
		{
			if ((s[i]+n) > '9')
				s[i] = s[i] + n - 10;
			else
				s[i] = s[i] + n;
		}
		else if (isalpha(s[i])) //neu s[i] la ki tu chu
		{
			if (islower(s[i]))//la ki tu thuong
			{
				if ((s[i]+n) > 'z')
					s[i] = s[i] + n - 26;
				else
					s[i] = s[i] + n;
			}
			else //(s[i])la ki tu hoa
			{
				if ((s[i]+n) > 'Z')
					s[i] = s[i] + n - 26;
				else
					s[i] = s[i] + n;
			}
		}
	}
	return s;
}