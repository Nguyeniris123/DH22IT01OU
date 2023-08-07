//Bài 2. Định nghĩa kiểu dữ liệu NhanVien gồm các thông tin sau :
//-Mã nhân viên kiểu string
//- Họ tên kiểu string
//- Năm vào làm kiểu int
//- Năm sinh kiểu int
//Viết các hàm :
//-Nhập vào đầy đủ thông tin của một nhân viên.
//- Xuất lại thông tin của nhân viên vừa nhập.
//- Tính tuổi và thâm niên làm việc của nhân viên này.Biết rằng :
//tuổi = năm hiện tại – năm sinh
//thâm niên = năm hiện tại – năm vào làm
//- Hàm main kiểm chứng chương trình
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
struct nhanvien
{
	string manv;
	string hoten;
	int nam;
	int namvaolam;
};
void nhapnv(nhanvien &nv);
void thongtinnv(nhanvien nv);
int tinhtuoinv(nhanvien nv);
int tinhthamnien(nhanvien nv);
#pragma warning(disable : 4996)
int main()
{
	nhanvien nv;
	cout << "Nhap thong tin nhan vien: " << endl;
	nhapnv(nv);
	thongtinnv(nv);
	cout << "Tuoi cua nhan vien: " << tinhtuoinv(nv) << endl;
	cout << "Tham nien cua nhan vien: " << tinhthamnien(nv) << endl;
	return 0;
}
void nhapnv(nhanvien &nv)
{
	cout << "Ma nhan vien: ";
	cin >> nv.manv; // do ma nhan vien ko co khoang tranh
	cin.ignore();
	cout << "Ho ten: ";
	getline(cin, nv.hoten);
	cout << "Nam sinh: ";
	cin >> nv.nam;
	cout << "Nam vao lam: ";
	cin >> nv.namvaolam;

}
void thongtinnv(nhanvien nv)
{
	cout << "Thong tin nhan vien: " << endl;
	cout << "Ma nhan vien: " << nv.manv << endl;
	cout << "Ho ten nhan vien: " << nv.hoten << endl;
	cout << "Nam sinh nhan vien: " << nv.nam << endl;
	cout << "Nam vao lam: " << nv.namvaolam << endl;
}
int tinhtuoinv(nhanvien nv)
{
	time_t now = time(0);//lay tg hien tai cua may tinh
	tm *tm = localtime(&now);//su dung doi tuong tm de co the truy xuat cac thuoc tinh
	return (tm->tm_year + 1900) - nv.nam;
}
int tinhthamnien(nhanvien nv)
{
	time_t now = time(0);//lay tg hien tai cua may tinh
	tm *tm = localtime(&now);//su dung doi tuong tm de co the truy xuat cac thuoc tinh
	return (tm->tm_year + 1900) - nv.namvaolam;
}