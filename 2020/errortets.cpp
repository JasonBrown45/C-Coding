#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c,d=0;
    char buf[1024]; 
	
    do
    {
        if (!fgets(buf, 1024, stdin))
        {
            return 1;
        }
	
        a = atoi(buf);
        b = atoi(buf);
    } while (a == 0 && b == 0); 
		if(a>b){
		while(a!=0){
			c=a%10;
			d=d*10+c;
			a /= 10;	
		}
		printf("%d",d);
	}
	else{
		while(b!=0){
			c=b%10;
			d=d*10+c;
			b /= 10;	
		}
		printf("%d",d);
	}
}

    
