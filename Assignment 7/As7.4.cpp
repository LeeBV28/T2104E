#include <stdio.h>

int main(){
	int n[10];
	int i;
	int tong=0;
	int tong1=0;
	
	for(i=0;i<10;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<10;i++){
		if(n[i]>=0){
			tong+=n[i];
		}else{
			if(tong>tong1){
			tong1=tong;
			tong=0;
			}
		}
	}if(tong1!=0){
		printf("Chuoi so duong co tong lon nhat la: %d", tong1);
	}else{
		int dem=0;
		for(i=0;i<10;i++){ // de kiem tra truong hop nguoi dung chi nhap so duong duy nhat la so 0
			if(n[i]==0){
				dem++;				
			}			
		}if(dem!=0){
			printf("Chi co so duong la so 0 > Tong so duong lon nhat la: 0");
		}else{
		printf("Chuoi ban nhap khong co so duong nao");
		}
	}
}
