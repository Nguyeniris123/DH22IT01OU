// In chuỗi ra từng dòng có số thứ tự
#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable : 4996)
int main()
{
	char s1[50];
	char s2[] = " ";
	cout << "Nhap chuoi: ";
	cin.getline(s1, 50);
	char *ptok = strtok(s1, s2);
	int i = 0;
	while (ptok != NULL)
	{
		i++;
		cout << i <<". "<< ptok << endl;
		ptok = strtok(NULL, s2);
	}
	return 0;
}