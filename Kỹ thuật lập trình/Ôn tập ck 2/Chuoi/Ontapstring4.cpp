#include <iostream>
#include <string>
using namespace std;//string FindAndDel(string s1, string s2);#pragma warning(disable : 4996)
int main()
{	string s1, s2;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	//Kiểm tra chuỗi con có nằm trong một chuỗi hay không ?
	int pos = s1.find(s2);	if (pos >= 0)
	{
		cout << "Chuoi con co trong chuoi lon" << endl;
	}
	else
	{
		cout << "Chuoi con khong co trong chuoi lon" << endl;
	}	/*cout << "Chuoi sau khi xoa: " << FindAndDel(s1, s2) << endl;*/	return 0;}//Tìm và xóa tất cả//string FindAndDel(string s1, string s2)
//{
//	int pos = s1.find(s2);
//	while (pos >= 0)
//	{
//		s1 = s1.erase(pos, s2.length());
//		pos = s1.find(s2);
//	}
//	return s1;
//}