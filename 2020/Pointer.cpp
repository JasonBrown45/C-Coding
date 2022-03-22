#include <stdio.h>

int main(){
	int num[10],hasil;
	printf("masukkan 10 bilangan: \n");
	for(int i=0;i<10;i++){
		printf("Bilangan %d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	for(int i=0;i<10;i++){
		hasil+=num[i];
	}
	
	printf("Hasil dari pejumlahan array: %d",hasil);
	return 0;
}

