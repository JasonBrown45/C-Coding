#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
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
	}while(strcmp(type,"Piano")!=0||strcmp(type,"Guitar")!=0||strcmp(type,"Violin")!=0);
	
	do{
		printf("Insert Music Instrument Price Rp.[100000-10000000]: ");
		scanf("%d",&price);
	}while(price<=100000||price>=10000000);
	
	do{
		printf("Insert Quantity (Must Be More Than 0): ");
		scanf("%d",&qty);
	}while(qty<0);
	return 0;
}

