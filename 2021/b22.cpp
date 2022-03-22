#include <stdio.h>
#include <string.h>

struct Video{
  char nama[1005];
  char judul[1005];
};
struct Video data[105];

void merge(Video data[], int L, int R) {
    int M=(L+R)/2;
    int i=L,j=M+1,k=0;
    Video temp[R - L + 1];
    while (i <= M && j <= R) {
    		{
            if (strcmp(data[i].judul, data[j].judul) < 0) {
              temp[k] = data[i];
              i++;
            } else {
              temp[k] = data[j];
              j++;
            }
        }
        k++;
    }
    while (i <= M) {
        temp[k] = data[i];
        i++;
        k++;
    }
    while (j <= R) {
        temp[k] = data[j];
        j++;
        k++;
    }
    for (int i = 0; i < k; i++) {
        data[L + i] = temp[i];
    }
    return;
}

void sort(Video data[], int L, int R) {
    if (L == R){
        return;
    } 
	else{
        int M=(L+R)/2;
        sort(data,L,M);
        sort(data,M+1,R);
        merge(data,L,R);
    }
}

int main(){
  FILE *file;
  file=fopen("testdata.in", "r");
  int i=0;
  int ix=0;
  fscanf(file,"%d\n",&i);
  while(fscanf(file, "%[^#]#%[^#]#%lld\n", data[ix].judul, data[ix].nama) != EOF){
    ix++;
  }
  sort(data, 0, ix - 1);
  for(int i=0;i<ix;i++) printf("%s#%s", data[i].judul, data[i].nama);
  return 0;
}
