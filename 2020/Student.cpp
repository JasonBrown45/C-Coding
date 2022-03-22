#include <stdio.h>

int main(){
	char nama[101];
	int nis,age;
	scanf("%100[^\n]s",&nama);
	scanf("%d %d",&nis,&age);
	printf("Name: %s\n",nama);
	printf("NIS: %08d\n",nis);
	printf("Age: %02d\n",age);
	return 0;
}
