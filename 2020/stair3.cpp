#include <stdio.h>

int main(){
    
	int a,b[2500];
	scanf("%d",&a);

	for(int i=0;i<a;i++){
    	scanf("%d",&b[i]);
	}

	for(int i=0;i<a;i++){
    	if(b[i]>=b[i+1]){
    	printf("%d",b[i]);if(b[i+1])printf(" ");
		}
	}
	printf("\n");
	return 0;
}
