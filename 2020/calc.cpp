#include <stdio.h>

int main(){
	int a,b,c,d,e,t;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	t=(a+b+c+d+e)/5;
	if(t<=85 && t<=100){
		printf("%d A\n",t);	
	}
	else if(t<=84 && t<=100){
		printf("%d B\n",t);
	}
	else if(t<=65 && t<=69){
		printf("%d C\n",t);	
	}
	else if(t<=50 && t<=64){
		printf("%d D\n",t);	
	}
	else if(t<=0 && t<=49){
		printf("%d E\n",t);
	}
	else{
		return 0;	
	}
	return 0;
}

