#include <stdio.h>

int Digit(long long int n1){
	long long int sum=0;
	while(n1!=0){
		sum+=n1%10;
		n1/=10;
	}
	return sum;
}

int main(){
	int N;
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++){
		long long int num1,num2;
		long long int n1=1,n2=1,n3=1,total=0;
		scanf("%lld %lld",&num1,&num2);
		
		for(int j=1;j<=num2;j++){
			if(j>=num1 && j<=num2) total+=Digit(n1);
			if(j!=1){
			n3=n1+n2;
        	n1=n2;
        	n2=n3;
        	}
		}
		printf("Case #%d: %lld\n",i,total);
	}
	return 0;
}
/*
6
1 4
3 5
6 7
9 9
3 11
*/
