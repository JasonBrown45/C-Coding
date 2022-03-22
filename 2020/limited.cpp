#include<stdio.h>

//driver function
int main(){
//number of test cases
int t;
//input
scanf("%d",&t);
//for all test cases
for(int T=1;T<=t;T++){
//input x and l
int x,l;
scanf("%d %d",&x,&l);
//array to mark if integer i is present in set or not
int mark[1001];
//initialize all elements from 0 to 1000 to 0
for(int i=0;i<=1000;i++){
mark[i]=0;
}
//start with x
int num=x;
//mark it present in set
mark[num]=1;
//loop till 1000
while(num<=1000){
//if current num is marked then
if(mark[num]==1){
//check if num multiplied by 3, 4, and 5 are less than l , if so then mark them
//for 3
int f=num*3;
if(f<=l){
mark[f]=1;
}
//for 4
int s=num*4;
if(s<=l){
mark[s]=1;
}
//for 5
int th=num*5;
if(th<=l){
mark[th]=1;
}
}
//increment num
num++;
}
//to store answer
int ans;
//loop from maximum possible
for(int i=1000;i>=x;i--){
//if marked integer found then save and break from loop
if(mark[i]==1){
ans=i;
break;
}
}
//print maximum possible number in set
printf("Case #%d: %d\n",T,ans);
}
//return
return 0;
}
