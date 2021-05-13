#include <stdio.h>
int main(){
	int num;
	printf("nhap so n=");
	scanf("%d",&num);
	if(num>0){
		printf("%d ban nhap la so duong",num);
	}else{
		if(num==0){
			printf("Ban vua nhap so %d",num);
		}else{
			printf("%d la so am",num);
		}
	}
}
