#include <stdio.h>
int count=0;
int A(int n){
	if(n-1==3||n-2==3) count++;
    if(n-1==4||n-2==4) count++;
    if(n==0) return 1;
    else if(n==1) return 2;
    else if(n%3==0){
	return (A(n-(n/3)))+1,count=1;
	}
    	return A(n-1)+n+A(n-2)+1,count;

}

int main(){
    int tc,n;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);
        printf("Case #%d: %d %d\n",i,A(n),count);
    }
    return 0;
}
