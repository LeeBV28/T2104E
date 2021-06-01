#include <stdio.h>
#include "As9.2.h"


int main(){
	int n;
	printf("Nhap size mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("So le cua mang vua nhap la: ");	
	inrasole(arr, n);
}
