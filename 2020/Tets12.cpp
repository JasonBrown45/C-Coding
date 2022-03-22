#include <stdio.h>

int main(){
	int a,b,c,i,j,k;
	scanf("%d %d %d",&a,&b,&c);
	
	i=30-a;
	j=20-(b*4);
	k=50-(c*10);
	
	printf("%d\n",i+j+k);
	return 0;
}

