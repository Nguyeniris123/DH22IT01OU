#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 30;
int main()
{
	int a[MAX];
	for (int i = 0; i < MAX; i++)
	{
		a[i] = rand() % 10;
	}
	int *p;
	p = a;
	cout << "Con tro va ki phap do doi: " << endl;
	for (int offset = 0; offset < MAX; offset++)
	{
		cout << *(p + offset) << " ";
	}
	cout << "\ncon tro va ki phap chi so: " << endl;
	for (int i = 0; i < MAX; i++)
		cout << p[i] << " ";
	cout << endl;
	return 0;
}
