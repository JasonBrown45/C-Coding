#include <stdio.h> 
 
int lcm(int b, int c[11]); 
 
int main(){ 
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    	int b,c[11];
    	scanf("%d",&b);
    	for(int j=1;j<=b;j++){
    		scanf("%d",&c[i]);
		}
		printf("Case #%d: %d\n",i,lcm(b,c[11]));     
	}
    return 0;
} 

int lcm(int a, int b){
    int d=1;
    while(d%a || d%b){
    	d++;
	}
    return d;
}

