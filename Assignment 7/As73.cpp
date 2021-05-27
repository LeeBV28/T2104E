#include <stdio.h>

int main(){
	int n[10];
	int i;
	int dem=0;
	int dem1=0;
	
	for(i=0;i<10;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<10;i++){
		if(n[i]>=0){
			dem++;
		}else{
			if(dem>dem1){
				dem1=dem;
				dem=0;
			}
		}
	}if(dem1!=0){
		printf("So luong cac so duong lien tiep nhieu nhat la: %d",dem1);
	}else{
		printf("Day ban nhap khong co so duong");
	}
}
