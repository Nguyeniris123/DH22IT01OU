#include <iostream>
#include <string>
using namespace std;
int main()
{
	char chuoi[50];
	cout << "Nhap chuoi: ";
	cin.getline(chuoi, 50);
	int chu = 0;
	int so = 0;
	int space = 0;
	for (int i = 0; i < strlen(chuoi); i++)
	{
		if (isalpha(chuoi[i]))
			chu++;
		else if (isdigit(chuoi[i]))
			so++;
		else if (isspace(chuoi[i]))
			space++;
	}
	cout << "So ki tu chu: " << chu << endl;
	cout << "So ki tu so: " << so << endl;
	cout << "So ki tu khoang trang: " << space << endl;
	return 0;
}

