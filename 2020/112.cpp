#include <stdio.h>

int main(){
	int a,c[5120];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		int b;
		scanf("%d",&b);
		for(int j=0;j<b;j++){
			scanf("%d",&c[j]);
		}
		for(int j=0;j<b;j++){
			int d,*counter=1;
			d+=c[j];
				while(d<0){
					*counter++;
					d++;	
				}
}
}
	for(int j=1;j<=a;j++){
		printf("Case #%d: %d\n",j,*counter);
	}
	return 0;
}

/*
3
5
-1 -1 -1 -1 -1
4
-1 -2 -3 -4
5
1 2 -5 -5 3
*/

