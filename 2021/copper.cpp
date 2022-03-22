#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int a=100;
	for(int i=0;i<a;i++){
		printf("%d ",rand()%1000);
		printf("%d ",rand()%1000-1000);
	}
	return 0;
}

