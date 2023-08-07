#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	/*
	Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính (+ - * / )
và lựa chọn thoát. Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng.
+ Với 4 phép tính thì cho người dùng nhập tiếp 2 số nguyên a và b. Thực hiện
phép tính đã chọn với 2 số đó (lưu ý lỗi chia 0 và kết quả phép chia phải làm tròn
lấy 2 chữ số thập phân).
+ Với lựa chọn thoát thì sẽ kết thúc chương trình.
+ Sau khi lựa chọn và tính 1 kết quả phép tính tương ứng, chương trình thể hiện
lại menu cho người dùng tiếp tục có lựa chọn phép tính hay thoát để kết thúc
	*/
	long chon, a, b;
	do
	{
		system("cls");
		{
			system("cls");
			cout << "Chon menu phep tinh:\n"
				<< "1. phep cong\n"
				<< "2. Phep tru\n"
				<< "3. Phep nhan\n"
				<< "4. Phep chia\n"
				<< "0. Thoat chuong trinh\n";
			cin >> chon;
			if (chon < 0 || chon > 4)
			{
				cout << "Nhap sai, vui long nhap lai!" << endl;
				system("pause");
			}
		}
		while (chon < 0 || chon > 4);
		switch (chon)
		{
		case 1:
			cout << "nhap 2 so a va b: ";
			cin >> a >> b;
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case 2:
			cout << "nhap 2 so a va b: ";
			cin >> a >> b;
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3:
			cout << "nhap 2 so a va b: ";
			cin >> a >> b;
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case 4:
			cout << "nhap 2 so a va b: ";
			cin >> a >> b;
			if (b != 0)
				cout << a << " / " << b << " = " << setprecision(2) << fixed << (a * 1.0 / b) << endl;
			else cout << "Loi chia 0" << endl;
		case 0:
			cout << "Cam on da su dung chuong trinh nay!" << endl;
			return 0;
		}
			system("pause");
	} while (chon != 0);
	return 0;
}