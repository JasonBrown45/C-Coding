#include <stdio.h>

long long int B(long long int a);

int main(){
    long long int a;
    scanf("%lld", &a);  
    printf("%lld\n",B(a));
    return 0;
}

long long int B(long long int a){
    if(a==0||a==1) return 1;
    else return 2*B(a-1)+3*B(a-2);
}
