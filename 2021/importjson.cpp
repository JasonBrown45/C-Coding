#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	for(int i=140;i<=143;i++){
		if(i>=36&&i<=39) continue;
		else printf("=ImportJSON(\"https://www.simcompanies.com/api/v3/en/encyclopedia/resources/2/%d/\", \"/producedAnHour\",\"noHeaders\")\n",i);
	}
	return 0;
}

