#include <stdio.h>

int main(){

	int a;
	scanf("%d",&a);
	int b[a+3];
	for(int j=1;j<=a;j++){
		scanf("%d",&b[j]);
	}
	for(int i=0;i<9;i++){
		for(int j=1;j<=a;j++){
			if(i==9-b[j]) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}

