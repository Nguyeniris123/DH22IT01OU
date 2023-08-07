#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void Input1(int **a, int r, int c);
void Output1(int **a, int r, int c);
void Input2(int arr[10]);
void Output2(int arr[10]);
void sortRow(int* row, int size);
void Daomang(int arr[], int start, int end);
int main()
{
	while (true)
	{
		int c;
		system("cls");
		cout << "-----------MENU-----------" << endl
			<< "1. Mang 2 chieu va con tro" << endl
			<< "2. De quy" << endl
			<< "--------------------------" << endl;
		cout << "Ban chon 1 hay 2 (chon so bat ki khac de thoat): ";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			int r, c;
			cout << "Nhap so dong va so cot: "; 
			cin >> r >> c;
			int **a;
			//Cap phat mang cac con tro (so dong)
			a = new int*[r];
			//Cap phat vung nho cho moi con tro (so cot)
			for (int i = 0; i < r; i++)
				a[i] = new int[c];
			Input1(a, r, c);
			cout << "Mang da luu: " << endl;
			Output1(a, r, c);
			int row;
			cout << "Nhap hang sap xep: ";
			cin >> row;
			sortRow(a[row - 1], c);
			cout << "mang sau khi sap xep: " << endl;
			Output1(a, r, c);
			//huy vung nho da cap phat
			for (int i = 0; i < r; i++)
				delete[] a[i];
			delete[] a;
			a = nullptr;
			system("pause");
			break;
		}
		case 2:
		{
			int arr[10];
			Input2(arr);
			cout << "Mang da luu: " << endl;
			Output2(arr);
			cout << "Mang sau khi dao: " << endl;
			Daomang(arr, 0, 10 - 1);
			Output2(arr);
			system("pause");
			break;
		}
		default: 
		{
			cout << "Cam on ban da su dung chuong trinh!!!" << endl;
			return 0;
		}
		}
	}
	return 0;
}
void Input1(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			a[i][j] = rand() % 20;
	}
}
void Output1(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
void Input2(int arr[10])
{
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 20;
}
void Output2(int arr[10])
{
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void sortRow(int* row, int size)
{
	sort(row, row + size);
}
void Daomang(int arr[], int start, int end) 
{
	if (start >= end) {
		return;
	}
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	Daomang(arr, start + 1, end - 1);
}