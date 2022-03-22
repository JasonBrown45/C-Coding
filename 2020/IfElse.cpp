#include <stdio.h>

int main(){
	long long int a,b,c,d;
	scanf ("%d %d %d %d",&a,&b,&c,&d);
	
	if(a*b<=c+d){
		printf("False\n");
	}
	else{
		printf("True\n");
	}

	return 0;
}

