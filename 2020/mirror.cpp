#include <stdio.h>

int main(){

	int a,b,c[1005][1005];
	scanf("%d %d",&a,&b);

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d",c[j][i]);
		}
	}	
	return 0;
}

