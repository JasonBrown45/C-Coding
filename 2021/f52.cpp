#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,Q;
    int A[100000],B,C;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&Q);
    for(int i=1;i<=Q;i++){
        scanf("%d %d",&B,&C);
        int count=0;
        for(int j=0;j<N;j++){
            if((A[j]>=B)&&(A[j]<=C)){
                count++;}
            }
        printf("Case #%d: %d\n",i,count);
    }
    return 0;
}
