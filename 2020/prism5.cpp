#include <stdio.h>

int main(){
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	
	d=(a*c)+(a*b)*3;
	printf("%.3f\n",d);
	return 0;
}
