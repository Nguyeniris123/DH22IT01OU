#include <iostream>
#include <string>
using namespace std;
string FindAndDel(string s1, string s2);
int main()
{
	string s1, s2;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	cout << "Chuoi s1 sau khi xoa la: "<<FindAndDel(s1,s2) << endl;
	return 0;
}
string FindAndDel(string s1, string s2)
{
	int pos = s1.find(s2);
	while (pos >= 0)
	{
		s1 = s1.erase(pos, s2.length());
		pos = s1.find(s2);
	}
	return s1;
}