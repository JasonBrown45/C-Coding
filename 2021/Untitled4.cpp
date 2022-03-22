#include<stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void swapchar(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}


int main(){
    int lit;
    int bla;
    scanf("%d",&lit);
    scanf("%d",&bla);
    char a[bla + 5];
    int b[bla + 5];
    getchar();
    int min=10000000;
    for(int i=0;i<bla;i++){
        scanf("%c",&a[i]);
    }
    for(int i=0;i<bla;i++){
        scanf("%d",&b[i]);
        if(min>b[i]){
            min=b[i];
        }
    }
    for (int i = 1; i < bla; i++) {
        for (int j = 0; j < bla - i; j++) {
            int curr = b[j];
            int next = b[j + 1];
            
            if (next < curr) {
                swap(&b[j], &b[j + 1]);
                swapchar(&a[j], &a[j + 1]);
            }
        }
    }
//    for(int i=0;i<bla;i++){
//        printf("%c",a[i]);
//    }
//    printf("\n");
//    for(int i=0;i<bla;i++){
//        printf("%d",b[i]);
//    }
//    printf("\n");
//    printf("min: %d",min);
//    printf("\n");
    for(int i=1;i<=lit;i++){
        int con=0;
        int con1=0;
        if(i>=min){
            for(int j=0;j<bla;j++){
                if(i%b[j]==0){
                    printf("%c",a[j]);
                    con=1;
                }
                else if(con==1&&i<b[j]){
                    con1=1;
                    break;
                }
                else if(con==0&&i<b[j]){
                    printf("%d",i%10);
                    con1=1;
                    break;
                }
                else if(con==0&&j==bla-1){
                        printf("%d",i%10);
                } 
            }    
            printf("\n");
            
        }
        else{
            printf("%d",i%10);
            printf("\n");
        }
    }
    
    return 0;
}
