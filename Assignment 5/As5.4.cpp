#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	for(int bc=a;bc<=a*b;bc++){
		if(bc%a==0 && bc%b==0){
			printf("BCNN cua %d va %d la: %d",a,b,bc);
			
		}
	}
}
