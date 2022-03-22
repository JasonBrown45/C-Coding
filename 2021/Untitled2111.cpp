#include <stdio.h>
#include <string.h>

struct plant{
    long long num;
    char name[1005];
};

char *search(struct plant *data ,int a,int c,long int d){
    while(a<=c){
        int b=a+(c-a)/2;
        if(data[b].num==d){return data[b].name;}
        if(data[b].num<d){a=b+1;}
        else c=b-1;
   }
   return "N/A";
}

int main(){
    struct plant data[1010], temp;
    long long int n,m,nim,j;
    FILE *file = fopen("testdata.in","r");
    fscanf(file, "%lld", &n);
    for(int i = 0; i < n; i++){
        (fscanf(file,"%lld %s\n", &data[i].num, data[i].name));
    } 
    fscanf(file,"%lld\n",&m);
    for(int i = 0; i < m; i++){
        fscanf(file, "%lld\n", &nim);
        printf("Case #%d: %s\n",i+1,search(data,0,n,nim));     
    	} 
    fclose(file);
    return 0;
}
