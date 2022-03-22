#include <stdio.h>

int main(){
	
  long long int a,b=0;
  scanf("%lld",&a);
  
  
  do{
  	if(a==42){
  		break;
	}
	else{
	b += a;	
    printf("%lld\n",b);
    scanf("%lld", &a);
	}
    }while(true);
  return 0;
}


