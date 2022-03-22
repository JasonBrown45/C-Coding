#include <stdio.h>

int main(){
	
	long int a,b=0;
	scanf("%ld",&a);
	
	while (a != 42)
  {
    b += a;
    printf("%lld\n", b);
    scanf("%lld", &b);
  }
  return 0;
}
