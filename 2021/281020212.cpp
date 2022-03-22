#include <stdio.h>

int main() {
    int n ;
    int arr[n+1] ;
    scanf("%d", &n);
    for(int i = 0 ; i<n ;i++) {
        scanf("%d", &arr[i]);
    }
    int tc;    
    int a, b;
    scanf("%d", &tc);
    for(int j=0 ; j<tc ; j++) {
        scanf("%d %d", &a, &b);
        arr[a-1]=b;
        printf("Case #%d: ", j+1);
        for(int k=0 ; k<n; k++) {
            printf("%d ",arr[k]);
        }
    } 
    return 0;
}
