#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//#include <cstring>
using namespace std;
void InTuMoiDong(string s);
int main()
{
	string s;
	cout << "nhap chuoi: ";
	getline(cin, s);
	InTuMoiDong(s);
	return 0;
}
void InTuMoiDong(string s)
{
	char* cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());
	char* p = strtok(cstr, " ");
	while (p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL, " ");
	}
	delete[]cstr;
}