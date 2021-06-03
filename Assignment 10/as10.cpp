#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Nhap vao kich thuoc mang: ");
	scanf("%d",&n);
	int *arr;
	arr = (int *)calloc(n, sizeof(int));
	for(int i=0; i<n; i++){
		printf("nhap phan tu %d: ",i);
		scanf("%d",arr+i);
	}
	for(int i=0; i<n; i++){
		int j=i-1;
		int tmp=*(arr+i);
		while(j>=0 && tmp<*(arr+j)){
			*(arr+j+1)=*(arr+j);
			j--;
		}*(arr+j+1)=tmp;
	}
	printf("So lon nhat la: %d\n",*(arr+n-1));
	printf("Mang sau khi sap xep: \n");
	for(int i=0; i<n; i++){
		printf("%5d",*(arr+i));
	}
	int m;
	printf("\nNhap so mang can tang: \n");
	scanf("%d",&m);
	arr = (int *)realloc(arr,m*sizeof(int));
	printf("nhap them %d phan tu ",m);
	for(int i=n; i<m; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",arr+i);
	}
	for(int i=0; i<m; i++){
		int j=i-1;
		int tmp=*(arr+i);
		while(j>=0 && tmp<*(arr+j)){
			*(arr+j+1)=*(arr+j);
			j--;
		}*(arr+j+1)=tmp;
	}
	printf("So lon nhat la: %d\n",*(arr+m-1));
	printf("Mang sau khi sap xep: \n");
	for(int i=0; i<m; i++){
		printf("%5d",*(arr+i));
	}
	
}
