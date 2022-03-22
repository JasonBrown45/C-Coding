#include <stdio.h>
#include <string.h>

struct data {
    char acc[50];
    char name[20];
    int age;
    double balance;
}d;

int main() {
    struct data d[5005];
    int n, m;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++) {
        scanf("%[^,],%[^,],%d,%lf",d[i].acc,d[i].name,&d[i].age,&d[i].balance); 
        getchar(); 
    }
    scanf("%d",&m);
    getchar(); 
    char key[5];
    for(int t=0;t<m;t++) {
        scanf("%s",key);
        getchar(); 
        for(int i=0;i<n;i++) {
            if(strcmp(d[i].acc,key) == 0) {
                printf("%s %d %.2f\n", d[i].name,d[i].age,d[i].balance);
                break;
            }
            if(i==n-1&&(strcmp(key,d[i].acc)!=0)) {
                printf("-1\n");
            }
        }
    }
}
