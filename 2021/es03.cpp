#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long int check_bids(long long int arr[],long long int size){
	for (long long int i = 0; i < size; i++) { 
       long long int sum = 0;
       for (long long int j = 0; j < i; j++) sum += arr[j];
       for (long long int j = i; j < size; j++) sum -= arr[j];
       if (sum == 0) return 1;  
    }   
	 return 0;    
}

int main(){
	long long int n;
	scanf("%lld",&n);
	long long int arr[n+5];
	for(long long int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	int flag=check_bids(arr,n);
	if(flag==1) printf("yes\n");
	else printf("no\n");
	return 0;
}

