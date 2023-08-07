// vong lap while
#include "stdio.h"
int main(){
	int i=0;
	int n;
	int tong=0;
	printf("nhap vao n: ");
	scanf("%d", &n);
	while (i<=n){
		tong=tong + i;
		printf("%d\n",i);
		
		i++;
		}
		
		printf("tong la: %d", tong);
		}
