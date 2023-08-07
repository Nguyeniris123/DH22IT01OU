//Bài 8. Viết hàm nhận vào tham số là ba chuỗi s1, s2, s3. Hàm này thực hiện chức năng tìm kiếm và
//thay thế tất cả chuỗi con s2 trong s1 bằng chuỗi s3 và trả về chuỗi kết quả.
//Viết chương trình kiểm chứng hàm vừa xây dựng
#include <iostream>
#include <string>
using namespace std;
string Thaythe(string s1, string s2, string s3);
int main()
{
	string s1, s2, s3;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	cout << "Nhap chuoi s3: ";
	getline(cin, s3);
	cout << "Chuoi s1 sau khi thay th: " << Thaythe(s1, s2, s3) << endl;
	return 0;
}
string Thaythe(string s1, string s2, string s3)
{
	int vitri= s1.find(s2,0);
	s1.replace(vitri, s2.length(), s3);
	return s1;
}