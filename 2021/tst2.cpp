#include <stdio.h>
#include <string.h>

struct name{
	char name[110];
	char domain[110];
};
int main(){
	int a,counter=0;
	char key[110];
	scanf("%d",&a);
	struct name data[1100];
	for(int i=0;i<a;i++) scanf("%s@%s",data[i].name,data[i].domain);
	scanf("%s",&key);
	for(int i=0;i<a;i++){
		if(strcmp(key,data)==1) counter++;
		else continue;
	}
	printf("%d\n",counter);
	return 0;
}
/*
4
jojo_jotaro@yagoo.com
lili_lee@beenoose.ac.id
bibi_the.bee@boogle.com
big_grass_field@yagoo.com
yagoo.com
*/


