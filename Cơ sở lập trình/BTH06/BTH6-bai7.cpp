#include <iostream>
using namespace std; 
bool songuyento(int n)                                                                                                                                                                              
{
	bool isprime = true;
	if (n < 2) isprime = false;
	else for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0) isprime = false;
	return isprime;
}
//----------------------------------------
int main()
{
	int n = 0;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	cout << "So " << n << " la so nguyen to ? " << (songuyento(n) ? "Dung" : "Sai") << endl;
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                               