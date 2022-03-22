#include <stdio.h>

int main(){

	int a,b[7],sum;
	char c[101];
	scanf("%d",&a);
	printf("nama day1 day2 day3 day4 day5 total\n");
	for(int i=1;i<=a;i++){
		scanf("%100s",c);
		for(int j=1;j<=5;j++){
			scanf("%d",&b[j]);
		}
	printf("%s  ",c);
	for(int j=1;j<=5;j++){
		printf("%d  ",b[j]);
		sum+=b[j];
		if(j==5){
			printf("%d",sum);
			sum=0;
		}
	}
	}
	return 0;
}

