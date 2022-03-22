#include <stdio.h>
#include <stdbool.h>

bool check_bid_bonds(int arr[], int n){
	int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    if (total % 2 != 0) return false;
    bool table[total / 2 + 1];
    for (int i = 0; i <= total / 2; i++) {
        table[i] = false;
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = total / 2; j >= arr[i];j--) { 
            if (table[j - arr[i]] == 1 || j == arr[i])
                table[j] = true;
        }
    }
 
    return table[total / 2];
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bool flag=check_bid_bonds(arr,n);
	printf("\n");
	if(flag==true) printf("Result: yes\n");
	else printf("Result: no\n");
	return 0;
}
