#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Nhap so a ");
	scanf("%d",&a);
	printf("Nhap so b ");
	scanf("%d",&b);
	printf("nhap so c ");
	scanf("%d",&c);
	
	max=a;
	if(max<b){
		if(max<c){
			printf("So nho nhat la so %d",max);
		}else{		
			printf("so nho nhat la so %d",c);
		}
	}else{
		max=b;
		if(max<c){
			printf("So nho nhat la so %d",max);
		}else{
			printf("so nho nhat la so %d",c);
		}
	}
printf("\n");
printf("\n");
printf("\n");
printf("\nBY: Bui van le");
printf("\nTKS ALL");
}
