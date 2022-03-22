#include <stdio.h>

int main(){
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	
	d=(a*b)+(a*c)*3;
	printf("%.3f\n",d);
	return 0;
}
