#include <stdio.h>
int main(){
	int a;
	int b;
	printf("Nhap 2 so can kiem tra ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("%d la so lon nhat",a);
	}else{
		if(a==b){
			printf("Ban vua nhap 2 so bang nhau");
		}else{
			printf("%d la so lon nhat",b);
		}
	}
}
