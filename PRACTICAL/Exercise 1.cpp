#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	printf("Nhap cac canh cua tam giac\n");
	printf("Nhap canh a: ");
	scanf("%f",&a);
	printf("Nhap canh b: ");
	scanf("%f",&b);
	printf("Nhap canh c: ");
	scanf("%f",&c);
	if(a>0 && b>0 && c>0){
		if((a+b>c) && (a+c>b) && (b+c>a)){
			printf("%f %f %f la ba canh cua tam gia\n",a,b,c);
			float p=a+b+c;
			float p2=p/2;
			float s;
			s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
			printf("Chu vi cua tam giac la: %f\n",p);
			printf("Dien tich cua tam gia la: %f\n",s);
		}else{
			printf("error");
			
		}
	}else{
		printf("ba canh cua tam giac phai la 3 so lon hon 0");
	}
}
