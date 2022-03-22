#include <stdio.h>
#include <string.h>

struct plant{
    int num;
    char name[1000];
};
    
int main(){
    struct plant data[100000], temp;
    int n;
    FILE *file;
    file=fopen("testdata.in","r");
    fscanf(file,"%d\n",n);
    for(int i = 0; i < n; i++){
        fscanf(file, "%d#%[^#]\n", data[n].num, data[n].name);
    } 
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(strcmp(data[j].name, data[j+1].name)>0){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d %s\n",data[n].num, data[n].name);
    fclose(file);
    return 0;
}

