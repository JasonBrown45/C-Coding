#include <stdio.h>

int main(){
	int loop,i,num[2048]={0};
	scanf("%d",&loop);
	
	for(i=0;i<loop;i++){
		scanf("%d",&num[i]);
	}
	for(i=1;i<=loop;i++){
		if(num[i]==num[i-1]||num[i]<num[i-1]){
			printf("%d ",num[i-1]);
		}
	}
	return 0;
}


