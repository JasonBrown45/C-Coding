#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int prime_check(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
	return true;
}

int main(){
    int nu,m,py=0;
    int store[10001];
    for(int num=2;py<10000;num++){
        if(prime_check(num)==true){
            store[py]=num;
            py++;
        }
    }
    scanf("%d",&nu);
    for(int i=1;i<=nu;i++){
        int pos=0;
        scanf("%d",&m);
        printf("Case #%d:\n",i);
        for(int i=1;i<=m;i++){
            for(int j=1;j<=i;j++&&pos++){
                printf("%d",store[pos]%10);
            }
            printf("\n");
        }
    }
	return 0;
}
