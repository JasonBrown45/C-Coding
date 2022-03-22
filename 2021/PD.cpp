#include<stdio.h>

void f(int *a,int l,int r){
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            for(int k=i;k<=j;k++){
                a[k]++;
            }
        }
    }
}
int sum(int a[],int l,int r){
    int total=0;
    for(int i=l;i<=r;i++){
        total+=a[i];
    }
    return total%1000000007;
}

int main(){
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
    int a[n+1]={0};
    int type,l,r;
    for(int i=0;i<q;i++){
        scanf("%d %d %d",&type,&l,&r);
        if(type==1) f(a,l,r);
        else{
            printf("%d\n",sum(a,l,r));
        }
    }
    return 0;
}
