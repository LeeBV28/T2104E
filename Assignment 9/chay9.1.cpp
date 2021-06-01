#include <stdio.h>
#include "timkiem.h"

int main(){
	int x;
	printf("nhap so x can tim: ");
	scanf("%d",&x);
	bool kt=timkiem(x);
	if(kt){
		printf("So %d vua nhap co trong mang n",x);
	}else{
		printf("So %d vua nhap khong co trong mang",x);
	}
}
