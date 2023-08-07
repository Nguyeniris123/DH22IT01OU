//
#include "stdio.h"
int main(){
	float a,b, max, min;
	
	printf("nhap vao a: ");
	scanf("%f", &a);
	printf("nhap vao b: ");
	scanf("%f", &b);
	
	min=(a<b)?a:b;
	max=(a>b)?a:b;
	
	printf("max la: %.1f", max);
	printf("\nmin la: %.1f", min);
	}
	
