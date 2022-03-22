#include <stdio.h>

int main(){
	int a,num[1005],num1[1005],count;
	scanf("%d",&a);
	for(int i=0;i<a;++i){
		scanf("%d",&num[i]);
		scanf("%d",&num1[i]);
	}
	for (int i = 0; i < a; ++i){
            for (int j=i+1; j < a; ++j){
                if(num[i]>num[j]){
                    count=num[i];
                    num[i]=num[j];
                    num[j]=count;
                }
            }
    	}
    for (int i = 0; i < a; ++i){
            printf("%d\n", num[i]);
    }
	return 0;
}

