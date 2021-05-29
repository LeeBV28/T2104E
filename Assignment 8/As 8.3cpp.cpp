#include <stdio.h>

int main(){
	int n;
	printf(" Nhap size cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		if(i==0){
			printf("nhap so thu %d: ",i);
			scanf("%d",&arr[i]);
		}else{
			printf("\nnhap so thu %d: ",i);
			scanf("%d",&arr[i]);
			int tmp, j=i-1;
			tmp=arr[i];
			while(j>=0 && tmp<arr[j]){
				arr[j+1]=arr[j];
				j--;
			}arr[j+1]=tmp;				
		}for(int k=0; k<=i; k++){
			printf("%5d",arr[k]);
		}
	}printf("\nKet qua ta co mang sau: ");
	for(int i=0; i<n; i++){
		printf("%5d",arr[i]);
	}
}
