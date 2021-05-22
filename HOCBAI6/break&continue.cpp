#include <stdio.h>

int main(){
	for(int i=0;i<10;i++){
		printf("Bat dau quet don tang %d\n",i);
		if(i==3){
		break; // dung lai khi i=3
		continue; // bo qua printf chayj don lai bat dau don
		printf("Da don xong tang %d\n",i);
	}
	}
}
