#include <iostream>
using namespace std;
int main()
{
	/*
	Viết chương trình cho người dùng nhập giá trị cho m số nguyên. Tính và xuất
tổng các số vừa nhập. Giao diện chương trình khi thực hiện được mô phỏng ở ví
dụ sau:
Ban can bao nhieu so: 3
Nhap so thu 1: 6
Nhap so thu 2: 4
Nhap so thu 3: 2
Tong 3 so vua nhap la: 12
	*/
	long m = 0, s = 0, x;
	do
	{
	cout << "ban can bao nhieu so: ";
	cin >> m;
	if (m <= 0) cout << "Loi nhap lai" << endl;
	} while (m <= 0);
	if (m > 0)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << "Nhap so thu: " << i << ": ";
			cin >> x;
			s = s + x;
		}
		cout << "Tong cac so vua nhap la: " << s << endl;
	}	
	return 0;
}