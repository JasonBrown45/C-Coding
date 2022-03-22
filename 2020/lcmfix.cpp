#include <stdio.h>

long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0)
    {
        return a; 
    }else{
    return gcd(b, a%b); 
    }
}
  

long long int lcm(long long int array[], long long int n) 
{
    long long int total = array[0];
    for (long long int i = 1; i <n; i++)
    {
        total = (((array[i]*total))/(gcd(array[i],total)));
    }
    return total;
}

int main()
{
    long long int tc,lim,total;
    long long int arr[31];
    scanf("%lld",&tc);
    
    for (long long int i = 1; i <= tc; i++)
    {
        scanf ("%lld",&lim);
        for (long long int j = 0;j<lim;j++)
        {
            scanf("%lld", &arr[j]);
            total = lcm(arr, lim);
        }
        printf("Case #%lld: %lld\n",i,total);
    }
    return 0;
}
