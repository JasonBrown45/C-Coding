#include <stdio.h>

int main(){
	char nama[101];
	int nis,age;
	scanf("%100[^\n]s",&nama);
	scanf("%d",&nis);
	printf("%s\n",nama);
	printf("%d\n",nis);
	return 0;
}


