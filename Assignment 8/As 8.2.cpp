#include <stdio.h>

int main(){
	int a;
	printf("Nhap size cho mang n: ");
	scanf("%d",&a);
	int n[a];
	for(int i=0; i<a; i++){
		if(i==0){
			printf("Nhap so thu %d: ",i);
			scanf("%d",&n[i]);
		}else{
			int x, check=0;
			while(check==0){
				printf("Nhap so thu %d: ",i);
				scanf("%d",&x);
				for(int j=0; j<i;j++){
					if(x!=n[j]){
						check=1;
						n[i]=x;						
					}else{
						printf("So ban nhap chung voi so thu %d\n",j);
						check=0;
						break;
					}
				}
			}
		}
	}
	printf("Mang vua nhap la:");
	for(int i=0; i<a; i++){
		printf("%5d",n[i]);
	}
}
