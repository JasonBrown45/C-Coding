#include <stdio.h>

int main(){
	int a,b[101][2049],c[101];

	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		scanf("%d",&c[i]);
	for(int j=0;j<c[i];j++){	
		scanf("%d",&b[i][j]);
	}
	}
	
	for(int i=0;i<a;i++){
		int x=0,y=0;
		for(int j=0;j<c[i];j++){
			if(b[i][j]%2==0&&b[i][j]!=1) y++;
			else x++;
		}
		printf("Odd group : %d integer(s).\n",y);
		printf("Even group : %d integer(s).\n",x);
	}
	return 0;
}


