#include<iostream>
#include<fstream>
using namespace std;

void Tang(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main()
{
	int n;
	int* a = NULL;
	char chr;

	ifstream ifile;
	ifile.open("array.txt");
	if (ifile.is_open())
	{
		ifile >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			ifile >> a[i];
			ifile >> chr;
		}
		ifile.close();
	}

	Tang(a, n);

	ofstream ofile;
	ofile.open("array.txt");
	if (ofile.is_open())
	{

		ofile << n << endl;
		for (int i = 0; i < n; i++)
		{
			ofile << a[i];
			if (i != n - 1) ofile << ',';
		}
		cout << "Sap xep thanh cong. Mo file array.txt de kiem tra";
		ofile.close();
	}
	delete[]a;
	a = NULL;
	system("pause");
	return 0;
}