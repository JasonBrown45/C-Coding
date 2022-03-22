#include <stdio.h>

int main(){
    int t,count,a,in=1;
    scanf("%d",&t);
    int n=t;
    for(int i=0;i<=t;i++){
        int b,y=3,x=2;
        scanf("%d",&b);
        int num=b*(b+1)/2;
        printf("Case #%d: \n",in);
        printf("2\n");
        for(count=1;count<num;b++){
            for(a=2;a<y;a++){
                if(y%a==0){break;}
            }
            if(a==y){
                printf("%d",y%10);
                count++; 
            }
            if(count==x*(x+1)/2){
                printf("\n");
                x++;
            }
        }
        in++;
    }
    return 0;
}
