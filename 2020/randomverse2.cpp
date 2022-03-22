#include <stdio.h>

int main(){
    
    int a,b,c[1005];
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        for(int j=1;j<=b;j++){
            scanf("%d",&c[j]);
        }
    printf("Case #%d:",i);
    
    for(int j=b;j>=1;j=j-2){
        printf(" %d %d",c[j-1],c[j]);
    	}
        printf("\n");
    }
    
}
