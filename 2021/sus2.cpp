#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int baris[10025]={0};
    int counter=0;
    for(int x=0;x<n;x++){
        int i;
        scanf("%d",&i);
        if(i>0){
            baris[i]=1;
        }
        if(i<0){
            if(baris[-i]==0){
                counter+=1;
            }
            else{
            baris[-i]=0;
            }
        }
    }
    printf("%d",counter);
    return 0;
}
