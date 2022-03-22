#include <stdio.h>

void swap (int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

int main(void)
{
printf("Please input 10 numbers: ");
int arr[10], n = 10;
for (int i = 0; i < 10; i++)
{
scanf("%d", &arr[i]);
}

for (int i = 0; i < n; i++)
{
for (int j = 0; j < n - 1; j++)
{
if (arr[j] > arr[j + 1])
{
swap(&arr[j], &arr[j + 1]);
}
}
}

for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
puts("");
return 0;
}


