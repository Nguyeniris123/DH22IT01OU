// Giai pt bac 2 ax2+ bx+c=0
#include "stdio.h"
#include "math.h"
int main(){
	float a,b,c,d,x1,x2;
	printf("nhao gia tri a,b,c cua pt:");
	scanf("%f%f%f", &a,&b,&c);
		if (a==0) {printf("nhap a khac 0");
		}
		else { d=pow(b,2)-4*a*c;
		printf("delta= %.2f", d);
		if (d>0) {
			x1=-b+sqrt(d)/2*a;
			x2=-b-sqrt(d)/2*a;
			printf("\nx1=%.2f,\nx2=%.2f", x1,x2);}
			else if (d==0) {
				x1=-b/2*a;
				printf("\nx1=x2=%.2f",x1);}
				else {printf("\npt vo nghiem");
				}
				}
				
	
	
	
	
	}
	
	
	
