#include <stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
			for (int j=0;j<b;j++) {
        	teens=i%100;
        	order=i%10;
        	if(order > 3 || (teens >= 10 && teens < 20)) order = 3;
	}
	return 0;
}
