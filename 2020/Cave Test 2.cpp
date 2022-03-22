#include <stdio.h>

int main(){
    int loop;
    scanf("%d",&loop);
    int urut[loop];
    for(int i = 0; i < loop;i++){
        int n;
        scanf("%d",&n);

        int a[n+1];

        for(int j = 0; j<n;j++){
            scanf("%d",&a[j]);
        }

        int nyawa = 1;
        int darah = 1;
        int lol = 1;
        for(int j = 0; j < n;j++){
            if(a[j] < 0){
                if(darah + a[j] >= 1){
                    darah = darah + a[j];
                    lol =0;
                }
                else if(darah + a[j] <= 0){
                    if(a[j] == -1 ){
                        nyawa++;
                        darah = 2;
                        lol = 2;
                    }
                    if(lol == 1){
                        int titipan = (darah - a[j]) -1;
                        darah = titipan;
                        nyawa = titipan;
                        lol = 0;
                    }
                    else if(lol == 0){
                        int titipan = -(darah + a[j]) + 1;
                        darah = darah + titipan;
                        nyawa = nyawa + titipan;
                    }
                    lol = 0;
                    darah = darah + a[j];
                }

            }
            else if(a[j] > 0){
                darah += a[j];
            }
        }
        urut[i] = nyawa;
    }
    for(int i=1;i<=loop;i++){
        printf("Case #%d: %d\n",i,urut[i-1]);
    }
}
