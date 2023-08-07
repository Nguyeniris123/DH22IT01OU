#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so luong phan tu can: ";
	cin >> n;
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho phan tu thu " << i + 1
			<< ": ";
		cin >> a[i];
	}
	int* start = a;
	int* end = a + n - 1;
	while (start < end) {
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	cout << "\nMang luu tru la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
	//Huy cap phat dong, dua con tro ve con tro rong
	delete[]a;
	a = nullptr;
	return 0;
}