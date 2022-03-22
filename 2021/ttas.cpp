#include <stdio.h>

int main(){

	char str[100],temp[100];
	scanf("%s",str);
	int n = sizeof(str) / sizeof(str[0]); 
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (str[i] > str[j]) {
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
			}
		}
	}
	
	return 0;
}

