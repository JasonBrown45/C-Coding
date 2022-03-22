#include <stdio.h>

int main(){
        int a,b,c,num[20005],num1[20005];
        scanf("%d",&a);
        for(int i=1;i<=a;i++){
            scanf("%d",&num[i]);
        }
		for(int i=1;i<=a;i++){
            scanf("%d",&num1[i]);
        }    
        for(int i=1;i<=a;i++){
            for(int j=i+1;j<=a;j++){
                if(num[i]>num[j]){
                	b=num[i];
                    num[i]=num[j];
                    num[j]=b;
                    c=num1[i];
                    num1[i]=num1[j];
                    num1[j]=c;
                }
            }
    	}
        for(int i=1;i<=a;i++){
        	if (i==a) printf("%d",num1[i]);
            else printf("%d ",num1[i]);
    }
    return 0;
}
