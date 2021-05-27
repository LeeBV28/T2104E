#include <stdio.h>

int main(){
	int ary [10];
	int i, max, canmax;
	for(i=0; i<10; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	max=ary[0];
		for(i=0; i<10; i++){
		if(ary[i]>max){
			max=ary[i];
		}
		}
		
	}printf("So lon nhat la so: %d, va so gan lon nhat la: %d",max, canmax);
}
