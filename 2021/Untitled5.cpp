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
FILE *file;
file=fopen("testdata.in","r");
int primes[105];
int index = 0;

//Store first 100 prime numbers
for(int num=2;index<6000;num++){
if (isPrime(num) == 1){
primes[index] = num;
index++;

}
}

int t;
fscanf(file,"%d\n",&t);
  
for(int i=0; i<t;i++){
int n;
int pos = 0;
fscanf(file,"%d\n",&n);
printf("Case #%d:\n",i+1);
for(int row = 1;row<=n;row++){
for(int col=1;col <= row;col++){
printf("%lld",(primes[pos]) % 10);
pos++;
}
printf("\n");
}
}
fclose(file);
return 0;
}
