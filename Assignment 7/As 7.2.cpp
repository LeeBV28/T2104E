#include <stdio.h>

int main(){
	int n[5];
	int i, min;
	int dem=0;
	
	for(i=0;i<5;i++){
		printf("Nhap nho thu %d: ",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){ // tim ra so duong trong mang
		min=n[i];
		if(min>=0){
			min=n[i];
			dem++;
			break;
		}
	}if(dem==0){
		printf("mang n khong co so nguyen duong");
		
	}else{
			for(i=dem;i<5;i++){		
				if(n[i]>=0 && n[i]<min){
				min=n[i];								
				}
			}printf("so nguyen duong nho nhat la: %d",min);
		}
		
}	

