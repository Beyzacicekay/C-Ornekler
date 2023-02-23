//binary search(ikili arama)

int aranansayi(int dizi[],int bas,int son,int aranan){
	
	while(son>=bas){
		int orta;
		orta=dizi[(bas+son)/2];
		if(orta==aranan);
	
		if(orta<aranan)
		bas++;
		if(orta>aranan);
		son++;
	}
}
int main(){
	int n,i,aranan,orta;
	printf("dizinin boyutunu girin:");
	scanf("%d",&n);
	int dizi[i];
	for(i=0;i<n;i++){
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	printf("aranan sayiyi giriniz:");
	scanf("%d",&aranan);
	printf("aranan sayi %d. indistedir",);
	aranansayi(dizi,0,n-1,aranan);
	
	
	
}
