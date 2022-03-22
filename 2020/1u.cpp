#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b,speed=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++){
			if(j%3==0) speed+=10000;
			if(j%9==0) speed+=100;
			if(j%18==0) 
			if(j%27==0)
		}
		printf("Case #%d: %d",i+1,speed);
	}
	return 0;
}
/*
27
9
18
27
36
45
54
63
72
81
90
99
108
117
126
135
144
153
162
171
180
189
198
207
216
225
234
243
*/
