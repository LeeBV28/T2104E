void bcnn(int a, int b){
	for(int bc=a; bc<=a*b; bc++){
		if(bc%a==0 && bc%b==0){
		printf("\nBCNN cua %d va %d la: %d\n",a,b,bc);
		break;	
		}
	}
}
