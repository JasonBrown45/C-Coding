#include <stdio.h> 
#include <string.h> 
  
void swap(char* x, char* y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void permute(char* a, int l, int r) 
{ 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else { 
        for (i = l; i <= r; i++) { 
            swap((a + i), (a + l)); 
            permute(a, l+1, r); 
            swap((a + l), (a + i)); 
        } 
    } 
} 
  
int main(){
	int a,b;
	scanf("%d",&a);
	getchar();
	for(int j=1;j<=a;j++){
	scanf("%d",&b);
	if(b==1) {
		char str[2]="1";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}
    if(b==2) {
		char str[3]="12";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}
	if(b==3) {
		char str[4]="123";
		int n = strlen(str);	
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);
	}
	if(b==4) {
		char str[5]="1234";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}
	if(b==5) {
		char str[6]="12345";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}
	if(b==6) {
		char str[7]="123456";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}
	if(b==7) {
		char str[8]="1234567";
		int n = strlen(str);
		printf("Case #%d:\n",j);
    	permute(str, 0, n - 1);	
	}  
	}
    return 0; 
} 
/*
7
1
2
3
4

7
7
*/
