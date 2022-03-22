#include <stdio.h>

int main(){
	
	int a,b,num[5120]={0},d,e,f;
	scanf("%d",&a);getchar();
	
	for(int i=1;i<=a;i++){
		scanf("%d",&b);getchar();
		d=0;
		e=0;
		f=0;
		for(int j=1;j<=b;j++){
			scanf("%d",&num[j]);getchar();
			f+=num[j];
			if(f<=0){
				d=d-f+1;
				e=e+d;
				f=1;
				d=0;
			}
		}
		printf("Case #%d: %d",i+1,e);
	}
	return 0;
}
