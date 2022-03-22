#include <stdio.h>

int main(){
    int n, x, key;
    int score[105], temp=0;
    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++){
        scanf("%d",&score[i]);        
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(score[j]<score[j+1]){
                temp=score[j];
                score[j]=score[j+1];
                score[j+1]=temp;
            }
        }
    }
    for(int i=0; i<x; i++){
        scanf("%d", &key);
        for(int j=0; j<n; j++){
            if(score[j]==key){
                for(int k=j; k<n; k++){
                    score[k]=score[k+1];
                }
                j--;
            }
        }
    }
    if(n==0){
        printf("Maximum number is -1\n");
    }
    else{
        printf("Maximum number is %d\n", score[0]);
    }
}
