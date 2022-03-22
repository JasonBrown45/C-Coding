#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int k=1;k<=a;k++){
		for(int l=0;l<a;l++){
			if(k%b==0){
			printf("#");
			}
			else{
			printf(".");	
			}
		}
		printf("\n");
	}
	printf("\n");
	
	for(int m=0;m<a;m++){
		for(int n=1;n<=a;n++){
			if(n%b==0){
			printf("#");
			}
			else{
			printf(".");	
			}
		}
		printf("\n");
	}
	return 0;
}

