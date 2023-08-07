//Bài 3. Định nghĩa kiểu dữ liệu SinhVien gồm các thông tin :
//-Mã số sinh viên kiểu string
//- Họ tên kiểu string
//- Điểm toán kiểu double
//- Điểm văn kiểu double
//- Điểm ngoại ngữ kiểu double
//Viết các hàm :
//-Nhập vào thông tin một sinh viên
//- Nhập vào danh sách sinh viên trong một lớp học(sĩ số không quá 45).
//- In thông tin của sinh viên theo mã số sinh viên(do người dùng nhập)
//Bài tập thực hành Kỹ thuật lập trình
//- In danh sách sinh viên gồm các thông tin : Số thứ tự, mã số sinh viên, họ tên, điểm
//trung bình, xếp loại.Biết :
//	-điểm trung bình = ((điểm toán + điểm văn) * 2 + điểm ngoại ngữ) / 5
//	- Xếp loại sinh viên :
//Nếu điểm trung bình từ 8 trở lên thì xếp loại là “Giỏi”
//Nếu điểm trung bình từ 6.5 đến < 8 thì xếp loại là “Khá”
//	Nếu điểm trung bình từ 5 đến < 6.5 thì xếp loại là “TB”
//	Nếu điểm dưới 5 thì xếp loại “Dưới TB”
//	- Viết hàm main kiểm chứng chương trình.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define MAX 45

struct Sinhvien {
	string masv;
	string hoten;
	double toan;
	double van;
	double ngoaingu;
};

void nhapsv(Sinhvien &s);
void nhapdssv(Sinhvien arrSV[MAX], int n);
void thongtinsv(Sinhvien arrSV[MAX], int n, string maso);
void indssd(Sinhvien arrSV[MAX], int n);
double diemtrungbinh(Sinhvien sv);
string xeploaisv(Sinhvien sv);
int timsvtheomaso(Sinhvien arrSV[MAX], int n, string masv);

int main()
{
	Sinhvien arrSV[MAX];
	int n;
	///*cin.ignore();*/
	cout << "Nhap so sv: ";
	cin >> n;
	nhapdssv(arrSV, n);
	indssd(arrSV, n);
	cout << "Nhap ma so sinh vien can tim: ";
	string masv;
	cin >> masv;
	thongtinsv(arrSV, n, masv);

	return 0;
}
void nhapsv(Sinhvien &s)
{
	
	cout << "ma so: ";
	cin >> s.masv;
	cin.ignore();
	cout << "Ho ten: ";
	getline(cin, s.hoten);
	cout << "Diem toan: ";
	cin >> s.toan;
	cout << "Diem van: ";
	cin >> s.van;
	cout << "Diem ngoai ngu: ";
	cin >> s.ngoaingu;
	// do 1 luc nhap nhieu sv nen phai them dong igno
	/*cin.ignore;*/
}

void nhapdssv(Sinhvien arrSV[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin sv thu: " << i + 1 << endl;
		nhapsv(arrSV[i]);
	}
		
}

void thongtinsv(Sinhvien arrSV[MAX], int n, string maso)
{
	int pos = timsvtheomaso(arrSV, n, maso);
	if (pos != -1)
	{
		cout << "Ma so: " << arrSV[pos].masv << endl;
		cout << "Ho ten: " << arrSV[pos].hoten << endl;
		cout << "Diem toan: " << arrSV[pos].toan << endl;
		cout << "Diem van: " << arrSV[pos].van << endl;
		cout << "Diem ngoai ngu: " << arrSV[pos].ngoaingu << endl;
	}
	else
	{
		cout << "Khong co thong tin" << endl;
	}
}

void indssd(Sinhvien arrSV[MAX], int n)
{
	cout << "STT\tMa so\tHo ten\t\t\tTrung binh\tXeploai" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 <<"\t"<<arrSV[i].masv << "\t" << arrSV[i].hoten
			<< setw(30 - arrSV[i].hoten.length()) << diemtrungbinh(arrSV[i])
			<< "\t\t" << xeploaisv(arrSV[i]) << endl;
	}
}

double diemtrungbinh(Sinhvien sv)
{
	return ((sv.toan + sv.van) * 2 + sv.ngoaingu) / 5;
}

string xeploaisv(Sinhvien sv)
{
	double tb = diemtrungbinh(sv);
	string loai;
	if (tb >= 8) loai = "gioi";
	else if (tb >= 6.5) loai = "kha";
	else if (tb >= 5)loai = "trung binh";
	else loai = "duoi tb";
	return loai;
}

int timsvtheomaso(Sinhvien arrSV[MAX], int n, string masv)
{
	for (int i = 0; i < n; i++)
		if (arrSV[i].masv == masv)
			return i;
	return -1;
}
