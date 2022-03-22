#include <stdio.h>
#include <string.h>

int main(){
	char str[102];
	scanf("%s",str);
	strlwr(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'){
			for(int j=i;j<len;j++){
				str[j]=str[j+1];
			}
			len--;
			i--;
		}
		
	}	
	return 0;
}

