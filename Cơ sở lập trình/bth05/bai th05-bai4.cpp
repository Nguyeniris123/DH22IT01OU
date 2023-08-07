#include <iostream>
using namespace std;
int main()
{
	/*Viết chương trình nhận vào 1 số nguyên dương n. Tính và xuất kết quả tính n giai
	thừa.
	*/
	long n = 0, gt=1;
	do {
		cout << "nhap vao so nguyen duong n: ";
		cin >> n;
		if (n <= 0) cout << " loi nhap lai!" << endl;
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		gt = gt *i;
	}
	cout << "Giai thua = " << gt << endl;
	return 0;
}