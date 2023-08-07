//Viết chương trình đọc file array.txt trong Bài 3 vào một mảng số nguyên, sắp xếp
//mảng theo thứ tự tăng dần và ghi lại vào file trên
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
void Tangdan(int *p, int n);
int main()
{
	ifstream in;
	int n=3;
	int *p = new int[n];
	in.open("array.txt");
	if (in.is_open())
	{
		in >> n;
		for (int i = 0; i < n; i++)
			in >> p[i];
		in.ignore();
	}
	in.close();
	ofstream out;
	out.open("array.txt");
	if (out.is_open())
	{
		Tangdan(p, n);
		out << n << endl;
		out << p[0];
		for (int i = 1; i < n; i++)
			out << ", " << p[i];
		out.close();
	}
	delete[]p;
	p = NULL;
	return 0;
}
void Tangdan(int *p, int n)
{
	int tmp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i] > p[j])
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}