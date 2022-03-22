#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define long long long long

int n,q;
struct Data{
    int id;
    char name[55];
    int feet,inch;
} arr[55555];

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
void mergeSort(int left,int right){
    if (left<right) {
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}



int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d,%[^,],%d %d",&arr[i].id,&arr[i].name,&arr[i].feet,&arr[i].inch);
        getchar();
    }
    mergeSort(0,n-1);
    scanf("%d",&q);
    for(int i=0;i<q;++i){
        int h;
        scanf("%d",&h);
        printf("Q%d:\n",i+1);
        int start=0;
        while(start<n&&h*100<arr[start].feet*12*254+arr[start].inch*254){
            start++;
        }
        if(start==n){
            printf("-1\n");
            continue;
        }
        for(int j=start;j<n;++j){
            printf("%d %s %.2lf\n",arr[j].id,arr[j].name,(double)(arr[j].feet*12+arr[j].inch)*2.54);
        }
    }
}
