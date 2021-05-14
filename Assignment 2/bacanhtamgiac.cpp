#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,p,s;	
	printf("nhap so a: ");
	scanf("%f",&a);
	printf("nhap so b: ");
	scanf("%f",&b);
	printf("nhap so c: ");
	scanf("%f",&c);
	if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
		printf("%f %f %f la 3 canh cua tam giac",a,b,c);
		p=a+b+c;
		float x;
		x=(p/2);
		s=(x-a)*(x-b)*(x-c);
		s=sqrt(s);
		printf("\nchu vi cua tam giac la %f",p);
		printf("\ndien tich cua tam giac la %f",s);
	}else{
		printf("%f %f %f khong phai la 3 canh cau tam giac",a,b,c);
	}
}
