
#include<stdio.h>
int Ackermann(int a, int b);

int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("result: %d\n",Ackermann(a,b));
        return 0;
}

int Ackermann(int a,int b){
        if(a==0) return b+1;
        else if(b==0) return Ackermann(a-1,1);
        else return Ackermann(a-1,Ackermann(a,b-1));
}

