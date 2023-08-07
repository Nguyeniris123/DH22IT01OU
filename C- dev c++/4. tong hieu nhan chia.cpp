//
#include "stdio.h"
int main(){
	float a,b;
	printf("nhap gia tri a: ");
	scanf("%f", &a);
	printf("\nnhap gia tri b: ");
	scanf("%f", &b);
	float tong=a+b;
	printf("%.2f + %.2f = %.2f", a,b, tong);
	float hieu= a-b;
	printf("\n%.2f - %.2f = %.2f", a,b, hieu); 
	
	float tich= a*b;
	printf("\n%.2f * %.2f = %.2f", a,b, tich);
	
	float thuong= a/b;
	printf("\n%.2f / %.2f = %.2f", a,b, thuong); 
	
	int r= ((int)a) % ((int)b);
	printf("\n %.2f chia lay du %.2f = %d", a,b,r);
	
	a++;
	printf("\na++=%.2f", a);
	
	b--;
	printf("\nb--=%.2f", b);
	
	
 


	}
	
