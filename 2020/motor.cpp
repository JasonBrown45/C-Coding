#include <stdio.h>

int main(){

    int a,b,sum;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    scanf("%d",&b);
	printf("biaya motor: %d\n",2000+(b-1)*1000);
	}
    return 0;
}
