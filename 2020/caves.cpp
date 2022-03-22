#include <stdio.h>

int main(){
	long int c[101][5001],b[101],a,d[101],e[101],i,j;
	scanf("%ld",&a);
	
	for(i=0;i<a;i++){
		scanf("%ld",&b[i]);
		for(j=0;j<b[i];j++){
			scanf("%ld",&c[i][j]);
		}
	}
	
	for(i=0;i<a;i++){
		d[i]=0;
		e[i]=1;
		for(j=0;j<b[i];j++){
			if(d[i]+c[i][j]<=0){
			e[i]=e[i]-(d[i]+c[i][j]);
			d[i]=0;
		}
			else{
			d[i]=d[i]+c[i][j];
			e[i]=e[i];
		}
		}
		printf("Case #%ld: %ld\n",1+i,e[i]);
	}
	return 0;
}

