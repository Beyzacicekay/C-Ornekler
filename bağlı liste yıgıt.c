//yýðýtta baðlý liste
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*gecici=NULL;
struct node*top=NULL;

void push(int veri){
	struct node*eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=veri;
	if(top==NULL){
		top=eleman;
		top->next=NULL;
		
	}
	else{
		eleman->next=top;
		top=eleman;
	}
}
void pop(){
	if(top=NULL){
		printf("stack boþtur\n");
		
	}
	else{
		gecici=top->next;
		free(top);
		top=gecici;
	}
}
void yazdir(){
	if(top==NULL){
		printf("yazdirilicak eleman yoktur");
	}
	else{
		gecici=top;
		while(gecici->next!=NULL){
			printf(" %d \n",gecici->data);
			gecici=gecici->next;
		}
	}
}

int main(){
	int secim,sayi;
	while(1){
			printf("1-->SAYI EKLE\n");
		printf("2-->SAYI ÇIKART\n");
		printf("3-->YAZDIR\n");
		printf("4-->CIKIS\n");
		

		switch(secim){
			case 1: printf("sayi giriniz\n");
			        scanf("%d",&sayi);
			        push(sayi);
			        break;
			case 2: pop();
			break; 
			case 3: yazdir();
			break;
			case 4: printf("...islem sonlandý...\n");
			return 0;
			break;       
	}
		
	
}
}
















