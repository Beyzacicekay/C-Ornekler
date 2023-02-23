//Kuyruk veri yapýsý 
#include<stdio.h>
#include<stdlib.h>
#define BOY 5

int rear=-1, front=-1;
int dizi[BOY];

void elemanekle(int a){
	if(rear=BOY-1){
		printf("kuyruk doludur");
	}
	else{
		if(front==-1){
			front=0;
			rear++;
			dizi[rear]=a;
		}
	}
}
void elemancikar(){
	if(front==-1){
		printf("kuyruk boþtur");
	}
	else{
		front=front+1;
	}
}
void yazdir(){
	if(front==-1){
		printf("kuyruk bostur");
	}
	else{
		int i;
	for(i=front;i<=rear;i++){
		printf("%d",dizi[i]);
	}
	
	}
		
}

int main(){
	int sayi,secim;
	printf("1--ekle\n");
	printf("2--cýkar\n");
	printf("3--yazdir\n");
	printf("4 CIKIS\n");
	
	printf("yapacaðýnýz iþlemi secin\n");   scanf("%d",&secim);

	switch(secim){
		case 1: printf("sayi girin\n"); scanf("%d",&sayi);
		elemanekle(sayi);
		case 2:elemancikar();
		case 3:yazdir();
		case 4:return 0;
		
		
			}
}





















