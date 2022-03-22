#include<stdio.h>

int main(){
    long long int a,e[6000],i;
    scanf("%lld",&a);
    
    for(i=0;i<a;i++){
        long long int b,c[6000],d,f=0;
        scanf("%lld",&b);
        
        for(i=0;i<b;i++){
            scanf("%lld",&c[i]);
        }
        
        for(int j=0;j<b;j++){
        d=j;
        for(int k=0;k<b;k++){
            d+=c[k];
            if(d<=0){
                break;
			}
            if(k==b-1){
                f=1;
            }    
        }
        if(f==1){
            d=j;
            break;
        }
    }
        e[i]=d;
    }
    
    for(int l=0;l<a;l++){
        printf("Case #%lld: %lld\n",l+1,e[l]);
    }  
    
    return 0;
}

/*
6
5
1 2 -3 4 -5 
5
-1 -1 -1 -2 9
5
-1 -1 -1 -1 -1
4
-1 -2 -3 -4
5
1 2 -5 -5 3
5
5 -2 -3 -1 1
*/
