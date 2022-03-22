#include <stdio.h>

long long int lcm_function(long long int d,long long int c);
long long int gcd_function(long long int d,long long int c);

int main(){
	long long int a,b,c[105];
	scanf("%lld",&a);
	for(long long int i=1;i<=a;i++){
	long long int d=1;
	scanf("%lld",&b);
	for(long long int j=1;j<=b;j++){
		scanf("%lld",&c[j]);
	}	
	for(long long int j=1;j<=b;j++){
		d=lcm_function(d,c[j]);
	}
	printf("Case #%lld: %lld\n",i,d);
	}
	return 0;
}

long long int lcm_function(long long int d,long long int c){
	long long int gcd=gcd_function(d,c);
	return (d*c)/gcd;
}

long long int gcd_function(long long int d,long long int c){
	long long int t;
	if(d>c){
    	t=d;
    	d=c;
    	c=t;
   	}
  	if(c%d==0) return d;
  	else return gcd_function(c%d,d);
}
