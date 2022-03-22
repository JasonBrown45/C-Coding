#include<stdio.h>
int main(){
    int a,e[5010],i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        long long int num[5010],b,d,s=0;
        scanf("%lld",&b);
        for(int m=0;m<b;m++){
        scanf("%lld",&num[m]);
        }
        for(int j=0;;j++){
        d=j;
        for(int k=0;k<b;k++){
            d+=num[k];
            if(d<=0){
			break;
			}
            if(k==b-1){
            s=1;
                }    
            }
        if(s==1){
            d=j;
            break;
        }
    }
        e[i]=d;
	}

    for(int l=0;l<a;l++){
        printf("Case #%d: %lld\n",l+1,e[l]);
    }   
    return 0;
}

