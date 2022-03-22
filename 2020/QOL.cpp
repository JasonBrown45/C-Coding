#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
	int n,d;
	scanf("%d",&n);
	while(n != 0){
        int d = n % 10;
        n = n / 10;
        printf("%d\n", d);
    }
	}		
	return 0;
}

