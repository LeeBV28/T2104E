#include <stdio.h>

int main(){
	float s;
	for(float i=1; i<1000; i++){
		s=s+(1/i);
	}
	printf("gia tri cua s: %d",s);
}
