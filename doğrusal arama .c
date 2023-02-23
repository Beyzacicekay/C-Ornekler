//doğrusal arama
int aranansayi(int dizi[],int n,int aranan){
	int i=0;
	for(i=0;i<n;i++){
		if(aranan==dizi[i]){
			return i;
		}
	}
}
int main(){
	int aranan,n,i;
	printf("dizinin boyutunu giriniz:");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++){
		printf("%d.sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	printf("aranan sayiyi giriniz:");
	scanf("%d",&aranan);
	
	aranansayi(dizi,n,aranan);
	printf("aranan sayi %d. indistedir",n);
	
	
	
}
