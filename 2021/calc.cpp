#include <stdio.h>

int main(){

	float a,b,carryover,result;
	char c,op;
	while(true){
		scanf(" %c%c%f",&c,&op,&b);
		if(a=='x') break;
		
		if(c=='n'){
			a=carryover;
		}
		else{
			a=c-'0';
		}
		
		if(op=='+'){
			result=a+b;
			carryover=result;
			printf("%fd\n",result);
		}
		else if(op=='-'){
			result=a-b;
			carryover=result;
			printf("%f\n",result);
		}
		else if(op=='*'){
			result=a*b;
			carryover=result;
			printf("%f\n",result);
		}
		else if(op=='/'){
			result=a/b;
			carryover=result;
			printf("%f\n",result);
		}
	}
	return 0;
}

