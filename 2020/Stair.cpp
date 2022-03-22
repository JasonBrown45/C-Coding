#include <stdio.h>

int main(){
	long long int a,c,b[2500];
	scanf("%lld",&a);
	
	for(int i=0;i<a;i++){
    	scanf("%lld", &b[i]);
	}
	
	int i=1;
	
	for(int j=0;j<a;j++){
        if(b[i]<b[i-1]||b[i]==b[i-1]){
            printf("%lld",b[i-1]);if(b[i])printf(" ");  
        }
		i++;       
    }
	return 0;
}

/* 
8
1 2 3 1 2 3 4 5 
*/
