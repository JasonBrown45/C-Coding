#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct database{
    int id;
    char name[30];
    float feet;
    float inch;
    float cm;
};

int main(){

    int a,b,key;
    scanf("%d",&a);
    struct database data[a+5],temp;
    for(int i=0;i<a;i++){
        scanf("%d,%[^,],%f %f",&data[i].id,data[i].name,&data[i].feet,&data[i].inch);
        data[i].cm=12*2.54*data[i].feet+data[i].inch*2.54;
    }
    for (int i = 1; i < a; i++)
      for (int j = 0; j < a - i; j++) {
         if (data[j].cm<data[j+1].cm) {
            temp=data[j];
            data[j]=data[j+1];
            data[j + 1]=temp;
         }
      }
      
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        int flag=0;
        scanf("%d",&key);
        int counter=0;
        printf("Q%d:\n",i+1); 
        for(int i=0;i<a;i++){
            if(data[i].cm<key){
                printf("%d %s %.2f\n",data[i].id,data[i].name,data[i].cm);
                flag=1;
                }
            if(i==a-1&&flag==1){
                break;
            }
            if(i==a-1&&data[i].cm>key){
                printf("-1\n");
                break;    
                }
            }
        }    
    return 0;
}
