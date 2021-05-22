#include <stdio.h>
int main(){
 int n,d;
	d=2;
	printf("Nhap so n ");
	scanf("%d",&n);
	printf("cac so chan nho hon %d la: ",n);

	while(d<n){
		printf("%d",d);
		d=d+2;
	}
	printf("khong co so nao");

	
}
