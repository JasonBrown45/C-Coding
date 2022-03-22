#include <stdio.h>
#include <string.h>

int main(){
	int n,counter2=0; 
	char word1[100005],word2[100005],word3[200010];
	scanf("%d",&n);
	scanf("%s",word1);
	getchar();
	scanf("%s",word2);
	for(int i=0;i<n;i++){
		printf("%s\n",word1);
		if(word1[i]!=word2[i]){
			word2[i]==word1[i];
		}
	}
	
	/*for(int i=0;i<n*2;i++){
		int counter1=1;
		if(word3[i]){
		for(int j=i+1;j<n*2;j++){   	
	        if(word3[i]==word3[j]){
                 counter1++;
                 word3[j]='\0';
	     	}
	      }  	
		}
		if(counter1>counter2) counter2=counter1;	 
 	}
    printf("%d",counter2);*/ 
	return 0;
}

