#include <stdio.h>

int main(){
	int n[5];
	int i, bien;
	
	for(i=0;i<5;i++){
		printf("Nhap nho thu %d: ",i);
		scanf("%d",&n[i]);
	}
	for(i=4;i>=0;i--){
		bien=n[i]%2;
		if(bien!=0){
			bien=1;
			break;
		}else{
			bien=0;
		}
	}if(bien==1){
		printf("So %d la so le cuoi cung cua mang n",n[i]);
	}else{
		printf("Mang n vua nhap khong co so le");
	}
	
}
