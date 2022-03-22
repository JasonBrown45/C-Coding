#include <stdio.h>

int main(){   
    long int a,b;
    scanf("%ld",&a);   
    for(long int i=1;i<=a;i++){
        scanf("%ld",&b);
        long int counter=0;
        for(long int j=1;j<=b;j++){
        	if(j%177147==0) counter+=77777777778;//10
        	else if(j%59049==0)	counter+=7777777778;//9
        	else if(j%19683==0) counter+=777777778;//8
        	else if(j%6561==0) counter+=77777778;//7
        	else if(j%2187==0) counter+=7777778;//6
        	else if(j%729==0) counter+=777778;//5
            else if(j%243==0) counter+=77778;//4
            else if(j%81==0) counter+=7778;//3
            else if(j%27==0) counter+=778;//2
            else if(j%9==0) counter+=78;//1
            else if(j%3==0) counter+=8;//0
            else counter+=1;
        }
        printf("Case #%lld: %lld\n",i,counter);
    }
}

