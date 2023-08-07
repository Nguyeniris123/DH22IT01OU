// Lenh goto va lenh continue
#include "stdio.h";
int main(){
	int n, i;
	nhap:
		printf("nhap vao so n, voi n >0: ");
		scanf("%d", &n);
		if (n<=0) goto nhap;
		printf("day cac so le be hon hoac bang %d", n);
		for (i;i<=n;i++) {
			if (i%2 ==0) continue;
			printf("\n%d", i);
			}
	}
