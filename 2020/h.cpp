#include <stdio.h>

int sumDigit(long long int num1);

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		long long int b,c,num=1,num1=1,sum=1,sum1=0;
		scanf("%lld %lld",&b,&c);
		for(int j=1;j<=c;j++){
			if(j>=b && j<=c) {
				sum1+=sumDigit(num1);
			}
			if(j!=1){
			sum=num+num1;
        	num=num1;
        	num1=sum;
        	}
			}
		printf("Case #%d: %lld\n",i,sum1);
	}
	return 0;
}

int sumDigit(long long int num1){
	long long int digit=0;
	while(num1!=0){
		digit+=num1%10;
		num1/=10;
	}
	return digit;
}
