#include <stdio.h>

int main(){

	long long int a;
	scanf("%lld",&a);
	for(int i=1;i<=a;i++){
		long long int b;
		scanf("%lld",&b);
		printf("Case #%d:\n",i);
		if(b%2!=0){
			for(int j=1;j<=b;j++){
				for(int k=j;k<b;k++){
					printf(" ");
				}
				for(int l=1;l<=j;l++){
					if(l%2==0) printf("#");
					else printf("*");
				}
				printf("\n");
			}
		}
		else{
			for(int j=1;j<=b;j++){
				for(int k=j;k<b;k++){
					printf(" ");
				}
				for(int l=1;l<=j;l++){
					if(l%2==0) printf("*");
					else printf("#");
				}
				printf("\n");
			}
		}
	}
	return 0;
}

