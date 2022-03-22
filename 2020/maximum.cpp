#include <stdio.h>

int main(){
	int a,b,c[1000100];
	scanf("%lld",&a);
	
	for(int i=1;i<=a;i++){
		int total=0;
		scanf("%lld",&b);
		for(int j=1;j<b;j++){
			scanf("%lld",&c[j]);
		}
		

		printf("Case #%d: %d",i,total)
	}
	
	return 0;
}

