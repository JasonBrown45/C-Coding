#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void strrev(char str1[], int index, int size){
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;

    if (index == size / 2){
        return;
    }
    strrev(str1, index + 1, size);
}

int main(){
	int flag,flag1;
	char word[505],word1[505],word2[505],word3[505];
	scanf("%s",word);
	for(int i=1;i<strlen(word);i++){
		flag=0;flag1=0;
		strcpy(word1, word);
		memset(word2, '\0', sizeof(word2));
   		strncpy(word2, word1, i);
   		strrev(word1,1,strlen(word));
   		memset(word3, '\0', sizeof(word3));
   		strncpy(word3, word1, strlen(word)-i);
   		for(int j=1;j<=strlen(word2);j++){
   			if(word2[j]!=word2[strlen(word2)-j-1]){
   				flag=1;
   				break;
			   }
		   } 	
		for(int j=1;j<=strlen(word3);j++){
   			if(word3[j]!=word3[strlen(word3)-j-1]){
   				flag1=1;
   				break;
			   }
		   }
		   if(flag==0&&flag1==0) break; 	
	}
	if(flag==0&&flag1==0){
		printf("%s %s\n",word2,word3);
	}
	else printf("NO\n");
	return 0;
}

