#include <stdio.h>

int main (){
	int a,b,c[2049],even[2049],odd[2049];
	do{
	scanf("%d",&a);
	}while(a>2048);
	for (int i=0;i<a;i++){
		odd[i]=0,even[i]=0;
		scanf("%d",&b);
		for (int j=0;j<b;j++){
			scanf("%d",&c[j]);
			if(c[j]%2==0&&c[j]!=1) even[i]+=1;
			else odd[i]+=1;
		}
		printf("Odd group : %d integer(s).\n",odd[i]);
		printf("Even group : %d integer(s).\n",even[i]);
		printf("\n");
		}
	return 0;
}
