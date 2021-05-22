#include <stdio.h>

main(){
	int a;
	printf("Nhap so can xem xet ");
	scanf("%d",&a);
	if(a>=2 && a<=8){
		printf("Day la thu %d",a);
	
	}else{
		if(a==8){
			printf("Day la chu nhat");
		}else{
			printf("Khong phai ngay trong tuan");
		}
		
	}
}
