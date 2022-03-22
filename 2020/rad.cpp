#include <stdio.h>
int luas(int radius){
    int luas1=0;
    luas1 = 22/7*radius*radius;
    return luas1;
}
int main(){
    int radius ,hasil;
    scanf("%d", &radius);
    hasil=luas(radius);
    printf("%d", hasil);
return 0;
}
