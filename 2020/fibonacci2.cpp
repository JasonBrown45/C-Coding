#include<stdio.h>    
int main(){
	
	int n1=1,n2=1,n3=1,i,number;     
	scanf("%d",&number);    
   
	for(i=1;i<=number+2;i++){       
		printf("%d ",n3);
		if(i!=1){
		n3=n1+n2;     
		n1=n2;    
  		n2=n3; 
		}
 	}  
  return 0;  
 } 
