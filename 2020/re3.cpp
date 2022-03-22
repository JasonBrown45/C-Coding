#include <stdio.h>

int main (){
    
    long long int n,m;
    
    scanf("%lld %lld",&n,&m);
    
    long long int a[n][m];
    
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    long long int xx=0,yy=1;
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            xx = (xx + a[j][i]);
        }
        yy=(yy*xx) % 1000000007;
        xx=0;
    }
    printf("%lld\n",yy);
return 0;
}
