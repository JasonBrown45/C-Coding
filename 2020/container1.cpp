#include <stdio.h>
#include <math.h>

int main(){
	long long int a;
	int b,c,d,e;
	scanf("%lld %d %d %d %d",&a,&b,&c,&d,&e);
	
	int i,j,k;
	i=c%b;
	j=d%b;
	k=e%b;
	
	long long int f,g,l;
	float h;
	f = a*b*b*b;
	g = (c-i)*(d-j)*(e-k);
	h = (float)f/g;
	printf("%.0f\n",ceil(h));
	return 0;
}

