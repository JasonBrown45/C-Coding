#include <stdio.h>

int main(){
    long long int a,b,sum=1;
    long long int c[505][505];
    
    scanf("%lld %lld",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%lld",&c[i][j]);
        }
    }
    for(int j=0;j<b;j++){
        long long int counter=0;
        for(int i=0;i<a;i++){
            counter=(counter+c[i][j])%1000000007;
        }
        sum=(sum*counter)%1000000007;   
    }
    printf("%lld\n",sum);
    return 0;
} 
/*
3 3
1 4 7
2 5 8
3 6 9
*/
