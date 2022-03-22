#include <stdio.h>
int main(){
    int tc,count,a,in=1;
    FILE *file;
    file=fopen("testdata.in","r");
    fscanf(file,"%d\n",&tc);
    while(tc>0){
        int x,y=3,z=2;
        fscanf(file,"%d\n",&x);
        int P=x*(x+1)/2;
        printf("Case #%d:\n",in);
        printf("2\n");
        for(count=1;count<P;y++){
            for(a=2;a<y;a++){
                if(y%a==0){
                    break;
                }
            }
            if(a==y){
                printf("%d",y%10);
                count++;   
            }
            if(count==z*(z+1)/2){
                printf("\n");
                z++;
            }
        }
        tc--;
        in++;
    }
    return 0;
}
