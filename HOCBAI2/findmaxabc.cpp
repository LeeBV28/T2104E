#include <stdio.h>
#include <>
int main(){
	int a, b, c;
	printf("nhap lan luot 3 so can so sanh va bam enter sau moi lan nhap ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int max;
	max=(a);
	if(max>b){
		if(max>c){
			printf("%d la so lon nhat",max);
		}else{
			printf("%d la so lon nhat",c);
		}
	}else{
		max=(b);
		if(max>c){
			printf("%d la so lon nhat",max);
		}else{
			printf("%d la so lon nhat",c);
		}
	}
}
