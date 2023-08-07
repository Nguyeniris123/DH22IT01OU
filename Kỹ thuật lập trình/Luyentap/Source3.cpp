#include <iostream>
using namespace std;
const int MAX = 100;
void inputrandom(int arr[MAX][MAX], int r, int c, int min, int max);
void output(int arr[MAX][MAX], int r, int c);
int main()
{
	int arr[MAX][MAX];
	int m, n;
	cout << "Nhap so hang va so cot: ";
	cin >> m >> n;
	inputrandom(arr, m, n, 1, 100);
	output(arr, m, n);
	return 0;
}
void inputrandom(int arr[MAX][MAX], int r, int c, int min, int max)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			arr[i][j] = rand() % (max - min + 1) + min;
	}
}
void output(int arr[MAX][MAX], int r, int c)
{
	cout << "Ham da nhap la: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}