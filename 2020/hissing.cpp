#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		int apbm;
		float b,p;
		scanf("%f %f",&b,&p);
		apbm=(60*b)/p;
		printf("%d",apbm);
	}
	return 0;
}

