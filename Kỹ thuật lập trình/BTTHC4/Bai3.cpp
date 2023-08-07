//Bài 3. Xây dựng hàm nhận vào một chuỗi ký tự(không khoảng trắng), kiểm tra xem chuỗi đó có phải
//là chuỗi palindrome hay không (chuoi doi xung)? Viết chương trình kiểm chứng hàm vừa xây dựng.
#include <iostream>
#include <string>
using namespace std;
#define SIZE 256
bool ChuoiDoiXung(string s);
int main()
{
	string s;
	cout << "Nhap vao chuoi ki tu: ";
	getline(cin, s);
	if (ChuoiDoiXung(s) == true)
		cout << "Chuoi doi xung" << endl;
	else cout << "Chuoi ko doi xung" << endl;
	return 0;
}
bool ChuoiDoiXung(string s)
{
	bool bcheck = true;
	int i = 0, j = s.length() - 1;
	while (i < j) // tung cap ki tu o hai dau chuoi
	{
		if (tolower(s[i]) != tolower(s[j]))
		{// neu co hai ki tu khac nhau
			bcheck = false;
			break;
		}
	}
	i++, j++;
	return bcheck;
}