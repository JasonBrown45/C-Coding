#include<stdio.h>

int main(){
    int a;
	long long int num1,num2,num3,floor,ceil;
	long long int k,counter;
    scanf("%d",&a);
    for(long long int i=1;i<=a;i++){
        long long int total=0;
        scanf("%lld %lld %lld %lld %lld",&num1,&num2,&num3,&floor,&ceil);
        for(int j=floor;j<=ceil;j++){
            if(j%num1==0 && j%num2==0 && j%num3==0){
                counter=j;
                for(int k=1;k<=ceil/j;k++){
                    counter=j*k;
                    total+=counter;
                }
                
            }
        }
        printf("Case #%lld: %lld\n",i,total);
    }
    return 0;
}
/*
5
1 2 3 1 20
2 3 5 30 30
2 3 5 30 90
11 11 11 10 40
2 3 4 10 30

10
1 2 3 1 20
2 3 5 30 30
2 3 5 30 90
11 11 11 10 40
2 3 4 10 30
10 20 30 100 1000
10 20 30 1000 10000
13 25 40 900 9000
17 40 58 9000 90000
100 200 300 100000 200000
*/
