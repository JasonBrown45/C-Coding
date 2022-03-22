#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g=0,h=0;
	scanf ("%d %d %d",&a,&b,&c);
	scanf ("%d %d %d",&d,&e,&f);
	
	if (a>d){
		g++;
		}
	else if (a=d){
	
	}
	else{
		h++;
	}

	if (b>e){
		g++;
		}
	else if (b=e){
		
	}
	else{
		h++;
	}
	
	if (c>f){
		g++;
		}
	else if (c=f){
		
	}
	else{
		h++;
	}	
	
	printf ("%d %d",g,h);
	return 0;
}

