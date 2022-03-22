#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,d;
	scanf("%d",&a);
	b= pow(4,a);
	c= pow(2,a-1)*4+1;
	printf("%d",b+c);
	return 0;
}
