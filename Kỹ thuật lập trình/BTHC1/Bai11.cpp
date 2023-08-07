#include <iostream>
#include <iomanip>
using namespace std;
#define ROW 13
#define COL 6
void Xuat(int a[ROW][COL]);
int Kiemtra(int a[ROW][COL], char loai, int r, char c);
int main()
{
	int a[ROW][COL] = { 0 };
	char loai;
	int r;
	char c;
	do {
		system("cls");
		cout << "1. Loai ve thuong gia\n";
		cout << "2. Loai ve pho thong\n";
		cout << "3. Loai ve tiet kiem\n";
		cout << "0. Ket thuc\n";
		cout << "Chon: ";
		cin >> loai;
		if (loai == '0') break;
		else
		{
			cout << "Hang ghe(1-13): ";
			cin >> r;
			cout << "So ghe (A-F): ";
			cin >> c;
			int kq = Kiemtra(a, loai, r, c);
			if (kq == 0)
				a[r - 1][c - 'A'] = 1;
			else
			{
				switch (kq)
				{
				case 1: cout << "hang ghe ko hop le"; break;
				case 2: cout << " So ghe ko hop le"; break;
				case 3: cout << "Cho nay da co nguoi dat"; break;
				case 4: cout << "Loai ghe ko hop le"; break;
				}
				cout << " chon lai\n";
			}
			system("pause");
		}
	} while (loai != '0');
	Xuat(a);
	system("pause");
	return 0;
}
void Xuat(int a[ROW][COL])
{
	cout << setw(14) << 'A';
	for (int i = 'B'; i <= 'F'; i++)
		cout << setw(8) << char(i);
	cout << endl << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << "Hang " << setw(3) << i + 1;
		for (int j = 0; j < COL; j++)
			if (a[i][j] == 0)
				cout << setw(7) << "*\t";
			else
				cout << setw(7) << "x\t";
		cout << endl;
	}
}
int Kiemtra(int a[ROW][COL], char loai, int r, char c)
{
	if (r > 13 || r < 1) return 1;
	if (c > 'F' || c < 'A') return 2;
	if (a[r - 1][c - 'A'] != 0) return 3;
	switch (loai)
	{
	case '1':
		if (r > 2) return 1;
		break;
	case '2':
		if (r < 3 || r>7) return 1;
		break;
	case '3':
		if (r < 8) return 1;
		break;
	default: return 4;
	}
	return 0;
}