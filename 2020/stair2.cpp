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
            printf("%lld",b[i-1]);if(b[i])printf("ca");  
        }
		i++;       
    }
	return 0;
}
