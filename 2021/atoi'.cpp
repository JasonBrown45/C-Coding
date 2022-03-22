#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*int hashFunction(char id[]){
	int total = 0;
	for (int i=3; i<=4; i++){
		total += id[i];
	}
	return total % max;
}*/

int main(){
	char id[6]="MI001";
	char temp[6];
	for(int i=2;i<=4;i++){
		temp[i-2]=id[i];
	}
	printf("%s\n",temp);
	int x=atoi(temp);
	printf("%d\n",x);
	return 0;
}

