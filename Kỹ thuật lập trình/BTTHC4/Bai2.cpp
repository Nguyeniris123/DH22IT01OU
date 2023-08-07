//Bài 2. Viết chương trình nhận vào một chuỗi ký tự, thống kê cho biết chuỗi đó có các ký tự gì, mỗi
//ký tự xuất hiện bao nhiêu lần.
#include <iostream>
#include <string>
using namespace std;
#define SIZE 256
void Thongke(string s);
int main()
{
	string s;
	cout << "Nhap vao chuoi ki tu: ";
	getline(cin, s);
	Thongke(s);
	return 0;
}
void Thongke(string s)
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