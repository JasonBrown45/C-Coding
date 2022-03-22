#include <stdio.h>
#include <math.h>

int main(){

	int a;
	scanf ("%d",&a);
	for(int i=1;i<=a;i++){
		int x,w,d,k,v,y,sec=0;
		scanf("%d %d %d %d %d %d",&x,&w,&d,&v,&k,&y);
		switch(x){
			case 1:
				x=450;
				break;
			case 2:
				x=450;
				break;
			case 3:
				x=450;
				break;
			case 4:
				x=3200;
				break;
			case 5:
				x=4500;
				break;
		}
		for(int j=1;j<=86400;j++){
			for(int k=1;k<=y;k++){
				j++;
				if(j%2==0) d+v;
				else{
					d-v;
					v-=1;
				}
			}
		if(d<=0){
		j=sec;	
		break;
		}
		}
		int h=0,m=0,s=0;
		h = (sec/3600); 	
		m = (sec-(3600*h))/60;	
		s = (sec-(3600*h)-(m*60));
		if(x<=w) printf("Case #%d: %02d:%02d:%02d\n",i,h,m,s);
		else printf("Case #%d: Line broke up\n",i);
	}
	return 0;
}

