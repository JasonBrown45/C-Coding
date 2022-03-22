#include<stdio.h>

int main(){
	
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long c[a+2],d=0,e=0;
	
	for(int i=1;i<=a;i++){
		scanf("%lld",&d);
		if(i%2==1) e=e-d;
		else if(i%2==0) e=e+d;
		c[i]=e;
	}
	long long int kiri,kanan,f;
	for(int i=1;i<=b;i++){
		scanf("%lld %lld",&kiri,&kanan);
		f=c[kanan]-c[kiri-1];
		printf("%lld\n",f);
	}
	return 0;
}
