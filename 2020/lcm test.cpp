#include <stdio.h>

int lcm(int a, int b)
{
    int m = 1;

    while(m%a || m%b) m++;

    return m;
}

int main()
{
  int arr[] = {15, 35, 55, 555, 65, 945, 25, 875, 45};
  int result, size, i;

  size = sizeof(arr) / sizeof(int);
  result = arr[0];

  for (i = 1; i < size; i++)
  {
    result = lcm(result, arr[i]);
  }

  printf("The LCM of the array is %d.\n", result);
}
