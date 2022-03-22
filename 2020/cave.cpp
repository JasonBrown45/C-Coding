#include <stdio.h>

int main(){
	
	int a,b,c,d=0,e=0,f=0,g=0;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		scanf("%d",&b);
		for(int j=0;j<b;j++){
			scanf("%d",&c);
			if(c<=0){
				d+=c;
			}
			else if(c>0){
				e+=c;
			}
			else{
				break;
			}
		}
		f=d*-1;
		if(f>e){
			printf("Case #%d: %d\n",++g,f-e+1);	
		}
		else{
			f+=1;
			printf("Case #%d: %d\n",++g,f);
		}
		d-=d;
		e-=e;
	}
	
	return 0;
}


/*
2
5
1 2 -3 4 -5
5
-1 -1 -1 -2 9

2
5
1 -2 -7 4 5
5
-1 1 1 -2 -9
*/


