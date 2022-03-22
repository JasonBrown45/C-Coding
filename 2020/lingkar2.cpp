#include <stdio.h>

int main(){
	int a,b,c,d,e,f;
	scanf("%d %d %d",&a,&b,&c);
	
	d=a*a;
	e=b*b;
	f=c*c;
	
	if(d+e<f){
	printf("Titik berada di dalam lingkaran");
	}
	else if(d+e==f){
	printf("Titik tepat di lingkaran");
	}
	else if(d+e>f){
	printf("Titik berada di luar lingkaran");
	}
	else{
		return 0;
	}
	return 0;
}

