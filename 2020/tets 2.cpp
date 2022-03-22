#include <stdio.h>

int main(){
	char name1 [11], nim1 [11];
	char name2 [11], nim2 [11];
	char name3 [11], nim3 [11];
	
	scanf("%[^0-9]%[0-9]%[^0-9]%[0-9]%[^0-9]%[0-9]", name1, nim1, name2, nim2, name3, nim3);
	getchar();
	
	printf("%-10s %-10s\n",name1,nim1);
	printf("%-10s %-10s\n",name2,nim2);
	printf("%-10s %-10s\n",name3,nim3);
	return 0;
}
