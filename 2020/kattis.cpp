#include <stdio.h>

int main(){
	int a[10];
	for (int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<10;j++){
		int k,l;
		if (a[j]%42==0){
			k+=1;
			printf("%d",k);
		}
		else{
			l++;
		}
	}
	return 0;
}

