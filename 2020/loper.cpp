#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
		a=a*arr[i];
		}
	for(j=1;j<=a;j++){	
    	for(k=0;k<=n-1;k++){
      		if(j%arr[k]!=0) break;
    		}
    	if(k>n-1) break;
	}
	printf("%d",j);
	return 0;
}
