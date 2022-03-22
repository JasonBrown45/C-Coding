#include <stdio.h>

int main(){
    int a,b,c[105][105],total=1;
    scanf("%d %d",&a,&b);
    for(int i=0;i<=a;i++){
        for(int j=1;j<=b;j++){
            scanf("%d",&c[i][j]);
        }
    for(int i=1;i<=a;i++){
        int total_1=0;
        for(int j=1;j<=b;j++){
            total_1+=c[j][i];
        }
             
    }
    
}
    return 0;
}
