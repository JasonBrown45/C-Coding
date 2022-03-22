#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b,c,d=0;
		scanf("%d",&b);
		printf("Case #%d: ",i+1);
		if(b%11==0&&b%7==0){
		printf("ElevenSeven\n");	
		}
		else if(b%11==0){
		printf("Eleven\n");	
		}
		else if(b%7==0){
		printf("Seven\n");	
		}
		else{
		printf("%d\n",b);	
		}
	}
	return 0;
}

