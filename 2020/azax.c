#include <stdio.h>

int main() {
	int a,b,c,d=0,e,f=0;
	scanf("%d %d",&a,&b);

	while(a!=0){
		c=a%10;
		d=d*10+c;
		a /= 10;	
	}

	while(b!=0){
		e=b%10;
		f=f*10+e;
		b /= 10;	
	}
	
	if(d>f){
		printf("%d",d);
	}
	else{
		printf("%d",f);
	}
	return 0;
}
	
	
	

 
