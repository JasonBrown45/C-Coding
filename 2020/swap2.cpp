#include <stdio.h>

int main(){
    int tc;
    int c, r, b;
    int red, black;
    scanf("%d",&tc);
    for (int i=0;i<tc; i++){
        scanf("%d %d %d",&c, &r, &b);
        int a=0;
        while (r+b<=c){
            a++;
            red=r;
            black=b;
            if(a%4==0) r=r-r/3;
            else r=r*2; 
            
            if(a%3==0) b=b-b*4/5;
            else b=b*3; 
               
         }
        if(red==black){
            printf("Case #%d: %d None",i+1, a-1);
          }else if(red>black){
              printf("Case #%d: %d Red",i+1, a-1);
          }else if(black>red){
               printf("Case #%d: %d Black",i+1, a-1);
          }
        if(red>black){
        printf(" %d\n",red-black);
        }else{
        printf(" %d\n",black-red);
        }
    }
}
