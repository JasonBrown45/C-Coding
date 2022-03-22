#include <stdio.h>

int main(){
	long long int a,b[1000000],c[11][5120];
	long long int d[105],e[105],i,j;
	scanf("%lld",&a);
	for(i=0;i<a;i++){
		scanf("%lld",&b[i]);
		for(j=0;j<b[i];j++){
			scanf("%lld",&c[i][j]);
		}
	}
	
	for(i=0;i<a;i++){
		d[i]=0;
		e[i]=1;
		for(j=0;j<b[i];j++){
			if(e[i]+c[i][j]<=0){
				e[i]=e[i]-(e[i]+c[i][j]);
				d[i]=0;		
			}
			else{
				d[i]=d[i]+c[i][j];
				e[i]=e[i];
			}
		}
		printf("Case %lld: %lld",i+1,e[i]);
	}
	return 0;
}

