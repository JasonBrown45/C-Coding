#include <stdio.h>

int main(){
	int a,e,i,c;
	scanf ("%d %d %d %d",&a,&e,&i,&c);
	
	int b,d,f,g,h,j;
	j=a+e+i;
	b=j-a-c;
	f=j-c-i;
	h=j-b-e;
	d=j-e-f;
	g=j-a-d;
	printf("%d %d %d\n",a,b,c);
	printf("%d %d %d\n",d,e,f);
	printf("%d %d %d\n",g,h,i);
	return 0;
}
