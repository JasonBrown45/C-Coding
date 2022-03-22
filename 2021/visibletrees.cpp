#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1][n+1];
    
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            scanf("%d", &arr[x][y]);
        }
    }
    
    int bmax = 0;
    int bpov = 0; 

    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++) {
            if(bmax < arr[x][y]) {
                bpov++;
                bmax = arr[x][y];
            }
        }
        if(y == n-1) {
            printf("%d\n", bpov);
        }else {
            printf("%d ", bpov);
        }
        bpov = 0;
        bmax = 0;
    }

    int lmax = 0;
    int lpov = 0;
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++) {
            if(lmax < arr[x][y]) {
                lpov++;
                lmax = arr[x][y];
            }
        }
        printf("%d\n", lpov);
        lpov = 0;
        lmax = 0;
    }
    return 0;
}
