#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	char kt;
	cout<<"Nhap 2 so nguye va 1 phep toan: ";
	cin>>a>>b>>kt;
	switch (kt)
	{
		case '+':
			cout<<a<<kt<<b<<"="<<a+b<<endl;
			break;
		case '-':
			cout<<a<<kt<<b<<"="<<a-b<<endl;
			break;
		case 'x':
			cout<<a<<kt<<b<<"="<<a*b<<endl;
			break;	
		case '/':
			if (b==0) cout<<"loi chia 0"<<endl;
			cout<<a<<kt<<b<<"="<<fixed<<setprecision(2)<<a/b<<endl;
			break;
	}
	return 0;
}

