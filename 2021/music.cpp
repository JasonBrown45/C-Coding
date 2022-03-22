#include <stdio.h>
#include <string.h>
#include <stdlib.h>


const int max=50;
int counter=0;

struct music{
	char name [32];
	char type[8];
	char id[6];
	int price;
	int qty;
	struct music *prev,*next;
}*head[max],*tail[max],*curr;

music *InsertToStruct(char name[],char type[],char id[],int price,int qty){
	curr=(music*)malloc(sizeof(music));
	strcpy(curr->name,name);
	strcpy(curr->type,type);
	strcpy(curr->id,id);
	curr->price=price;
	curr->qty=qty;
	curr->next=NULL;
	curr->prev=NULL;
}

void generateID(char id[],int counter){
	int counter1=0;
	id[0]='M';
	id[1]='I';
	id[2]='0';
	if(counter<10){
		id[3]='0';
		id[4]=counter+'0';
	}
	else if(counter>=10){
			if(counter%10!=0){
				while(counter>=10){
				counter=counter%10;
				counter1++;
				}
			}
			else{
				while(counter>=10){
					counter=counter-10;
					counter1++;
				}
			}
		id[3]=counter1+'0';
		id[4]=counter+'0';	
	}
}

void insert(){
	char name[32],type[8],id[6];
	int price,qty,len;
	do{
		printf("Insert Music Instrument Name [5-30]: ");
		scanf("%s",name);
		getchar();
	}while(strlen(name)<5||strlen(name)>30);
	do{
		printf("Insert Music Instrument Type [Piano | Guitar | Violin] (Case Sensitive): ");
		scanf("%s",type);
		getchar();
	}while(strcmp(type,"Piano")!=0&&strcmp(type,"Guitar")!=0&&strcmp(type,"Violin")!=0);
	
	do{
		printf("Insert Music Instrument Price Rp.[100000-10000000]: ");
		scanf("%d",&price);
	}while(price<100000||price>10000000);
	
	do{
		printf("Insert Quantity (Must Be More Than 0): ");
		scanf("%d",&qty);
	}while(qty<0);
	
	//generateID(id,counter);
	printf("Added Succesfully\n");
}

void printitem(){
	
}

void menu(){
	printitem();
	printf("\n");
	printf("\n");
	printf("==========================\n");
	printf("| Music Instrument Shop  |\n");
	printf("==========================\n");
	printf("1. Insert Music Instrument Order\n");
	printf("2. Delete Music Instrument Order\n");
	printf("3. Exit\n");
	printf(">> ");
}

int main(){
	int select=0;
	do{
		menu();
		scanf("%d",&select);
		getchar();
		switch(select){
			case 1:
				insert();
				break;
			case 2:
				//erase();
				break;
		}
	}while(select!=3);
	
	return 0;
}

