#include <stdio.h> 
 
int nocarry(int b, int c){    
    int hasil=0,multi=1,counter; 
    while (b || c){ 
        counter=(b%10) + (c%10); 
        counter%=10; 
        hasil+=(counter*multi); 
        b/=10; 
        c/=10; 
        multi*=10; 
    } 
    return hasil; 
} 
  
int main(){ 
	int a,b,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
		printf("Case #%d: %d\n",i,nocarry(b,c));	
	}    
    return 0; 
} 
