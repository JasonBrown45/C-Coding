#include <stdio.h>

int main(){
	int a,i,b[2050];
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	
	i=0;
	
	for(int j=0;j<=a;j++){
	if(b[i]==b[i-1]||b[i]<b[i-1]){
		printf("%d ",b[i-1]);
	}
	i++;
	}
	return 0;
}

