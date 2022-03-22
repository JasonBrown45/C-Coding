#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;  
	float i,j; 
    scanf("%d %d %d",&a,&b,&c);
    
    i=sqrt(a*a+b*b);
    j=sqrt(i*i+c*c);
    printf("%.2f\n",4*3.14159265359*j/2*j/2);
    return 0;   
}
