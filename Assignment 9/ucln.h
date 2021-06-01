void ucln( int a, int b){
	
	for(int uc=a;uc>=1;uc--){
		if(a%uc==0 && b%uc==0){
			printf("\nUCLN cua %d va %d la: %d\n",a,b,uc);
			
		}
	}
}
