#include <stdio.h>

int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    d=(a*b)+(a*c)*3;
    printf("%.3lf\n",d);
    return 0;
}
