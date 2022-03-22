#include<stdio.h>
#include<string.h>

int main(){
    int tc,last,seclast,lastindex,seclastindex;
    char a[100],b[100000];
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%s %s",&a,&b);
        seclast = strlen(b)-2;
        last = strlen(b)-1;
        printf("Case #%d: ",i);
            if(b[seclast]=='1'){
                    printf("%cth\n",b[i]);
                }
                else if(b[seclast]!='1'){
                    if(b[last]=='1'){
                        printf("%sst\n",b[i]);
                    }else if(b[last]=='2'){
                        printf("%snd\n",b[i]);
                    }else if(b[last]=='3'){
                        printf("%srd\n",b[i]);
                    }else{
                        printf("%sth\n",b[i]);
                    }
                }
            printf("\n");
            }

    return 0;
}
/*
6
1 1
1 9
2 11
2 33
2 92
3 112
*/
