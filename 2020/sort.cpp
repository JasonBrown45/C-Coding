#include <stdio.h>

int main(){
	char x,y,z;
	scanf("%c %c %c",&x,&y,&z);
	if(x>y&&x>z){
		if(y>z) printf("%d %d %d\n",1,2,3);
		else printf("%d %d %d\n",1,3,2);
	}
	if(x<y&&y>z){
		if(z<x) printf("%d %d %d\n",2,1,3);
		else printf("%d %d %d\n",2,3,1);
	}
	if(x<z&&y<z){
		if(x>y) printf("%d %d %d\n",3,1,2);
		else printf("%d %d %d\n",3,2,1);
	}
	return 0;
}


