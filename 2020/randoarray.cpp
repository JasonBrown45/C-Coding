#include <stdio.h>

int main(){
    
    int T, N, A[1005];
    
    scanf("%d",&T);
    
    for(int i = 1; i <= T; i++){
        scanf("%d",&N);
        for(int j = 1; j <= N; j++){
            scanf("%d",&A[j]);
        }
        printf("Case #%d:",i);
        for(int j = N; j >= 1; j-=2){
            printf(" %d %d",A[j-1],A[j]);
        }
        printf("\n");
    }
    
}
