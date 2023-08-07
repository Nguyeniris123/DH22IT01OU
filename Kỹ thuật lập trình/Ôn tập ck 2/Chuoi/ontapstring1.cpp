#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Thongke(string s);
void InTuMoiDong(string s);
string ChuanHoa(string s);
bool kiemTraKiTuTrongChuoi(const string& s, char x);
int Sotu(string s);
string Loaibokhoangtrang(string s);
const int SIZE = 256;
#pragma warning(disable : 4996)
int main()
{
	string s;
	cout << "Nhap vao chuoi: ";
	getline(cin, s);
	Thongke(s);
	InTuMoiDong(s);
	cout << "Chuoi sau khi chuan hoa: " << ChuanHoa(s) << endl;
	char x;
	cout << "Nhap vao ki tu can tim: ";
	cin >> x;
	if (kiemTraKiTuTrongChuoi(s, x))
	{
		cout << "Ki tu co trong chuoi" << endl;
	}
	else {
		cout << "Ki tu ko co trong chuoi" << endl;
	}
	cout << "So tu trong chuoi s: " << Sotu(s) << endl;
	cout << "Chuoi sau khi loai bo khoang trang thua: " << Loaibokhoangtrang(s) << endl;
	return 0;
}

void Thongke(string s) // Xác định số lần xuất hiện của từng kí tự trong chuỗi. 
{
	int arrkeys[SIZE] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		if (!isalpha(s[i]))
			arrkeys[s[i]]++;
		else
		{
			if (islower(s[i]))
				arrkeys[s[i] - 32]++;
			else
				arrkeys[s[i]]++;
		}
	}
	for (int i = 0; i < SIZE; i++)
		if (arrkeys[i] > 0 && i != 32)
			cout << "Ki tu " << char(i) << " co " << arrkeys[i] << " lan xuat hien" << endl;

}

//In các từ trong chuỗi, mỗi từ trên một dòng.
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

string ChuanHoa(string s) //Chuẩn hóa chuỗi(không có các khoảng trắng thừa, các từ được bắt đầu bằng kí tự chữ hoa, các kí tự
					    	/*còn lại là chữ thường)*/
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

//Kiểm tra một kí tự có nằm trong chuỗi hay không ?
bool kiemTraKiTuTrongChuoi(const string& s, char x)
{
    for (char c : s)
	{
        if (c == x) 
		{
            return true;
        }
    }
    return false;
}


int Sotu(string s)  /* Đếm số từ trong một chuỗi.*/
{
	char *cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());  //sao chep chuoi s sang chuoi c_str de su dung ham strtok
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
// Loại bỏ các khoảng trắng thừa trong chuỗi.
string Loaibokhoangtrang(string s)
{
	string res = "";
	char *cstr = new char[s.length() + 1];
	strcpy(cstr, s.c_str());//sao chep chuoi s sang chuoi c_str de su dung ham strtok
	char *p = strtok(cstr, " ");
	while (p != NULL)
	{
		string str(p);
		res = res + str + " ";
		p = strtok(NULL, " ");
	}
	delete[]cstr;
	return res;
}