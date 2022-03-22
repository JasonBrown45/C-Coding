#include <stdio.h>
void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int x=mid-left+1;
    int y=right-mid;
    int L[x],R[y];
    
    for (i=0;i<x;i++) L[i]=arr[left+i];
    for (j=0;j<y;j++) R[j]=arr[mid+1+j];
    i=0,j=0,k=left;
    
    while (i<x&&j<y){
        if (L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<x) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<y) {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int left,int right){
    if (left<right) {
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is \n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
     mergeSort(arr,0,n-1);
    printf("\nSorted array is \n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}

