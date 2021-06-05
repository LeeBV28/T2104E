#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	printf("Nhap vao chuoi: ");
	scanf("%s",s);
	int a, e, u, o, i, k;
	a =e =u =o = i = k =0;
	for(int j; j<strlen(s); j++){
		switch(s[j]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'u':u++;break;
			case 'o':o++;break;
			case 'i':i++;break;
			default: k++;
		}
	}
	printf("a = %d\n",a);
	printf("e = %d\n",e);
	printf("u = %d\n",u);
	printf("o = %d\n",u);
	printf("i = %d\n",i);
	printf("ky tu khac = %d",k);
}
