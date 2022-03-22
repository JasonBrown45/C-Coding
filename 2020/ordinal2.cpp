#include <stdio.h>

int main(){
	
	int a;
	char x,y;
	scanf("%d",&a);
	getchar();
	scanf("%c %c",&x,&y);
	getchar();
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(i==j||(j==a-i+1))printf("%c",x);
			else printf("%c",y);
		}
		printf("\n");
	}
	return 0;
}

