#include <iostream>
#include <iomanip>
using namespace std;
bool isPrime(int n);
int countPrimes(int** a, int r, int c);
int main()
{
	int r, c;
	cout << "Nhap so dong va so cot can: "; 
	cin >> r >> c;
	int **a;
	//Cap phat mang cac con tro (so dong)
	a = new int*[r];
	//Cap phat vung nho cho moi con tro (so cot)
	for (int i = 0; i < r; i++)
		a[i] = new int[c];	//Nhap mang
	for (int i = 0; i < r; i++)
	{
		cout << "\nNhap " << c << " gia tri cho dong thu " << i + 1 <<
			": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
	//Xuat mang
	cout << "\nMang dang luu tru: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << "So so nguyen to co trong mang: " << countPrimes( a, r, c) << endl;
	for (int i = 0; i < r; i++)
		delete[] a[i];
	delete[] a;
	a = nullptr;
	return 0;
}

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) 
		{
			return false;
		}
	}
	return true;
}

int countPrimes(int** a, int r, int c)
{
	int count = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (isPrime(a[i][j]))
			{
				count++;
			}
		}
	}
	return count;
}