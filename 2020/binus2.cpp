#include <stdio.h>

int main(){
	int baris,kolom,sum=1;
	int isi[baris+5][kolom+5];
	scanf("%lld %lld",&baris,&kolom);
	for(int i=1;i<=baris;i++){
		for(int j=1;j<=kolom;j++){
			scanf("%d",&isi[i][j]);
		}
	}
	for(int i=1;i<=baris;i++){
		int hasil=0;
		for(int j=1;j<=kolom;j++){
			hasil=hasil+isi[j][i];
		}
		sum=sum*hasil;
	}
	printf("%lld\n",sum);
	return 0;
}

