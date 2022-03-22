#include <stdio.h>

int main (){
    long long int x,y,z[10000];
    
    scanf("%lld",&x);
    for(long long int i=0;i<x;i++){
        scanf("%lld",&y);
        
        for(long long int j=0;j<y;j++){
            scanf("lld",&z[j]);
        }
    long long int hp=0,hasil=1;
        for(long long int k=0;k<y;k++){
            if(hp+z[k]<=0){
                hasil=hasil-hp+z[k];
                hp=0;
            }
            else if(hp+z[k]>0){
                hp=hp+z[k];
            }
        }
        printf("%lld",hasil);
    }
    
    
return 0;
}

/*
2
5
1 2 -3 4 -5 
5
-1 -1 -1 -2 9

6
5
1 2 -3 4 -5 
5
-1 -1 -1 -2 9
5
-1 -1 -1 -1 -1
4
-1 -2 -3 -4
5
1 2 -5 -5 3
5
5 -2 -3 -1 1
*/
