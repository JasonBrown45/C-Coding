#include <stdio.h>

int main(){
	
	int jumlah;
	scanf("%d",&jumlah);
	char nama[102];
	int data[102];
	
	for(int i=1;i<=jumlah;i++){
		int sum=0;
		scanf("%100s",&nama);
		for(int j=1;j<=5;j++){
			scanf("%d",&data[j]);
		}
		for(int j=1;j<=5;j++){
			sum+=data[j];
		}
	printf("%s  ",nama);
	for(int j=1;j<=6;j++){
		if(i==6) printf("%d",sum);
		else printf("%d  ",data[j]);		
		}
	}
	return 0;
}

