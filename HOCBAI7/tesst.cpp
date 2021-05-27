#include <stdio.h>

int main(){
	int ary [10];
	int i, max;
	scanf("%d",&ary[i]);
	
	for(i=1; i<10; i++){
		if(ary[i]>max){
			max=ary[i];
		}
	}printf("So lon nhat la so: %d",max);
}
