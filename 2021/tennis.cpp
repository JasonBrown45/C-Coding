#include<stdio.h>

int main(){
    int k,s,n;
    scanf("%d %d %d",&k,&s,&n);
    int hm=n-s;
    int comp=hm/2;
        if((((comp)==k) && comp>=k+s) || ((hm/2)>k)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
