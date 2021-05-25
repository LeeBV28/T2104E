#include <stdio.h>
#include <stdlib.h>

int main(){
	int menu, da, du;
	da=0;
	du=0;
	do{
		printf("MENU\n");
		printf("1. Chon mon an\n");
		printf("2. Chon do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat chuong trinh\n");
		printf("Moi ban chon thao tac trong menu: ");
		scanf("%d",&menu);
		printf("-------------------------\n");
		while(menu!=5){ // neu menu =5 lap tuc ket thuc vong lap, neu khong khac 5 van o chay lai cum trong while
			if(menu==1){
				printf("|| Moi chon do an\n");
				printf("1. Com trang voi gio -- 20k\n");
				printf("2. Pho ga -- 25k\n");
				printf("3. Com rang cai bo -- 30k\n");
				printf("4. Pho bo --- 30k\n");
				printf("5. Quay lai\n");
				printf("lua cho cua ban la: ");
				scanf("%d",&da);	
				printf("--------------------------\n");
				switch(da){
					case 1:
						da=20;
						printf("Ban da cho: Com trang voi gio (20k)");
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 2 de chon do uong");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 2:
						da=25;
						printf("Ban da chon: Pho ga (25k)");
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 2 de chon do uong");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 3:
						da=30;
						printf("Ban da chon: Com rang cai bo (30k)");
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 2 de chon do uong");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 4:
						da=30;
						printf("Ban da chon: Pho bo (30k)");
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 2 de chon do uong");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 5:					
						menu=5;
						printf("\n------------------------------------\n");
						break;
					default:
						printf("SR ban chi duoc cho tu 1 den 5. Bam 1 de quay lai");
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 2 de chon do uong");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("------------------------------------\n");
						break;			
				}	
			}if(menu==2){
				printf("|| Moi ban cho do uong\n");
				printf("1. Tra da --- 5k\n");
				printf("2. coca --- 15k\n");
				printf("3. nuoc loc --- 10k\n");
				printf("4. Quay lai\n");
				printf("Lua cho cua ban la: ");
				scanf("%d",&du);
				printf("--------------------------\n");
				switch(du){
					case 1:
						printf("Ban da chon: Tra da (5k)");
						du=5;
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 1 de chon do an");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
				  		break;
					case 2:
						printf("Ban da chon: Coca (15k)");
						du=15;
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 1 de chon do an");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 3:
						printf("Ban da chon: Nuoc loc (10k)");
						du=10;
						printf("\n Bam 5 de quay lai menu");
						printf("\n Bam 1 de chon do an");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("\n------------------------------------\n");
						break;
					case 4:
						menu=5;
						printf("\n------------------------------------\n");
						break;
					defualt: 
						printf("SR ban chi duoc cho tu 1 den 4.");
						printf("\n Bam 2 de cho lai");
						printf("\n Bam 5 de quay lai MENU");
						printf("\n Bam 3 de Thanh toan\n");
						scanf("%d",&menu);
						printf("------------------------------------\n");
						break;					
				}
			}
			if(menu==3){				
				if(da!=0 || du!=0){
					menu=da+du;
					printf(">> Tong hoa don cua ban la %dK",menu);
					printf("\n Bam 5 de quay lai hoac bam 4 de thoat: ");
					scanf("%d",&menu);
					printf("\n------------------------------------\n");
				
				}else{
					printf("Ban chua cho gi > moi ban cho mon");
					menu=5;
					printf("\n------------------------------------\n");					
				}
			}
			if(menu==4){
				printf("\n Cam on ban da den voi nha hang!");
				exit(0);
			}if(menu!=1 && menu!=2 && menu!=3 && menu!=4){ // de ket thung vong ap 
				menu=5;
			}
					
		}
		
	}while(menu!=1 && menu!=2 && menu!=3 && menu!=4); // neu nguoi dung cho ngoai ngoai so 1,2,3,4 thi chay lai lenh trong do.
}
