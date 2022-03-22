#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,d,c1,d1;
	scanf ("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d %d %d",&b,&c,&d);
		int j=0;
		while(c+d<=b){
			j++;
			c1=c;
			d1=d;
			if(j%3==0) c*=0.67;
			else c*=2;

			if(j%4==0) d*=0.8;
			else d*=3;
		}
	if(c==d)     printf("Case #%d: %d none %d",i,j-1,abs(c1-d1));
	else if(c>d) printf("Case #%d: %d red %d",i,j-1,abs(c1-d1));
	else if(c<d) printf("Case #%d: %d black %d",i,j-1,abs(c1-d1));
	}
	return 0;
}

