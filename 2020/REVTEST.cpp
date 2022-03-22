#include <stdio.h>

int main(){
	int num,b=0,c=0,num1,num2,func;
	scanf("-%n%d%n-",&num1,&num,&num2);
	func=num2-num1;
	while(func-->0){
		b=num%10;
		c=c*10+b;
		num /= 10;
	}
	printf("-%0*d-\n",num2-num1,c);
	return 0;
}
