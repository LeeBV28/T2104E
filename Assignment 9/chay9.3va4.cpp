#include <stdio.h>
#include "bcnn.h"
#include "ucln.h"

int main(){
	int a, b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	bcnn(a,b);	
	ucln(a,b);
}
