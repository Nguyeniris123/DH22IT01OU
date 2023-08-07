#include <iostream>
using namespace std;
int main()
{
	/*
	Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm và xuất
	kết quả xem từ n1 đến n2 có bao nhiêu số là số nguyên tố? Biết rằng số nguyên
	tố là số từ 2 trở lên, chỉ chia hết cho 1 và chính bản thân nó.
	*/
	long n1 = 0, n2 = 0;
	do {
		cout << "nhap vao so nguyen duong n1: ";
		cin >> n1;
		if (n1 <= 0) cout << "loi nhap lai" << endl;
	} while (n1 <= 0);
	do {
		cout << "nhap vao so nguyen duong n2: ";
		cin >> n2;
		if (n1 <= 0) cout << "loi nhap lai" << endl;
	} while (n2 <= n1);
	int sl = 0;
	for (int i = n1; i < n2; i++)
	{
		int demchiahet = 0;
		for (int j = 1; j <= i; j++)
			{
				if (i % j == 0) demchiahet += 1;
			}
		if (demchiahet == 2)
			{
				sl++;
				cout << i << " " << endl;
			}
	}
	cout << "Tu " << n1 << " den " << n2 << " co " << sl << " so nguyen to" << endl;
	return 0;
}