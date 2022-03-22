#include <stdio.h>

int main(){
	
	long int a,b,c[1002];
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%ld",&b);
		for(int j=1;j<=b;j++){
			scanf("%d",&c[j]);
		}
		printf("Case #%d: ",i);

		for(int j=b;j>=1;j=j-2){
			printf(" %ld %ld",c[j-1],c[j]);
		}
		printf("\n");
	}
	return 0;
}

