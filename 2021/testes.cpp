#include <stdio.h>

unsigned long long ctr(unsigned long long  mid){
    return middle*(middle+1)*(2*middle+1)/6;
}

unsigned long long binser(unsigned long long  left, unsigned long long  right, unsigned long long  x){
    if(left<=right){
        unsigned long long middle=(r+l)/2;
        if(ctr(middle)>=x){
            return search(left,middle-1,x);
        }
        else{
            return search(middle+1,right,x);
        }
    }
    return l;
}

int main(){
    unsigned long long  n,x;
    scanf("%llu", &n);
    for(int i=0; i<n; i++){
        scanf("%llu", &x);
        printf("Case #%d: %llu\n", i+1, search(1, 1000000, x));
    }
}
