#include <stdio.h>

void print(int a,int b);

int main(){	
	int a;
	scanf("%d",&a);
	print(a,a);

	return 0;
}

void print(int a, int b){
	if(a==1){
		printf("*");
		printf("\n");
	}		
	else{
		printf(" ");
		print(a-1,b);
		for(int i=1;i<=b-a;i++){
			printf(" ");
		}
		for(int i=1;i<(2*a);i++){
			printf("*");
		}
		printf("\n");
		for(int i=1;i<=b-a+1;i++){
			printf(" ");
		}
		print(a-1,b);
	}
}
