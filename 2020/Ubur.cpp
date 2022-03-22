#include <stdio.h>

int main(){
	
	int ved,num[105],day;
	scanf("%d",&ved);
	for(int j=1;j<=ved;j++){
		scanf("%d",&num[j]);
		if(j%2!=0) num[j]*= -1;
	}
	
	scanf("%d",&day);
	
	for(int i=1;i<=day;i++){
		int day1,day2,sum=0;
		scanf("%d %d",&day1,&day2);
		for(int j=day1;j<=day2;j++){
			sum=sum+num[j];
		}
		printf("Case #%d: %d\n",i,sum);
	}
	return 0;
}

