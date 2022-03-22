#include <stdio.h>

int main(){
	
	int a,b,c,d,e,counter=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	for(int i=1;i<=e;i++){
		if(i%d==0) counter++; 
		else if(i%c==0) counter++;
		else if(i%b==0) counter++;
		else if(i%a==0) counter++;
	}
	printf("%d",counter);
	return 0;
}

