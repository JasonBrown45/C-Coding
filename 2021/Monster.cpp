#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int hashSize = 256;

struct Monster {
	char name[100];
	char type[15];
	float size;
	char location[100];
	char id[10];
	struct Monster *next;
};

Monster *hash[hashSize + 1];

Monster *createNewMonster(char name[], char type[], float size, char location[], char id[]) {
	Monster *curr = (Monster*)malloc(sizeof(Monster));
	strcpy(curr->name, name);
	strcpy(curr->type, type);
	curr->size = size;
	strcpy(curr->location, location);
	strcpy(curr->id, id);
	curr->next = NULL;
	
	return curr;
}

int hashFunction(char id[]) {
	int total = 0;
	int len = strlen(id);
	for (int i=0; i<len; i++) {
		total += id[i];
	}
	return total % hashSize;
}

void insertHash(char name[], char type[], float size, char location[], char id[]) {
	Monster *insert= createNewMonster(name, type, size, location, id);
	int key = hashFunction(id);
	if (hash[key] == NULL) {
		hash[key] = insert;
	}
	else {
		Monster *temp = hash[key];
		while (temp->next != NULL) {
			temp =temp->next;
		}
		temp->next= insert;
	}
}

void printMonster () {
	for(int i=0 ; i<hashSize; i++) {
		Monster *temp = hash [i];
		while(temp != NULL) {
			printf("===========================\n");
			printf("ID: %s\n", temp->id);
			printf("Name: %s\n", temp->name);
			printf("Size: %f\n", temp->size);
			printf("Location: %s\n", temp->location);
			printf("Type: %s\n", temp->type);
			printf("===========================\n");
			temp=temp->next;
			printf("\n");
		}
	}
}

bool validateMonsterName(char name[]) {
	int len = strlen(name);
	if (len >= 3 && len <= 20) {
		if (name[0] >= 'A' && name[0] <= 'Z')
			return true;
	}
	return false;
}

bool validateMonsterType(char type[]) {
	if(strcmp(type, "Large") == 0 || strcmp(type, "Small") == 0 || strcmp(type, "Endemic") == 0 || strcmp(type, "Pets") == 0){
		return true;
	}
	return false;
}

bool startWith(char name[], char pattern[]) {
	int len= strlen(name);
	int patternLen = strlen(pattern);
	if(len < patternLen)
		return false;
	for (int i = 0 ; i < patternLen ; i++){
		if(name[i] != pattern[i])
			return false;
	}
	return true;
}

bool endsWith(char name[], char pattern[]) {
	int len = strlen(name);
	int patternLen = strlen(pattern);
	if(len < patternLen)
		return false;
	for(int i = 0 ; i < patternLen ; i++) {
		if(name[len - patternLen + i] != pattern[i])
			return false;
	}
	return true;
}

char uppercase(char c) {
	if(c >= 'a' && c <= 'z')
		c = c-('a'-'A');
	return c;
}

void generateID(char id[], char name[]) {
	for(int i=0; i<3; i++) {
		id[i] = name[i];
		id[i] = uppercase(name[i]);
	}
	
	for(int i=3; i<6 ;i++) {
		id[i] = rand() % 10 + '0'; //0-9
	}
}

void insertMonster() {
	char name[100];
	char type[15];
	float size;
	char location[100];
	char id[7];
	
	do {
		printf ("Input monster name [3-20 characters & starts with Capital Letter]: ");
		scanf ("%[^\n]", name); getchar();
	} while(!validateMonsterName (name));
	
	do {
		printf("Input monster type [Large, Small, Endemic, Pets (Case Sensitive)]: ");
		scanf ("%[^\n]", type); getchar();
	} while(!validateMonsterType (type));
	
	do {
		printf("Input monster size [100.00 - 5000.00]: ");
		scanf ("%f", &size); getchar();
	} while(size < 100 || size > 5000);
	
	do {
		printf("Input monster location [endswith ' Biome']: ");
		scanf ("%[^\n]",location); getchar();
	} while(!endsWith(location, " Biome"));
	
	generateID(id, name);
	printf("\nGenerated ID: %s\n", id);
	
	insertHash(name, type, size, location, id);
	printf("Monster inserted succesfully\n\n");
	
	return;
}

void updateMonsterData (Monster *monster) {
	char name[100];
	char type[15];
	float size;
	char location [100];
	char id[7];
	printf("Input 0 to skip update\n");
	
	do {
		printf ("input monster name [3-20 characters & Startswith Capital Letter]: ");
		scanf ("%[^\n]",name); getchar();
		if(strcmp(name, "0") == 0)
			return;
	} while(!validateMonsterName (name));
	
	do {
		printf ("Input monster type [Large, Small, Endemic, Pets]: ");
		scanf ("%[^\n]",type); getchar();
		if(strcmp(name, "0") == 0)
			return;
	} while(!validateMonsterType (type));
	
	do {
		printf ("Input monster size [100.00 - 5000.00]: ");
		scanf ("%f", &size); getchar();
		if(strcmp(name, "0") == 0)
			return;
	} while(size < 100 || size > 5000);
	
	do {
		printf ("Input monster location [ends with ' Biome']: ");
		scanf ("%[^\n]",location); getchar();
		if (strcmp(name, "0") == 0) 
			return;
	} while(!endsWith (location, " Biome"));
	
	strcpy(monster->name, name);
	strcpy(monster->location, location);
	strcpy(monster->type, type);
	monster->size = size;
	printf("Monster succesfully updated\n\n");
}

void updateMonster() {
	char id[7];
	printMonster();
	printf("Input monster ID to update: ");
	scanf("%[^\n]", id); getchar();
	
	int key = hashFunction(id);
	if(hash[key] == NULL){
		printf("Monster not found...\n\n");
		return;
	}
	
	if (strcmp(hash[key]->id, id) == 0) {
		updateMonsterData(hash[key]);
	} else {
		Monster *temp = hash[key];
		while(temp->next != NULL) {
			if(strcmp(temp->id, id) == 0) {
				updateMonsterData(temp->next);
			}
			temp = temp->next;
		}
		printf("Monster not found...\n\n");
	}
}

void removeMonster() {
	char id[7];

	printMonster();
	printf ("Choose monster ID to be deleted: ");
	scanf ("%[^\n]", id); getchar();
	
	int key = hashFunction(id);
	if(hash[key] == NULL) {
		printf("Monster not found...\n\n");
		return;
	}
	
	if (strcmp(hash[key]->id, id) == 0) {
		Monster *temp = hash[key]->next;
		free(hash[key]);
		hash[key] = temp;
	} 
	else {
		Monster *temp = hash[key];
		while(temp->next != NULL) {
			if(strcmp(temp->id, id) == 0) {
				Monster *temp2 = temp->next;
				temp->next = temp2->next;
				free(temp2);
				printf("Monster has been succesfully removed...\n\n");
				return;
			}
			temp = temp->next;
		}
		printf("Monster not found...\n\n");
	}
}

int getInputMenu() {
	int menu;
	
	do {
		printf(">> ");
		scanf("%d", &menu);
	}while(menu < 1 || menu > 4);
	
	return menu;
}

int main(){
	int menu = 0;
	do {
		printMonster();
		printf ("1. Insert Monster\n");
		printf ("2. Update Monster\n");
		printf ("3. Remove Monster\n");
		printf ("4. Close\n");
		
		menu = getInputMenu(); getchar();
		
		if (menu == 1){
			insertMonster();
		}
		else if (menu == 2){
			updateMonster();
		}
		else if (menu == 3){
			removeMonster();
		}
		
	}while(menu != 4);
	
	return 0;
} 
