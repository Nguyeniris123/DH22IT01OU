#include <iostream>
using namespace std;
const int MAXSIZE = 50;
int main()
{
	double alpha[MAXSIZE];
	for (int i = 0; i < 25; i++)
	{
		alpha[i] = i*i;
	}
	for (int i = 25; i < MAXSIZE; i++)
	{
		alpha[i] = i*i*i;
	}
	for (int i = 0; i < MAXSIZE; i++)
	{
		cout << alpha[i] << " ";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
	return 0;
}
