#include <stdio.h>
#include <string.h>

int main(){
    char str[100],temp;
    scanf("%s",str);
	int n=strlen(str);	
	for(int i=0;i<n;i+=2){
        for(int j=0;j<n-i-2;j+=2){
            if(str[j]>str[j+2]){
					temp = str[j+2];
					str[j+2] = str[j];
					str[j] = temp;
			}
		}
	}
    printf("%s",str);
    return 0;
}
