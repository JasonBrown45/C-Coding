#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int a=0,counter=0;
	scanf("%d",&a);
	int arr[1005];
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("%d\n",arr[i]+arr[j]);
			if(arr[i]==arr[j]) break;
			if(arr[i]+arr[j]==0) break;
			counter++;
		}
	}
	printf("%d\n",counter);
	return 0;
}

