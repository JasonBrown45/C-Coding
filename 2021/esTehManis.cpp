#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 99

int lastID = 0, numOfCloth = 0;

struct Cloth{
    int qty, price;
    Cloth* next;
    char nama[21], id[7], size;
}*head[MAX], *tail[MAX], *curr = NULL;

int hash(char *str){
    int sum = 0, len = strlen(str);
    for (int i = 0; i < len; ++i){
        sum += str[i];
    }
    return sum % MAX;
}

Cloth* createNewNode(int qty, int price, char size, char* id, char* nama){
    Cloth* temp = (Cloth*)malloc(sizeof(Cloth));
    temp->qty = qty;
    temp->price = price;
    strcpy(temp->nama, nama);
    strcpy(temp->id, id);
    temp->size = size;
    temp->next = NULL;
    return temp;
}

void insert(int qty, int price, char size, char* id, char* nama){
    int index = hash(id);
    Cloth* temp = createNewNode(qty, price, size, id, nama);
    if (!head[index]){
        head[index] = tail[index] = temp;
    }
    else{
        tail[index]->next = temp;
        tail[index] = temp;
    }
}

void search(char* nama){
    int index = hash(nama);
    if (!head[index]) puts("Data not found!");
    else{
        curr = head[index];
        while(curr && strcmp(curr->nama, nama)){
            curr = curr->next;
        }
        if (!curr) puts("Data not found!");
        else{
            puts("Data found!");
            printf("Name: %s, qty: %d, Hash: %d\n", curr->nama, curr->qty, index);
        }
    }
}

void print(){
    if (numOfCloth > 0){
        curr = NULL;
        puts("==================================================================================");
        puts("| Id     | Name                          | Size  | Price         | Quantity      |");
        puts("==================================================================================");
        for (int i = 0; i < MAX; ++i){
            if (head[i]){
                curr = head[i];
                while(curr){
                    printf("| %-7s| %-30s| %-6c| %-14d| %-14d|\n", 
                            curr->id, curr->nama, curr->size, curr->price, curr->qty);
                    curr = curr->next;
                }
            }
        }
        puts("==================================================================================");
    }
    else puts("No Cloth yet");
}

void addCloth(){
    char name[21], size[2], id[7];
    lastID++;
    int price, qty, temp = lastID, len;
    //Generate ID
    id[0] = 'C';
    id[1] = 'H';
    for (int i = 4; i >= 2; --i){
        id[i] = temp % 10 + '0';
        temp /= 10;
    }
    id[5] = '\0';
    ////////////////////////////
    do{
        printf("Insert Cloth Name [6..20]: ");
        scanf("%[^\n]", name); getchar();
        len = strlen(name);
    }while(len < 6 || len > 20);
    do{
        printf("Insert Cloth Size[S | M | L] (case insensitif) : ");
        scanf("%[^\n]", size); getchar();
    }while(strcmpi(size, "S") && strcmpi(size, "M") && strcmpi(size, "L"));
    do{
        printf("Insert Cloth Price[100000 - 500000] : ");
        scanf("%d", &price); getchar();
    }while(price < 100000 || price > 500000);
    do{
        printf("Insert Cloth Quantity[quantity > 0] : ");
        scanf("%d", &qty); getchar();
    }while(qty <= 0);
    if (size[0] >= 'a' && size[0] <= 'z') size[0] -= 32;
    insert(qty, price, size[0], id, name);
    numOfCloth++;
}

void printDeleted(Cloth* curr){
    printf("Deleted Item\n");
    printf("Id      : %s\n", curr->id);
    printf("Name    : %s\n", curr->nama);
    printf("Size    : %c\n", curr->size);
    printf("Price   : %d\n", curr->price);
    printf("Quantity: %d\n", curr->qty);
}

void removeCloth(){
    system("cls");
    print();
    int flag = 0;
    if (numOfCloth > 0){
        char id[6];
        do{
            printf("Search Cloth Id (case insensitif): ");
            scanf("%[^\n]", id); getchar();
            if (strlen(id) >= 2){
                if (id[0] >= 'a' && id[0] <= 'z') id[0] -= 32;
                if (id[1] >= 'a' && id[1] <= 'z') id[1] -= 32;
            }
            int index = hash(id);
            if (head[index]){
                curr = head[index];
                if (strcmpi(id, head[index]->id) == 0){
                    if (head[index] == tail[index]) head[index] = tail[index] = NULL;
                    else head[index] = head[index]->next;
                    printDeleted(curr);
                    free(curr); //data removed
                    flag = 1;
                    numOfCloth--;
                    printf("Press enter to continue...");
                }
                else{
                    while(curr->next != NULL && strcmpi(curr->next->id, id) != 0){
                        curr = curr->next;
                    }
                    if (curr->next != NULL){
                        Cloth* temp = curr->next;
                        curr->next = temp->next;
                        printDeleted(temp);
                        free(temp);
                        flag = 1;
                        numOfCloth--;
                        printf("Press enter to continue...");
                    }
                }
            }
        }while(!flag);
    }
}

void mainMenu(){
    int menu = 0;
    do{
        system("cls");
        print();
        puts("Billionares Distro");
        puts("===================");
        puts("1. Add new cloth");
        puts("2. Delete cloth");
        puts("3. Exit");
        printf("Choose: ");
        scanf("%d", &menu); getchar();
        switch(menu){
            case 1:
                addCloth();
                break;
            case 2:
                removeCloth();
                getchar();
                break;
        }
    }while(menu != 3);
}

int main(){
    mainMenu();

    return 0;
}