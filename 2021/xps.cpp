#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    scanf("%d", &a);
    if(a % 2 == 0) {
        b = c = (a / 2);
    }
    else {
        b = ((a - 1) / 2);
        c = (((a - 1) / 2) + 1);
    }
    
    printf("%d = %d + %d\n", a, b, c);

    return 0;
}
