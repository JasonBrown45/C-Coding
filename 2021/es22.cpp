#include <stdio.h>

int Find_Missing_ID(int array[], int n){
    int left = 0, right= n - 1;
    int diff=0;
    for(int i=0;i<4;i++){
    	if(array[i+1]-array[i]>diff) diff=array[i+1]-array[i];
	}
    while (left <= right){
        int mid = right-(right- left) / 2;
        if (mid + 1 < n && array[mid + 1] - array[mid] != diff){
        	if(array[mid + 1] - diff == array[mid+1]) return -1;
            else return array[mid + 1] - diff;
        }
        else if (mid - 1 >= 0 && array[mid] - array[mid - 1] != diff) {
        	if(array[mid - 1] + diff == array[mid-1]) return -1;
            else return array[mid - 1] + diff;
        }
        if (array[mid] - array[0] != (mid - 0) * diff) {
            right= mid - 1;
        }
        else {
            left = mid + 1;
        }

    }
}
 
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+10];
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    	getchar();
	}
	printf("\n");
    printf("Result: %d",Find_Missing_ID(arr,n));
    return 0;
}

