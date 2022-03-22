#include <stdio.h>

int main(){
	int a;
	scanf("%[^\n]d",&a); 
	for(int i=0;i<a;i++){
		char b;	
		scanf("%[^\n]c",&b);
		getchar();
		if(b=='a'||b=='i'||b=='u'||b=='e'||b=='o'||b=='A'||b=='I'||b=='U'||b=='E'||b=='O'){
			printf("Vokal\n");
		}
		else{
			printf("Konsonan\n");
		}
	}
	return 0;
}

