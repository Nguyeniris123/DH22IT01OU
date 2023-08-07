//Bài 4. Định nghĩa kiểu dữ liệu SanPham gồm các thông tin như sau :
//-Mã sản phẩm kiểu char(tối đa 10 ký tự)
//- Tên sản phẩm kiểu string.
//- Đơn giá kiểu double
//- Số lượng tồn kho kiểu int
//Viết chương trình dùng cấp phát động để :
//-Nhập thông tin cho tối đa 30 sản phẩm.
//- Xuất thông tin của các sản phẩm vừa nhập.
//- Sửa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
//- Xóa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
//- Sắp xếp lại toàn bộ sản phẩm theo trình tự số lượng tồn kho tăng dần.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Sanpham
{
	char masp[10];
	string tensp;
	double dongia;
	int ton;
};
void nhapdssp(Sanpham * &arrsp, int n);
void indssp(Sanpham *arrsp, int n);
void sapxepdssp(Sanpham *arrsp, int n);
void suasp(Sanpham *arrsp, int n, char masp[]);
void xoasp(Sanpham *arrsp, int &n, char masp[]);
void xoasptheovitri(Sanpham arrsp, int &n, int vitri);
int main()
{
	int n;
	Sanpham *arrsp;
	cout << "Nhap so luong san pham: ";
	cin >> n;
	cin.ignore();
	nhapdssp(arrsp, n);
	indssp(arrsp, n);
	cout << "Danh sach san pham sau khi ep tang dan theo so luong ton kho: \n";
	sapxepdssp(arrsp, n);
	indssp(arrsp, n);
	cout << "Nhap ma san pham can sua: ";
	char masp[10];
	cin.getline(masp, 10);
	suasp(arrsp, n, masp);
	cout << "Nhap masp can xoa: ";
	cin.getline(masp, 10);
	xoasp(arrsp, n, masp);
	return 0;
}
void nhapdssp(Sanpham * &arrsp, int n)
{
	arrsp = new Sanpham[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ma san pham: ";
		cin.getline(arrsp[i].masp, 10);
		cout << "Nhap ten san pham: ";
		getline(cin, arrsp[i].tensp);
		cout << "Don gia: ";
		cin >> arrsp[i].dongia;
		cout << "So luong ton: ";
		cin >> arrsp[i].ton;
		cin.ignore();
	}
}

void indssp(Sanpham *arrsp, int n)
{
	cout << "Ma sp\tTen sp\t\tDon gia\t\tTon kho\n";
	cout << resetiosflags(ios::fixed) << setprecision(2);
	for (int i = 0; i < n; i++)
	{
		cout << arrsp[i].masp
			<< "\t" << arrsp[i].tensp
			<< "\t" << arrsp[i].dongia
			<< "\t\t" << arrsp[i].ton << endl;
	}
}

void sapxepdssp(Sanpham *arrsp, int n)
{
	Sanpham tmp;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n; j++)
			if (arrsp[i].ton > arrsp[j].ton)
			{
				tmp = arrsp[i];
				arrsp[i] = arrsp[j];
				arrsp[j] = tmp;
			}
}

void suasp(Sanpham *arrsp, int n, char masp[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(arrsp[i].masp, masp) == 0)
		{
			cout << "Nhap ten moi: ";
			getline(cin, arrsp[i].tensp);
			cout << "Nhap don gia moi: ";
			cin >> arrsp[i].dongia;
			cout << "Nhap ton kho moi: ";
			cin >> arrsp[i].ton;
			cin.ignore();
			cout << "cap nhat thanh cong\n";
			indssp(arrsp, n);
			return;
		}
	}
	cout << "Khong tim thay san pham\n";
}
void xoasp(Sanpham *arrsp, int &n, char masp[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(arrsp[i].masp, masp) == 0)
		{
			xoasptheovitri(arrsp, n, i);
			cout << "Xoa thanh cong! Danh sach sau khi xoa la: " << endl;
			indssp(arrsp, n);
			return;
		}
	}
	cout << "Khong tim thay san pham\n";
}
void xoasptheovitri(Sanpham arrsp, int &n, int vitri)
{
	for (int i = vitri + 1; i < n; i++)
		arrsp[i - 1] = arrsp[i];
	n--;
}