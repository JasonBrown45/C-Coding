#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		int x,y;
		char s[200];
		scanf("%d %d %s",&x,&y,&s);
		if(x==0&&y==0){
			printf("Case #%d: el %s\n",i,s);
		}
		if(x==1&&y==0){
			printf("Case #%d: la %s\n",i,s);
		}
		if(x==0&&y==1){
			printf("Case #%d: los %s\n",i,s);
		}
		if(x==1&&y==1){
			printf("Case #%d: las %s\n",i,s);
		}
	}
	return 0;
}
