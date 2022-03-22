#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,d,e,f;
	scanf("%d %d %d",&a,&b,&c);
	
	d=pow(a,2);
	e=pow(b,2);
	f=pow(c,2);
	
	if(d+e<f){
	printf("Titik berada di dalam lingkaran");
	}
	else if(d+e==f){
	printf("Titik tepat di lingkaran");
	}
	else{
	printf("Titik berada di luar lingkaran");
	}
	return 0;
}

