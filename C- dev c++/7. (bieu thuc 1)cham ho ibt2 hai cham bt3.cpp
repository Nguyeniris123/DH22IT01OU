//
#include "stdio.h"
int main(){
	int a;
	printf("nhap a= ");
	scanf("%d", &a);
	printf("%d la so %s", a, (a % 2 == 0)?"Chan":"Le");
	
	
}
