#include<stdio.h>
int main(){
    double A, L, B, H;
    scanf("%lf %lf %lf", &L, &B, &H);
    A = (B*H)+(B*L)*3;
    printf("%.3lf\n", A);
    return 0;
}
