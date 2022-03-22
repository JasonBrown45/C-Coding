#include <stdio.h>

int main(){
	
	int a,b=0,c;
	scanf("%d",&a);
	int d=a;
	while(a!=0){    
     	c=a%10;    
     	b=b*10+c;    
     	a/=10;    
  	}  
	printf("%d%02d\n",d,b);  
	return 0;
}


