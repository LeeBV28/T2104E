#include <stdio.h>

int main(){
	int n;
	printf("Nhap size mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int tong=0;
	for(int i=0; i<n; i+2){
		if(arr[i]%2!=0){			
			tong=tong+arr[i];
		}
	}
	printf("tong cac so le o vi tri chan trong mang: %d",tong);
}
