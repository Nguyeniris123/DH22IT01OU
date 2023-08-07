#include "stdio.h"
int main(){
	int a=1;
	int b=0;
	int c=1;
	printf("\n%d && %d = %d", a,b, a&&b);
	printf("\n%d && %d = %d", a,c, a&&c);
	
	printf("\n%d || %d = %d", a,b,a||b);
	printf("\n%d || %d = %d", a,c, a||c);
	
	printf("\n !%d= %d",a, !a);
	printf("\n !%d= %d",b, !b);
	}
	
	
	
