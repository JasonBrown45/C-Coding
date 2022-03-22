#include <stdio.h>
int main(){
	int a,b,c,d,e=0,f;
	scanf("%d %d %d", &a, &b, &c);
	d=a+(b-1)*c;
	for(int i=0; i<b;i++){
		e+=d;
		d-=c;}
	f=a+(b-1)*c;
	printf("%d %d",f,e);
	return 0;
}
