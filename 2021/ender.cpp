#include<stdio.h>
int main(){
    int lit;
    int bla;
    scanf("%d",&lit);
    scanf("%d",&bla);
    char a[bla + 5];
    int b[bla + 5];
    getchar();
    
    for(int i=0;i<bla;i++){
        scanf("%c",&a[i]);
    }

    for(int i=0;i<bla;i++){
        scanf("%d",&b[i]);
    }

    for(int i=1;i<=lit;i++){
        int con=0;
        for(int j=0;j<bla;j++){
            if(i%b[j]==0){
                printf("%c",a[j]);
                con=1;
            }
            else if(j==bla-1&&con==0){
                printf("%d",i%10);
            }
        }    
        printf("\n");
    }
    
    return 0;
}
