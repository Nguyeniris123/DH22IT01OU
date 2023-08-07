#include <iostream>
using namespace std;
int main()
{
	int a[10][5];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
			a[i][j] = rand() % 100 + 1;
	}
	cout << "Mang da luu tru: " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	
	/*int x;
	bool flag = false;
	cout << "ban can tim: ";
	cin >> x;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (a[i][j] == x)
			{
				flag = true;
				break;
			}
	if (flag)
		cout << x << " co trong mang" << endl;
	else
		cout << x << " ko co trong mang" << endl;
	*/
	// Tìm giá trị x trong mảng và đếm số lần xuất hiện
	int x, count = 0;
	int positions[10][5], pos_count = 0;
	cout << "Nhap gia tri x can tim: ";
	cin >> x;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == x) {
				count++;
				positions[pos_count][0] = i+1;
				positions[pos_count][1] = j+1;
				pos_count++;
			}
		}
	}

	// In kết quả
	if (count == 0) {
		cout << "Gia tri " << x << " khong co trong mang." << endl;
	}
	else {
		cout << "Gia tri " << x << " xuat hien " << count << " lan trong mang tai cac vi tri sau:" << endl;
		for (int i = 0; i < pos_count; i++) {
			cout << "  [" << positions[i][0] << "][" << positions[i][1] << "]" << endl;
		}
	}

	return 0;
}