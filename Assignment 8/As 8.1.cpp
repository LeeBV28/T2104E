#include <stdio.h>

int main(){
	int a;
	printf("Size cua mang n: ");
	scanf("%d",&a);
	int n[a];
	
	for(int i=0;i<a; i++){
		printf("nhap so thu %d: ",i);
		scanf("%d",&n[i]);
	}
	
	for(int i=0; i<a-1; i++){
		for(int j=0; j<a-i-1; j++){
			if(n[j]>n[j+1]){
				int temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	int low=0, hig=a-1, mid;
	int x, check=0;
	printf("nhap so can tim: ");
	scanf("%d",&x);
	while(low<=hig){
		mid=(low+hig)/2;
		if(x==n[mid]){
			check=1;		
			printf("So nho hon va gan %d nhat la so: %d",x,n[mid-1]);
			break;
		}if(x>n[mid]){
			low=mid+1;
		}if(x<n[mid]){
			hig=mid-1;
		}
	}if(check==0){
		printf("so %d vua nhap khong nam trong mang n",x);
	}
	
}
