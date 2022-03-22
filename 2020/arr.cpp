#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		long long int counter=0,num,j;
		scanf("%lld",&num);
		printf("Case #%d: ",i+1);
	while(num%2==0){
        counter++;
        num/=2;
		}
        printf("%d ^ %d",2,counter);
        for ( j=3 ; j <= sqrt(num); j = j+2){
            counter = 0;
            while(num % j == 0){
                counter++;
                num /= j;
            }
        }
    printf(" * %d ^ %d",j,counter);
	        
    if (num>2) printf(" * %lld ^ %lld",num,1);
    printf("\n");
}	
	return 0;
}

