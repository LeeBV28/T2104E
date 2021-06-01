bool timkiem(int x){
	int n;
	printf("Nhap size cua ham: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int check=0;
	for(int i=0; i<n; i++){
		if(x==arr[i]){
			check++;
			break;
		}
	}if(check==1){
		return true;
	}else{
		return false;
	}
}
