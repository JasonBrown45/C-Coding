#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

const int max=100;
int counter=0;

struct movie{
	char id[6];
	char name[25];
	char genre[10];
	float rating;
	int year;
	struct movie *next;
}*hash[max+1];

movie *inserttostruct(char id[], char name[], char genre[], float rating, int year){
	movie *curr= (movie*)malloc(sizeof(movie));
	strcpy(curr->id,id);
	strcpy(curr->name,name);
	strcpy(curr->genre,genre);
	curr->rating = rating;
	curr->year = year;
	curr->next = NULL;
	return curr;
}

int hashing(char id[]){
	int total=0;
	total+=id[4];
	total+=id[2];
	total-=id[3];
	return total % max;
}

void hashtable(char id[], char name[], char genre[], float rating, int year){
	movie *input=inserttostruct (id,name,genre,rating,year);
	int key=hashing(id);
	if (hash[key]==NULL) hash[key]=input;
	else{
		movie *temp1=hash[key];
		while (temp1->next != NULL){
			temp1=temp1->next;	
		}
		temp1->next=input;
	}
}

int valid(char genre[]) {
	if(strcmp(genre, "Adventure")==0 || strcmp(genre, "Romance")==0 || strcmp(genre, "Comedy")==0 ){
		return true;
	}
	else return false;
}

void printmenu(){
	printf("NEDFLIZ\n");
	printf("-------\n");
	printf("1. Add New Movies\n");
	printf("2. View Movies\n");
	printf("3. Delete Movies\n");
	printf("4. Exit\n");
	printf("Choose [1 - 4]> ");
}

void input(){
	counter++;
	char id[6];
	char name[100];
	char genre[20];
	float rating;
	int year;
	int len,len1;
	do {
		printf ("Input Movie Title[LENGTH : 5 - 20]\n");
		printf("> ");
		scanf ("%[^\n]", name); getchar(); len=strlen(name);
	} while (len<=5 && len>=20);	
	
	do {
		printf ("Input Movie Genre [Adventure | Romance | Comedy] (CASE INSENSITIVE)\n");
		printf("> ");
		scanf ("%s", genre); getchar(); len1=strlen(genre);
		strlwr(genre);
		genre[0] = toupper(genre[0]);
	} while (!valid(genre));
	
	do {
		printf ("Input Movie Rating [RANGE : 0.0 - 5,0]\n");
		printf("> ");
		scanf ("%f", &rating); getchar();
	} while (rating<=0 || rating>=5);
	
	do {
		printf ("Input Movie Published Years\n");
		printf("> ");
		scanf ("%d", &year); getchar();
	} while (year<=1900 || year>=2020);
	
	if(strcmp(genre, "Adventure")==0)snprintf(id,sizeof(id),"AE%03d",counter);
	else if(strcmp(genre, "Romance")==0)snprintf(id,sizeof(id),"RE%03d",counter);
	else if(strcmp(genre, "Comedy")==0)snprintf(id,sizeof(id),"CS%03d",counter);
	
	hashtable(id,name,genre,rating,year);
	printf("New Movie With ID [%s] has been added !\n",id);
}

void view(){
	int counter1=0;
	for(int i=0;i<max;i++){
		movie *temp1=hash[i];
		if(hash[i]==NULL){
			counter1++;
		}
		else continue;
		
		if(counter1==100){
			printf("No data !!!\n");
			goto eof;
		}
		else continue;
	}

	for(int i=0;i<max;i++) {
		movie *temp1=hash[i];
		while (temp1!=NULL){
			printf("LIST OF FILM\n");
			printf("------------\n");
			printf("ID: [%s]\n",temp1->id);
			printf("TITLE: %s\n",temp1->name);
			printf("GENRE: %s\n",temp1->genre);
			printf("RATING: %.1f\n",temp1->rating);
			printf("YEAR: %d\n",temp1->year);
			temp1=temp1->next;
			printf("\n");
		}
	}
	eof:
	printf("Press any key to continue...");
	getchar();
	return;
}

void view1(){
	for(int i=0;i<max;i++) {
		movie *temp1=hash[i];
		while (temp1!=NULL){
			printf("LIST OF FILM\n");
			printf("------------\n");
			printf("ID: [%s]\n",temp1->id);
			printf("TITLE: %s\n",temp1->name);
			printf("GENRE: %s\n",temp1->genre);
			printf("RATING: %.1f\n",temp1->rating);
			printf("YEAR: %d\n",temp1->year);
			temp1=temp1->next;
			printf("\n");
		}
	}
}

void erase(){
	char id[7];
	int counter1=0;
	for(int i=0;i<max;i++){
		movie *temp1=hash[i];
		if(hash[i]==NULL){
			counter1++;
		}
		else continue;
		
		if(counter1==100){
			printf("No data !!!\n");
			return;
		}
		else continue;
	}
	view1();
	printf ("Choose the movie ID [AEXXX | REXXX | CSXXX]: ");
	scanf ("%[^\n]", id); getchar(); 
	
	
	int key = hashing(id);
	if(hash[key] == NULL){
		printf("Movie not found!!!\n");
		return;
	}
	
	if (strcmp(hash[key]->id, id) == 0) {
		movie *temp = hash[key]->next;
		free(hash[key]);
		hash[key] = temp;
	} 
	else {
		movie *temp = hash[key];
		while(temp->next != NULL) {
			if(strcmp(temp->id, id) == 0) {
				movie *temp2 = temp->next;
				temp->next = temp2->next;
				free(temp2);
				printf("Movie has been deleted...\n");
				return;
			}
			temp = temp->next;
		}
		printf("Movie not found!!!\n");
	}
}

int main(){
	int select;
	do {
		printmenu();
		scanf ("%d",&select);
		getchar();
		switch(select){
			case 1:
				input();
				break;
			case 2:
				view();
				break;
			case 3:
				erase();
				break;
		}
	} while (select!=4);
	return 0;
}


