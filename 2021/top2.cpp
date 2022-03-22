#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int counter=9;
	char id[6];
	snprintf(id,sizeof(id),"MI%03d",counter);
	printf("%s\n",id);
	return 0;
}
