#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float p, p2, s;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	while(!(a+b>c && a+c>b && b+c>a)){
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);		
	}
	p=a+b+c;
	p2=p/2;
	s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("Chu vi la: %d",p);
	printf("Dien tic la: %d",s);
}
