#include <iostream>
#include <cmath>
using namespace std;
int main()
	{
		double a, b, c, x1, x2, d; // d la denlta
		cout << "nhap vao gia tri a, b, c cua pt bac 2: ";
		cin >> a >> b >> c;
		if (a == 0)
		// pt luc nay tro thanh pt bac 1 bx+c=0
			{
				if (b == 0)
					{
						if (c == 0) cout << "PT co vo so nghiem" << endl;
						else cout << "PT vo nghiem" << endl;
					}	
				else
					{
						if (c == 0) cout << "pt co nghiem duy nhat x = 0 " << endl;
						else cout << "PT co nghiem duy nhat: " << -c / b << endl;
					}
			}
		else
		{
			d = pow(b,2) - 4 * a * c;
			if (d > 0)
				{
					x1 = (-b + sqrt(d)) / (2 * a);
					x2 = (-b - sqrt(d)) / (2 * a);
					cout << "Nghiem x1 = " << x1 << endl;
					cout << "Nghiem x2 = " << x2 << endl;
				}
			else if (d == 0)
					cout << "Phuong trinh co nghiem kep x = " << -b / 2 * a << endl;
			else 
					cout << "Phuong trinh vo nghiem" << endl;
		}
		return 0;
	}
