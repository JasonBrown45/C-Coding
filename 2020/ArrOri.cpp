#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		long long int counter=0,hasil=0,num,j,x[50];
		scanf("%lld",&num);
		printf("Case #%d: ",i);
	while (num%2==0){
		x[counter]=2;
		counter++; 
        num=num/2;
    }

    for(j=3;j<=sqrt(num);j=j+2){ 
        while (num%j==0){
        	x[counter]=j;
			counter++;			  
            num=num/j;
        }
    }
  
    if (num>2){
    	x[counter]=num;
    	counter++;
	}
	
	long long int t=x[0];
	for(j=0;j<counter+1;j++){
		if (x[j]==t) hasil++;
		else{
			printf("%lld ^ %lld",t,hasil);
			hasil=1;
			t=x[j];
			if(j<counter) printf(" * ");
		}
		
	}
    printf("\n");
} 	
	return 0;
}

