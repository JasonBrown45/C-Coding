#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b,c;
		int arr[100000];
		scanf("%d",&b);
		scanf("%d",&c);
		for(int i=1;i<=c;i++){
			scanf("%d",&arr[i]);
		}
		int sum,flag1,flag2;
		for(int j=1;j<=c;j++){
			for(int k=1;k<=c;k++){
				if(j!=k) sum=arr[j]+arr[k];
				else if(j==k) continue;
				if(sum==b){
					flag1=j;
					flag2=k;
					break;
			}
		}
	}
	if(flag1>flag2||flag1==flag2) printf("%d %d\n",flag2,flag1);
	else if(flag1<flag2) printf("%d %d\n",flag1,flag2);
	}
	return 0;
}
/*
2
4
5
1 4 5 3 2
4
4
2 2 4 3
*/

