void bubblesort(int dizi[],int n){
	int i,j;
	int gecici;
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(dizi[j-1]>dizi[j]){
				gecici=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=gecici;
			}
		}
	}
}
int main(){
	int n,dizi[100];
	int i,j;
	printf("dizinin boyutunu girin:");  scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
		
	
	bubblesort(dizi,n);
		for(i=0;i<n;i++){
		printf("%d.sayi: %d\n",i+1,dizi[i]);
}
	
	
}
