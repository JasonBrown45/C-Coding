#include <stdio.h>

int main() {
    int n ;
    int arr[n+1] ;
    scanf ("%d" ,&n);
    for (int i = 0 ; i<n ;i++) {
        scanf ("%d", &arr[i]);
    }
    for (int k = 0 ; k<n; k++) {
        	if(k==0) printf("Case %d: %d ",k+1,arr[k]);
        	else printf ("%d ",arr[k]);
        }
    int tc;    
    int a,b;
    scanf ("%d",&tc);
    for (int j=0 ; j<tc ; j++) {
        scanf("%d %d",&a,&b);
        arr[a-1]=b;
        for (int k = 0 ; k<n-1; k++) {
        	if(k==0) printf("Case %d: %d ",k+1,arr[k]);
        	if(k==n-1) printf("%d\n",arr[k]);
            else printf ("%d ",arr[k]);
        }
    } 
    return 0;
}
