#include <stdio.h>

int main(){
    long long int a,b;
    scanf("%lld",&a);
    for(int i=1;i<=a;i++){
        scanf("%lld",&b);
        long long int c[b+5],d=0,ctr;
        for(int j=1;j<=b;j++){
            scanf("%lld",&c[j]);
        }
        for(int k=1;k<b;k++){
            if(c[k]!=0){
                for(int l=k+1;l<=b;l++){
                    if(c[k]==c[l]){
                        ctr++;
                        c[l]=0;
                    }
                }
            }
            if(ctr>2) {
                ctr=ctr*(ctr-1)*(ctr-2)/6;
                d+=ctr;
            }
        ctr=1;
        }
        printf("Case #%d: %lld\n",i,d);
    }    
    return 0;
}
/*
5
5
1 1 2 2 2 
5
1 2 2 2 2
10
1 3 3 3 3 3 2 2 2 2 
5
1 2 2 3 3
10
2 2 2 2 2 2 2 2 2 2
*/
