#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next; //düðümü bir sonraki deðere aktarma 
};
struct node* gecici=NULL;
struct node*front=NULL;
struct node*rear=NULL;

void elemanEkle(int veri){
	struct node*eleman=(struct node*)malloc(sizeof(struct node));
	eleman->data=eleman;
	
	if(front==NULL){
		front=eleman;
		front->next=front;
		rear=eleman;
		rear->next=NULL;
			 
	}
	else if(front->next=front){
		rear->next=eleman;
		rear=eleman;
		front->next=eleman;
		
	}
	else{
		rear->next=eleman;
		rear=eleman;
		rear->next=NULL;	
	}
}

void elemanCikar()
 {
	
	if(front==NULL){
		printf("liste bostur...");
	}
	else{
		gecici=front->next;
		free(front);
		front=gecici;		
	}
}
void yazdir(){
	if(front==NULL){
		printf("liste bos\n");
	}
	else{
		gecici=front;
		while(gecici->next!=NULL){
			printf("%d",gecici->data);
		}
			printf("%d",gecici->data);
	}
}

int main(){
	
	elemanEkle(10);
	elemanEkle(20);
	elemanCikar();
	yazdir();
}












