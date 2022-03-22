#include <stdio.h>

int main(){
	int a;
	do{
	scanf("%d",&a);
	}while(a>6);
	
	for(int i=0;i<a;i++){
		for(int k=0;k==a;k++);{
			for(int j=0;j<a;j++){
				if(i==0||j==0||i==j||(i+j)==(a-1)){
				printf("*");
				}
				else{
				printf(" ");
				}
			}
			printf("*");
			}
		printf("\n");
	}
	return 0;
}

/*#include <stdio.h>

int main(){
	int a,b=a,c=a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==j||i==0||j==0||(i+j)==(a-1)){
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
*/
