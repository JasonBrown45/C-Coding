#include <stdio.h>

int main() {
    int tc;
    int arr[101];
    int max= 0;
    scanf("%d", &tc);
    for(int i=0; i<tc; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) max = arr[i];
    }
    printf("%d", max);
}
