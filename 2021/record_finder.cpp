#include <stdio.h>
#include <string.h>
struct Data{
    char accnumber[55];
    char name[55];
    int age;
    double balance;
} arr[55555];
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;++i){
        scanf("%[^,],%[^,],%d,%lf",&arr[i].accnumber,&arr[i].name,&arr[i].age,&arr[i].balance);
        getchar();
    }
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;++i){
        char x[55];
        scanf("%s",&x);
        int le=0;
        int ri=n-1;
        int mid;
        bool printed=0;
        while(le<=ri){
            mid=(le+ri)/2;
            int verd;
            bool done=0;
            if(arr[mid].accnumber[0]==x[0]){
                if(arr[mid].accnumber[1]==x[1]){
                    if(arr[mid].accnumber[2]==x[2]){
                        if(arr[mid].accnumber[3]==x[3]){
                            verd=0;
                            done=1;
                        }
                        if(!done){
                            if(arr[mid].accnumber[3]<x[3]){
                                verd=-1;
                            } else {
                                verd=1;
                            }
                            done=1;
                        }
                    }
                    if(!done){
                        if(arr[mid].accnumber[2]<x[2]){
                            verd=-1;
                        } else {
                            verd=1;
                        }
                        done=1;
                    }
                }
                if(!done){
                    if(arr[mid].accnumber[1]<x[1]){
                        verd=-1;
                    } else {
                        verd=1;
                    }
                    done=1;
                }
            }
            if(!done){
                if(arr[mid].accnumber[0]<x[0]){
                    verd=-1;
                } else {
                    verd=1;
                }
                done=1;
                }
            if(verd==0){
                printf("%s %d %.2lf\n",arr[mid].name,arr[mid].age,arr[mid].balance);
                printed=1;
                break;
            } else if(verd==-1){
                le=mid+1;
            } else {
                ri=mid-1;
            }
        }
        if(!printed){
            printf("-1\n");
        }
    }
}
