// kiem tra tam giac
#include "stdio.h"
#include "math.h"
int main(){
	float ab,bc,ca;
	float xa,ya,xb,yb,xc,yc;
	float c,s,p;
	printf("nhap vao toa do dinh xa va ya:");
	scanf("%f%f", &xa, &ya);
	printf("nhap vao toa do dinh xb va yb:");
	scanf("%f%f", &xb, &yb);
	printf("nhap vao toa do dinh xc va yc:");
	scanf("%f%f", &xc, &yc);
	ab= sqrt(pow(xa-xb,2) + pow(ya-yb,2));
	bc= sqrt(pow(xb-xc,2) + pow(yb-yc,2));
	ca= sqrt(pow(xc-xa,2) + pow(yc-ya,2));
	printf("ab= %.2f, bc= %.2f, ca=%.2f", ab,bc,ca);
	if (ab+bc>ca && ab+ca>bc&&bc+ca>ab) {
		printf("\nABC tao thanh 1 tam giac");
		if (ab==bc || ab==ca|| bc==ca) { 
		printf("\nABC la tam giac can");
		} else {
		printf("\nABC ko la tam giac can");
		}
		c=ab+bc+ca;
		printf("\nchu vi tam giac ABC la: %.2f", c);
		p=c/2;
		s=sqrt(p*(p-ab)*(p-bc)*(p-ca));
		printf("\nDien tich tam giac la: %.2f", s);
	} else printf("\nABC ko tao thanh tam giac");
	}
