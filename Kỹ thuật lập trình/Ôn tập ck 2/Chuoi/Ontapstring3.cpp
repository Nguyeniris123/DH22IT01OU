#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Intudaingannhat(string s);
string Daochuoi(string s);
bool ChuoiDoiXung(string s);
bool ChuoiTuanHoan(const string& s);
#pragma warning(disable : 4996)
int main()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	Intudaingannhat(s);
	cout << "Chuoi sau khi dao: " << Daochuoi(s) << endl;
	if (ChuoiDoiXung(s) == true)
		cout << "Chuoi doi xung" << endl;
	else cout << "Chuoi ko doi xung" << endl;
	if (ChuoiTuanHoan(s))
		cout << "Chuoi la chuoi tuan hoan" << endl;
	else
		cout << "Chuoi khong la chuoi tuan hoan" << endl;
	return 0;
}

//In từ dài nhất (từ ngắn nhất) trong chuỗi.
void Intudaingannhat(string s)
{
	string longestWord;
	string shortestWord;
	string word;
	for (size_t i = 0; i < s.length(); ++i)
	{
		if (s[i] != ' ')
		{
			word += s[i];
		}
		else
		{
			if (longestWord.empty() || word.length() > longestWord.length()) 
			{
				longestWord = word;
			}
			if (shortestWord.empty() || word.length() < shortestWord.length())
			{
				shortestWord = word;
			}
			word = "";
		}
	}

	if (!word.empty())
	{
		if (longestWord.empty() || word.length() > longestWord.length())
		{
			longestWord = word;
		}
		if (shortestWord.empty() || word.length() < shortestWord.length()) 
		{
			shortestWord = word;
		}
	}

	cout << "Tu dai nhat: " << longestWord << endl;
	cout << "Tu ngan nhat: " << shortestWord << endl;
}

// Đảo ngược chuỗi.
string Daochuoi(string s)
{
	string x;
	for (int i = s.length() - 1; i >= 0; --i)
	{
		x += s[i];
	}
	return x;
}

//Kiểm tra chuỗi có phải là một palindrome hay không ?
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

// Kiểm tra chuỗi có tuần hoàn hay không ? 
bool ChuoiTuanHoan(const string& s) 
{
	int doDai = s.length();
	if (doDai == 0)
	{
		return false;
	}

	string ghep = s + s;
	for (int i = 1; i < doDai; ++i)
	{
		string phuChuoi = ghep.substr(i, doDai);
		if (phuChuoi == s)
		{
			return true;
		}
	}
	return false;
}

