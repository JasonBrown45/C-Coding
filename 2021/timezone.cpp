#include <stdio.h>

int main(){
	int a=19;
	int b=7;
	for(int i=12;i>=1;i--){
		if(i>=8)printf("UTC -%d: October 7th, %02d:30\n",i,a);
		else printf("UTC -%d: October 8th, %02d:30\n",i,a);
		a++;
		if(a==24) a=0;
	}	
	for(int i=0;i<13;i++){
		printf("UTC +%d: October 8th, %02d:30\n",i,b);
		b++;
		if(b==24) b=0;
	}
	return 0;
}

