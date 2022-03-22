#include <stdio.h>
int main(){

int a,b;
char c[101];
////////////////Baris pertama
scanf("%d %d",&a,&b);
for(int z=0;z<a;z++){
    for(int z=0;z<a;z++){
        printf("#");}
printf("\n");}
printf("\n");

///////////////Baris Kedua
for(int x=1;x<=a;x++){
    for(int z=1;z<=a;z++){
        if(x%b==0){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");

//////////////Baris Ketiga
for(int x=1;x<=a;x++){
    for(int x=1;x<=a;x++){
        if(x%b==0){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}
