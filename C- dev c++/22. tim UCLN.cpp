// tim UCLN 
#include "stdio.h"
int main(){
	printf("nhap a va b: ");
	int a,b, UCLN;
	scanf("%d%d", &a, &b);
	if (a==0 || b==0){
		UCLN = (a+b);
		}
		else{ 
		while (a!=b){ 
		if (a>b){
			a= a-b;
			} 
			else{ 
			b= b-a;
			}
			UCLN= a;
			}
			printf("UCLN cua a va b la: %d", UCLN);
		}
		}
		
		
