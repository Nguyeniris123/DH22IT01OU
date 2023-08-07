#include <iostream>
using namespace std;
int main()
{
	long n,y;
	cout<<"nhap vao thang: ";
	cin>>n;
	cout<<"Nhap vao nam: ";
	cin>>y;
	switch (n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Co 31 ngay\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"Co 30 ngay\n";
			break;
		case 2:
			if((y % 400 == 0) || (y%4==0 && y%100 != 0))
			cout<<"Co 29 ngay"<<endl;
			else cout<< "Co 28 ngay"<<endl;
			break;
		default: 
			cout<<"Khong hop le"<<endl;
	}
	return 0;
}


