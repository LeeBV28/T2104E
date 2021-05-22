#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	for(int uc=a;uc>=1;uc--){
		if(a%uc==0 && b%uc==0){
			printf("UCLN cua %d va %d la: %d",a,b,uc);
			
		}
	}
}
