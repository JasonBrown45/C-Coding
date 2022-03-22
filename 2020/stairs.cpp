#include<stdio.h>

int main(){
    long long int a,b,i,j;
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        scanf("%lld",&b);
        long long int num[b+5],x=0;
        for(j=0;j<b;j++){
            scanf("%lld", &num[j]);
            if((j!=0 && (num[j]-num[j-1])>x)) x=num[j]-num[j-1];
        }
        
        long long int pos=num[0],sum=0,d=0; 
        printf("Case #%lld: %lld",i,x);
        while(d!=b-1){
            pos+=x; 
            sum++;
            while(1){
                if(num[d+1]>pos && d<b-1 && num[d]<=pos){
                    pos=num[d];
                    break;
                }
                else if(d==b-1 && num[d]<=pos){
                    pos=num[d];
                    break;
                }
                else if(num[d]<=pos) d++;
            }
        }
        printf(" %lld\n",sum);
    }
    return 0;
}

