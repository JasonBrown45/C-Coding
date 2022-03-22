#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    	int b;
        scanf("%d",&b);
        int c[b+5],d=0,cout;
        for(int j=1;j<=b;j++){
            scanf("%d",&c[j]);
        }
        for(int k=1;k<b;k++){
            if(c[k]!=0){
                for(int l=k+1;l<=b;l++){
                    if(c[k]==c[l]){
                        cout++;
                        c[l]=0;
                    }
                }
            }
            if(cout>2) {
                cout=cout*(cout-1)*(cout-2)/6;
                d+=cout;
            }
        cout=1;
        }
        printf("Case #%d: %d\n",i,d);
    }    
    return 0;
}
