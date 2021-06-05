#include <stdio.h>
#include <string.h>

void chuyendoi(char s[]){
	for(int i=0; i<strlen(s); i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}printf("Chuoi sau khi chuyen doi: %s",s);
}

int main(){
	char s[50];
	printf("Nhap vao chuoi: ");
	scanf("%s",s);
	chuyendoi(s);
}
