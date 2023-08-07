// dem so ngay co trong thang, nhap vao thang nam
#include "stdio.h"
int main(){
	int nam, thang;
	printf("nhap vao so nam: ");
	scanf("%d", &nam);
	
	printf("nhap vao so thang");
	scanf("%d", &thang);
	
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("co 31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("co 30 ngay ");
		break;
		case 2:
			if ((nam%400 == 0) || (nam%4==0 && nam %100 !=0)) {
			printf("co 29 ngay");
			} else { printf("co 28 ngay");
			} 
			break;
			default:
				printf("nhap dl ko dung");
			
		}
	}
		
								
		
		
		
	
	
	
	
	
	
	
	
	

