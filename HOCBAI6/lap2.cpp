#include <stdio.h>

int main (){
	int n; 
	printf("nhap so n: ");
	scanf("%d",&n);
	printf("so dao nguoc cua cac so nho hon %d la: ",n);
	for(int i=1;i<n;i++){
		int k=0;			
		for(int n=i;n!=0;n/=10){			
			k=k*10 + n%10;			
		}
		printf("%d, ",k);	
	}
}
