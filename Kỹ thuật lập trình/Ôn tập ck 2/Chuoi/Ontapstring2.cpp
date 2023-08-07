#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string Tachtudau(string s);
string Tachtucuoi(string s);
string Chuyentucuoithanhdau(string s);
#pragma warning(disable : 4996)
int main()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Tu dau: ";
	Tachtudau(s);
	cout << "Tu cuoi: " << Tachtucuoi(s) << endl;
	cout << "Chuyen tu cuoi thanh dau: " << Chuyentucuoithanhdau(s) << endl;
	return 0;
}
//Tách từ đầu tiên trong chuỗi.
string Tachtudau(string s)
{
	char* cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());
	char* p = strtok(cstr, " ");
		cout << p << endl;
		p = strtok(NULL, " ");
	delete[]cstr;
	return p;
}
//Tách từ cuối cùng trong chuỗi
string Tachtucuoi(string s)
{
	string x;
	char* cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());
	char* p = strtok(cstr, " ");
	while (p != NULL)
	{
		x = p;
		p = strtok(NULL, " ");
	}
	delete[]cstr;
	return x;
}
//Chuyển từ cuối cùng thành từ đầu tiên trong chuỗi
string Chuyentucuoithanhdau(string s)
{
	string x;
	char* cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());
	char* p = strtok(cstr, " ");
	while (p != NULL)
	{
		x = p;
		p = strtok(NULL, " ");
	}
	x = x + " ";
	s.insert(0, x);
	delete[]cstr;
	return s;
}