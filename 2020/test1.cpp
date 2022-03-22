#include <stdio.h>

int main (){
    int a;
    long int c[102][102];
    scanf("%d",&a);
    for(int x=1;x<=a;x++){
    	long int b,sum[102];
    	scanf("%ld",&b);
    	for(int i=1;i<=b;i++){
    		for(int j=1;j<=b;j++){
    			scanf("%ld", &c[i][j]);
			}
		}
		printf("Case #%ld: ",x);
        for(int i=1;i<=b;i++){
            sum[i]=0;
            for(int j=1; j<=b;j++){
                sum[i]+=c[j][i];
            }
            if(i==b) printf("%ld\n",sum[i]);
            else printf("%ld ",sum[i]);  
        }
    }
	return 0;
}


