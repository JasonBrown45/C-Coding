#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int counter=9;
	int counter1=0;
	char id[6];
	id[0]='M';
	id[1]='I';
	id[2]='0';
	if(counter<10){
		id[3]='0';
		id[4]=counter+'0';
	}
	else if(counter>=10){
			if(counter%10!=0){
				while(counter>=10){
				counter=counter%10;
				counter1++;
				}
			}
			else{
				while(counter>=10){
					counter=counter-10;
					counter1++;
				}
			}
		id[3]=counter1+'0';
		id[4]=counter+'0';	
	}
	printf("%s",id);
	return 0;
}

