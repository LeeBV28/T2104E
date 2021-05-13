#include <stdio.h>
int main(){
	int num;
	printf("nhap num =");
	scanf("%d",&num);
	int r;
	r = num % 2;
	if(r==0){
		printf("number is even");
		
	}else{
		printf("number id odd");
	}
}
