#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int giaithua=1;
	for(int i=1; i<=n; i++){
		giaithua*=i;
	}
	printf("Giai thua cua %d la: %d",n, giaithua);
}
