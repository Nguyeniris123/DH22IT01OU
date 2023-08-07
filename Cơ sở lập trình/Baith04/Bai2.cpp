#include <iostream>
using namespace std;
int main()
{
long n;
cout << "Nhap vao so n tu 0-9: ";
cin >> n;
switch (n)
{
	case 0:
	cout << "Khong" << endl;
	break;	
	case 1:
	cout << "Mot" << endl;
	break;
	case 2:
	cout << "Hai" << endl;
	break;	
	case 3:
	cout << "Ba" << endl;
	break;	
	case 4:
	cout << "Bon" << endl;
	break;	
	case 5:
	cout << "Nam" << endl;
	break;	
	case 6:
	cout << "Sau" << endl;
	break;	
	case 7:
	cout << "Bay" << endl;
	break;	
	case 8:
	cout << "Tam" << endl;
	break;	
	case 9:
	cout << "Chin" << endl;
	break;	
	default: cout << "Khong hop le" << endl;
}
return 0;
}
