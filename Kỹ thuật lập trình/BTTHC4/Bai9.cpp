//Bài 9. Xây dựng chương trình nhập vào hai chuỗi s1, s2 và một vị trí x.Chèn chuỗi s2 vào s1 tại vị
//trí x nếu x là vị trí hợp lệ.In chuỗi kết quả ra màn hình.
#include <iostream>
#include <string>
using namespace std;
string Insertx(string s1, string s2, int x);
int main()
{
	string s1, s2;
	int x;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	cout << "Nhap vi tri x muon chen: ";
	cin >> x;
	cout << "Chuoi s1 sau khi them: " << Insertx(s1, s2, x) << endl;
	return 0;
}
string Insertx(string s1, string s2, int x)
{
	if (x>=0 && x<=s1.length())
	{
		s1.insert(x, s2);
		return s1;
	}
}