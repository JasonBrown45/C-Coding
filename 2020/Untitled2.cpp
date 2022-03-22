#include <time.h>
#include <stdlib.h>
int main(){
int r;   
int a;
scanf ("%d",&a);
	for(int i = 0; i<a; i++){
		for(r = 0 ; r<=8; r++ ){
			for(int j = 0; j<a;j++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
   
