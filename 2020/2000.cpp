# include <stdio.h> 
# include <math.h> 
  

  

int main() { 
    int n = 9,counter=0,counter1=0,i; 
    while (n%2 == 0) 
    { 
    	if(n%2==0){
    	counter++;
        n = n/2;
		}
		else break;
    } 
    printf("%d ^ %d ", 2,counter); 
    for (i = 3; i <= sqrt(n); i = i+2) 
    { 

        while (n%i == 0) 
        { 
            counter1++;
            n = n/i; 
        } 
    } 
	printf("%d ^ %d ", i,counter1); 
    if (n > 2) 
        printf ("%d ^ %d", n,1); 
    return 0; 
} 
