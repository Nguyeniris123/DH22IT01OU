// Bt vong lap, tinh giai thua
#include "stdio.h"
int main(){
	int n, i, gt;
	do {
		printf("nhap vao gia tri nguyen n >= 0: \n");
		scanf("%d", &n);
		}
		while (n<0);
		gt=1;
		for(i=1;i<=n;i++){
			gt=gt*i;
			}
			printf("!%d = %d", n,gt);
			
}
