#include <iostream>
using namespace std;
int main()
{
	int arr[3][4] =
	{
		{8,4,-2,5},
		{2,2,6,9},
		{11,2,5,4}
	};
	cout << "Mang da luu tru la: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}