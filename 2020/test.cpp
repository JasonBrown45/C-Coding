#include <stdio.h>
int main (){
    long long int a; 
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    long long int n=0,t=0,t1=0,t2=0;	
    scanf("%lld",&n);
    int num[n];
    for(int j = 0; j < n; j++){
        scanf("%lld",&num[j]);
    }
    
    t1=num[0];
    t2=num[1];
    
    if(t1<t2){
        t=t1;
        t1=t2;
        t2=t;
    }
 
    for (int j=2;j<n;j++){
        if (num[j]>=t1){
            t2=t1;
            t1=num[j];
        }
        else if(num[j]>t2 && num[j]!=t1) t2=num[j];
    }
    printf("Case #%lld: %lld\n",i,t1+t2);
	}
	return 0;
}
