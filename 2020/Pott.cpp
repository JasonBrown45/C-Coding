#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b,c,d;
		scanf("%d %d %d",&b,&c,&d);
		if(c-b<d){
			printf("advertise\n");
		}
		else if(c-b==d){
			printf("does not matter\n");
		}
		else if(c-b>d){
			printf("do not advertise\n");
		}
		else{
			printf("error\n");
		}
	}
	return 0;
}

