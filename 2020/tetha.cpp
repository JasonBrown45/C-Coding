#include <stdio.h>

int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("Product : %d\n",a*b*c*d*e);
	printf("Sum : %d\n",a+b+c+d+e);
	printf("Average : %.2f\n",((float)a+b+c+d+e)/5);
	return 0;
}

