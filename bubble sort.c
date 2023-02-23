//bubble sort
#include<stdio.h>
int dizi[100];
void bubblesort(int dizi[],int n){

  int i,j;
  int gecici;
  for(i=0;i<n;i++){
  	for(j=1;j<n-i;j++){
  		
  		if(dizi[j-1]>dizi[j]){
  			gecici=dizi[j];
  			dizi[j]=dizi[j+1];
  			dizi[j+1]=gecici;
  			
		  }
	  }
  }
}
int main(){
	int dizi[100],n,i,j;
	printf("kac elemanli:"); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	bubblesort(dizi,n);
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
		printf("%d ",dizi[i]);
	}
}


}

