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
	int x;
	printf("Nhap so x: ");
	scanf("%d",&x);
	int count=0;
	for(int i=0; i<n; i++){
		if(arr[i]==x){
			count++;
			break;
		}
	}
	if(count==1){
		printf("So %d co trong mang",x);
	}else{
		printf("So %d khong co trong mang",x);
	}
}
