#include <stdio.h>
#include<math.h>

//Check if number is prime
int isPrime(int num){
for(int i=2;i<=sqrt(num);i++){
if(num%i == 0){
return 0;
}
}
return 1;
}

int main()
{

int primes[6000];
int index = 0;

//Store first 10 prime numbers
for(int num=2;index<4000;num++){
if (isPrime(num) == 1){
primes[index] = num;
index++;

}
}

int t;
scanf("%d",&t);
  
for(int i=0; i<t;i++){
int n;
int pos = 0;
scanf("%d",&n);
printf("Case #%d:\n",i+1);
for(int row = 1;row<=n;row++){
for(int col=1;col <= row;col++){
printf("%d",(primes[pos]) % 10);
pos++;
}
printf("\n");
}
}

return 0;
}
