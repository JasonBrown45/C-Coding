#include <stdio.h>

int vowellen(char a[1000]){
	int counter=0;
	while(a[counter]!='\0'){
		if(a=='a'||i=='i'||i=='u'||i=='e'||i=='o'||i=='A'||i=='I'||i=='U'||i=='E'||i=='O') counter++;
	}
	return counter;
}

int main(){

	char a[10];
	scanf("%[^/n]s",a);
	printf("%d",vowellen(a));
	return 0;
}

