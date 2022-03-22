#include<stdio.h>
#include<stdlib.h>
int main(){
    int du,dv,N,M,i,j;
    int count=0;
    scanf("%d %d",&N,&M);
    int p[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        p[i][j] = 0;
    }
    if(N!=(M+1)){count=1;}
    for(i=0;i<M;i++){
        scanf("%d %d",&du,&dv);
        if(count==0){
            p[du-1][dv-1]++;
            p[dv-1][du-1]++;
        }
    }
    if(count==1){
        printf("NO");
        exit(0);
    }
    for(i=0;i<N;i++){
        int count=0;
        for(j=0;j<N;j++){
            if(p[i][j] == 1)
            count++;
        }
        if(count!=1&&count!=(N-1)){
            printf("YES");
            exit(0);
        }
    }
    printf("YES");
}
