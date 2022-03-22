#include <stdio.h>

int main(){
	
	int a;
	printf("input an integer that is bigger than 4 please!\n");
	
	 do{
		scanf("%d",&a);
	}while(a<5);
	
	for(int i=1;i<=a;i++){
		for (int j=1;j<=a;j++){
			if(i==1||j==1||i==a||j==a||(i+j)==(a+1)||j==i){
			printf("*");
		}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

