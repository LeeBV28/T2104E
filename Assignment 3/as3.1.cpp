#include <stdio.h>


int main(){
	int n;
	printf("chuong trinh tim so nghich dao cua 1 so nguyen duong co 4 chu so\n");
	printf("nhap vao so can dao nguoc\n");
	scanf("%d",&n);
	int gt1, gt2, gt3, gt4;
	if(n<=9999 && n>0){
		if(n>=1000){		
			gt1=n%10;
			n=n/10;
			gt2=n%10;
			n=n/10;
			gt3=n%10;
			n=n/10;
			gt4=n%10;
			if(gt1!=0){
				printf("%d%d%d%d la so can tim",gt1,gt2,gt3,gt4);
			}
			if(gt2!=0 && gt1==0){
				printf("%d%d%d la so can tim",gt2,gt3,gt4);
			}
			if(gt3!=0 && gt2==0 && gt1==0){
				printf("%d%d la so can tim",gt3,gt4);
			}	
			if(gt4!=0 && gt3==0 && gt2==0 && gt1==0){
				printf("%d la so can tim",gt4);
			}
		}else{
			if(n>=100){
				gt1=n%10;
				n=n/10;
				gt2=n%10;
				n=n/10;
				gt3=n%10;					
				if(gt1!=0){
					printf("%d%d%d la so can tim",gt1,gt2,gt3);
				}
				if(gt2!=0 && gt1==0){
					printf("%d%d la so can tim",gt2,gt3);
				}
				if(gt3!=0 && gt2==0 && gt1==0){
					printf("%d la so can tim",gt3);
				}		
			}else{
				if(n>10){
					gt1=n%10;
					n=n/10;
					gt2=n%10;														
					if(gt1!=0){
						printf("%d%d la so can tim",gt1,gt2);
					}	
					if(gt2!=0 && gt1==0){
						printf("%d la so can tim",gt2);
					}
				}else{
					printf("%d la so can tim",n);
				}				
			}
		}
	}else{
		printf("%d nam ngoai khoang tinh toan, vui long nhap 1 so nguyen duong co 4 chu so",n);
		}	
}
