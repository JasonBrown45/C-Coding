#include<stdio.h>

int T(int b);

int main(){
    int a,b;
    scanf("%d", &a);   
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        printf("Case #%d: %d\n",i,T(b));
    }
    return 0;
}

int T(int b){
    if(b==1) return 1;
    else if(b%2!=0 && b!=1) return T(b-1)+T(b+1);
    else if(b%2==0) return T(b/2);
}

