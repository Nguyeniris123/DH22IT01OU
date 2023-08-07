#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
string thayTheKyTu(const string& chuoi, const string& chuoiCon);
int demSoLanXuatHien(const string& chuoi, const string& chuoiCon);
string loaiBoChuoiCon(const string& s, const string& subs);
string chenChuoiCon(const string& s, const string& subs, int k);
string maHoaChuoi(const string& s, const unordered_map<char, char>& bangThayThe);
string giaiMaChuoi(const string& s, const unordered_map<char, char>& bangThayThe);

int main()
{
	string chuoi;
	cout << "Nhap chuoi: ";
	getline(cin, chuoi);
	string chuoiCon;
	cout << "Nhap chuoi con: ";
	getline(cin, chuoiCon);
	string ketQua = thayTheKyTu(chuoi, chuoiCon);
	cout << "Ket qua: " << ketQua << endl;
	cout << "So lan xuat hien cua chuoi con: " << demSoLanXuatHien(chuoi, chuoiCon) << endl;
	cout << "Chuoi sau khi loai bo chuoi con subs: " << loaiBoChuoiCon(chuoi, chuoiCon) << endl;
	int k;
	cout << "Nhap vi tri can chen chuoi con: ";
	cin >> k;
	cout << "Chuoi sau khi chen chuoi con: " << chenChuoiCon(chuoi, chuoiCon, k) << endl;
	/*int main() { ***Phần mã hoá
		string s;
		cout << "Nhap chuoi: ";
		getline(cin, s);

		unordered_map<char, char> bangThayThe;
		bangThayThe['a'] = 'x';
		bangThayThe['b'] = 'y';
		bangThayThe['c'] = 'z';

		string maHoa = maHoaChuoi(s, bangThayThe);
		cout << "Chuoi da ma hoa: " << maHoa << endl;

		string giaiMa = giaiMaChuoi(maHoa, bangThayThe);
		cout << "Chuoi da giai ma: " << giaiMa << endl;

		return 0;
	}*/
	return 0;
}

//Thay thế các kí tự trong chuỗi nhập bằng các kí tự tương ứng trong chuỗi con. 
string thayTheKyTu(const string& chuoi, const string& chuoiCon)
{
	string ketQua = chuoi;
	int doDaiChuoi = chuoi.length();
	int doDaiChuoiCon = chuoiCon.length();
	for (int i = 0; i < doDaiChuoi; ++i) {
		if (ketQua[i] != ' ') {
			ketQua[i] = chuoiCon[i % doDaiChuoiCon];
		}
	}
	return ketQua;
}

//Đếm số lần xuất hiện chuỗi con trong một chuỗi.
int demSoLanXuatHien(const string& chuoi, const string& chuoiCon)
{
	int doDaiChuoi = chuoi.length();
	int doDaiChuoiCon = chuoiCon.length();
	int soLanXuatHien = 0;

	for (int i = 0; i <= doDaiChuoi - doDaiChuoiCon; ++i) {
		bool timThay = true;
		for (int j = 0; j < doDaiChuoiCon; ++j) {
			if (chuoi[i + j] != chuoiCon[j]) {
				timThay = false;
				break;
			}
		}
		if (timThay) {
			soLanXuatHien++;
		}
	}
	return soLanXuatHien;
}

// Loại bỏ chuỗi con subs(nếu có) ra khỏi chuỗi s.
string loaiBoChuoiCon(const string& s, const string& subs)
{
	string ketQua = s;
	size_t found = ketQua.find(subs);

	while (found != string::npos) {
		ketQua.erase(found, subs.length());
		found = ketQua.find(subs, found);
	}
	return ketQua;
}

// Chèn chuỗi con subs vào trong chuỗi s tại vị trí k.
string chenChuoiCon(const string& s, const string& subs, int k)
{
	string ketQua = s;
	ketQua.insert(k, subs);
	return ketQua;
}
// Mã hóa và giải mã chuỗi dùng phép thay thế(substitution).
string maHoaChuoi(const string& s, const unordered_map<char, char>& bangThayThe)
{
	string ketQua = s;
	for (char& c : ketQua) {
		if (bangThayThe.count(c)) {
			c = bangThayThe.at(c);
		}
	}
	return ketQua;
}

// Mã hóa và giải mã chuỗi dùng bảng thay thế
string giaiMaChuoi(const string& s, const unordered_map<char, char>& bangThayThe)
{
	string ketQua = s;
	for (char& c : ketQua) {
		for (const auto& pair : bangThayThe) {
			if (pair.second == c) {
				c = pair.first;
				break;
			}
		}
	}
	return ketQua;
}