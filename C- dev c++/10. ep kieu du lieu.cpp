//
#include "stdio.h"
int main(){
	int a,b;
	printf("nhap gia tri a=");
	scanf("%d", &a);
	printf("nhap gia tri b=");
	scanf("%d", &b);
	float kq= (float) a/b;
	int kq2= (int) kq;
	printf("%d / %d = %.2f", a, b, kq);
	printf("\nkq2= %d", kq2);
	
	

	}
