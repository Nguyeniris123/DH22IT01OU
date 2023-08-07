#include <iostream>
#include <string>
using namespace std;
string Chuoidao(string s);
int Sotu(string s);
string ChuanHoa(string s);
#pragma warning( disable : 4996 )
int main()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Chuoi dao la: " << Chuoidao(s) << endl;
	cout << "Dem so tu trong chuoi: " << Sotu(s) << endl;
	cout << "Chuoi sau khi chuan hoa: " << ChuanHoa(s) << endl;
	return 0;
}
string Chuoidao(string s)
{
	int i = 0, j = s.length() - 1;
	while (i < j)
	{
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
	return s;
}
int Sotu(string s)
{
	char *cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());//sao chep chuoi s sang chuoi c_str de su dung ham strtok
	char *p = strtok(cstr, " ");
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = strtok(NULL, " ");
	}
	delete[]cstr;
	return dem;
 }
string ChuanHoa(string s)
{
	string res = "";
	char *cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());//sao chep chuoi s sang chuoi c_str de su dung ham strtok
	char *p = strtok(cstr, " ");
	while (p != NULL)
	{
		string str(p);
		str[0] = toupper(str[0]);//chuyen ki tu dau thanh hoa
		for (int i = 1; i < str.length(); i++)
			str[i] = tolower(str[i]);// chuyen cac ki tu con lai sang thuong
		res = res + str + " ";
		p = strtok(NULL, " ");
	}
	delete[]cstr;
	return res;
}