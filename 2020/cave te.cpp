#include<stdio.h>
int main()
{
   int tc;
   int a;
   int nyawa=0;
   int min=1;
   int b;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       scanf("%d",&a);
       if(i>1)
       {
           min=1;
           nyawa=a;
       }
    for(int j=1;j<=a;j++)
    {
        scanf("%d",&b);
        nyawa=nyawa+b;
        if(nyawa<0)
        {
        min=min-nyawa;
        nyawa=0;
        }
    }
    printf("Case #%d: %lld\n ",i,min);
   }
   return 0;
}
/*
2
5
1 2 -3 4 -5 
5
-1 -1 -1 -2 9

6
5
1 2 -3 4 -5 
5
-1 -1 -1 -2 9
5
-1 -1 -1 -1 -1
4
-1 -2 -3 -4
5
1 2 -5 -5 3
5
5 -2 -3 -1 1
*/
