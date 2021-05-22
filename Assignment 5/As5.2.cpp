#include <stdio.h>

int main(){
	int n, i;
	int s=0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	if(n>0){
		printf("Cac uoc so cua %d la: ",n);
		for(i=1;i<=n;i++){
			if(n%i==0){
				printf("%d, ",i);
				s=s+i;
			}
		}
		printf("\n Tong cac uoc la %d",s);
	
	}else{
		printf("Phai nhap so lon hon 0");
	}
	
}
