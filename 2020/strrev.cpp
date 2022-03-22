#include <stdio.h>

int strlen(char n[2048]){
	int len = 0;
	while(n[len] !='\0'){
	len++;
	}
	return len;
}

int main(){
	char str[2048],rev[2048];
	scanf("%[^\n]s",&str);
	
	int len=strlen(str),i;
	int counter=len-1;
	for(i=0;i<len;i++){
		rev[i]=str[counter];
		counter--;
	}
	
	rev[i]='\0';
	printf("%s\n",rev);
	return 0;
}

