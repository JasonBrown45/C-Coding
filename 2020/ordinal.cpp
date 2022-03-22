#include <stdio.h>

int main(){

	int a,b,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d %d",&c,&b);
		int d;
		d=b%100;
		if(d==11 || d==12 || d==13) printf("Case #%d: %dth\n",i,b);
		else if(d%10==1) printf("Case #%d: %dst\n",i,b);
		else if(d%10==2) printf("Case #%d: %dnd\n",i,b);
		else if(d%10==3) printf("Case #%d: %drd\n",i,b);
		else printf("Case #%d: %dth\n",i,b);
	}
	return 0;
}

/*
6
1 1
1 9
2 11
2 33
2 92
3 112
*/
