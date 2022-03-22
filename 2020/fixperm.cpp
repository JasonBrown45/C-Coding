#include<stdio.h>

int counter;

int form(int n)
{    
    if(n==3 | n==4)
    {
        counter++;
    }
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 2;
    }
    else if(n%3==0)
    {
        return form(n-n/3)+1;
    }
    else
    {
        return form(n-1)+n+form(n-2)+1;
        
    }
}


int main(){

    
    int t;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
        int n,total;
        scanf("%d",&n);
        
        total=form(n);
    
        printf("Case #%d: %d %d\n",i,total,counter);
        
        counter=0;
    }
    
    return 0;
}
