#include <stdio.h>
#include <math.h>

int main(){	
	float a,b,c;
	printf("Nhap so a: ");
	scanf("%f",&a);
	printf("Nhap so b: ");
	scanf("%f",&b);
	printf("Nhap so c: ");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Voi gia tri a, b, c ban vua nhap pt vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float x;
			x=-c/b;
			printf("Phuong trinh co nghiem x=%f",x);
		}
	}else{
		if((a+b+c)==0){
			float x1,x2;
			x1=1;
			x2=(c/a);
			printf("Truong hop dac biet (a+b+c=0), Phuong trinh co 2 nghiem \n");				
			printf("x1=%f\n",x1);
			printf("x2=%f\n",x2);		
		}else{
			if((a-b+c)==0){
				float x1,x2;
				x1=-1;
				x2=-c/a;
				printf("Truong hop dang biet (a-b+c=0), phuong tring cos 2 nghiem \n");
				printf("x1=%f\n",x1);
				printf("x2=%f\n",x2);
			}else{
				float delta;
				delta=(b*b)-(4*a*c);
				if(delta<0){
					printf("Phuong trinh vo nghiem");
				
				}else{
					if(delta==0){
						float x;
						x=-b/(2*a);
						printf("Phuong trinh co 1 nghiem x1=x2=%f",x);
					}else{
						float x1,x2;						
						delta=sqrt(delta);
						x1=(-b+delta)/(2*a);
						x2=(-b-delta)/(2*a);
						printf("Phuong trinh co 2 nghiem\n");
						printf("x1=%f\n",x1);
						printf("x2=%f\n",x2);
					}
				}
			}
		}
	
	}
	



}
