#include <stdio.h>

int main(){
	
	long long int n,day;
	scanf("%lld %lld",&n,&day);
	long long int num[100001],x=0,y=0;
	
	for(long long int j=1;j<=n;j++){
		scanf("%lld",&x);
		if(j%2==1) y-=x;
		else if(j%2==0) y+=x;
		num[j]=y;
	}
	
	long long int L,R,sum;
	for(long long int j=1;j<=day;j++){
		scanf("%lld %lld",&L,&R);
		sum=num[R]-num[L-1];
		printf("%lld\n",sum);
	}
	return 0;
}

