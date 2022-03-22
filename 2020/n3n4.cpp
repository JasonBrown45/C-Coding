#include <stdio.h>

int count;

int L(int n);

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
    	int b,total;
        scanf("%d",&b);
        total=L(b);
        printf("Case #%d: %d %d\n",i,total,count);
    	count = 0;
    }
    return 0;
}

int L(int b){    
    if(b==3||b==4) count++;
    if(b==0) return 1;
    if (b==1) return 2;
    else if (b%3==0) return L(b-(b/3))+1;
    else return L(b-1)+b+L(b-2)+1;
}
