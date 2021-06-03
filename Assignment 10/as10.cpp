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
	arr = (int *)realloc(arr,(n+m)*sizeof(int));
	printf("\nnhap them %d phan tu \n",m);
	for(int i=n; i<(n+m); i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",arr+i);
	}
	for(int i=0; i<(n+m); i++){
		int j=i-1;
		int tmp=*(arr+i);
		while(j>=0 && tmp<*(arr+j)){
			*(arr+j+1)=*(arr+j);
			j--;
		}*(arr+j+1)=tmp;
	}
	printf("So lon nhat la: %d\n",*(arr+(n+m-1)));
	printf("Mang sau khi sap xep: \n");
	for(int i=0; i<(n+m); i++){
		printf("%5d",*(arr+i));
	}
	
}
