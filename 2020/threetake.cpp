#include <stdio.h>
 
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int b,c[20005],counter1[20005],counter=1;
		scanf("%d",&b);
		for(int j=1;j<=b;j++){
			scanf("%d",&c[j]);
		}
	for(int j=1;j<=b;j++){
		for(int k=j+1;k<=b;k++){
			if(c[j]==c[k]){
				counter++;
				counter1[j]=0;
			}
			if(counter1[j]!=0) counter1[j]=counter;
			}
		}
	for(int j=1;j<=b;j++){
		if(counter1[j]!=0) printf("%d shows every %d times\n",c[j],counter1[j]);
		}
	}
 	return 0;
}
