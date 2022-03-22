#include <stdio.h>

int main(){
	
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double i,j,k;
	i=b*c;
	j=b*a*3;
	k=i+j;
	
	printf("%.3lf\n",k);
	return 0;
}

