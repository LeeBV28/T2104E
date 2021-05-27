#include <stdio.h>

int main(){
	int n[10];
	int i, sochia;
	int tbc=0;
	for(i=0; i<10; i++){
		printf("nhap so thu %d: ",i);
		scanf("%d",&n[i]);
	}
	for(i=0; i<10;i++){
		sochia=n[i]%2;
		if(sochia!=0){
			tbc=tbc+n[i];
		}
	}
		
		printf("Trung binh cong la: %d",tbc);
		
	}
