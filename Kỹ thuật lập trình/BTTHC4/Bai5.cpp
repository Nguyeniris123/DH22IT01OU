//Bài 5. Viết chương trình cho phép người dùng nhập password(tối đa 10 ký tự) và hiển thị dưới dạng
//ký tự “*”.Sau đó kiểm tra xem đúng password là “svCQ” hay không ? Nếu đúng thông báo đã đăng
//nhập thành công, nếu sai yêu cầu nhập lại.Tối đa cho phép nhập 3 lần.
//Ví dụ :
//Nhap mat khau : *******
//Nhap sai!Nhap lai!
//Nhap mat khau : ****
//Dang nhap thanh cong!
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
const char BACKSPACE = 8; // ma ascii kis tujw backspace
const char ENTER = 13; // ma ascii ki tu enter
string GetPass(string prompt);

int main()
{
	int dem = 0;
	bool bTrue = true;
	string password = "svCQ";
	while (true)
	{
		string input = GetPass("Nhap mat khau: ");
		if (input != password)
		{
			dem++;
			if (dem < 3)
				cout << "Nhap sai! Nhap lai!" << endl;
			else
			{
				cout << "Khong the dang nhap" << endl;
				bTrue = false;
				break;
			}
		}
		else break;
	}
	if (bTrue)
		cout << "Dang nhap thanh cong" << endl;
	return 0;
}
string GetPass(string prompt)
{
	cout << prompt;
	string password;
	char ch;
	while ((ch = _getch()) != ENTER)
	{
		if (ch == BACKSPACE)//nhan phim backspace xoa lui
		{
			if (password.length() > 0)
			{
				cout << "\b \b";
				password.resize(password.length() - 1);//giam 1 ki tu
			}
		}
		else
		{
			password += ch;
			cout << "*";
		}
	}
	cout << endl;
	return password;
}