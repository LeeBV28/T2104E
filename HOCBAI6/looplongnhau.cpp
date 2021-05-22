#include <stdio.h>

int main(){
	int n;
	printf("nhap so n: ");
	scanf("%d",&n);
	printf("so nguyen to nho hon %d la",n);
	for(int i;i<n;i++){
		printf("%d, ",i);
	}
}
