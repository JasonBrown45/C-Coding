#include <stdio.h>

int main(){
    int nc, ctr=0, match;
    long long int money, cereal[nc+5], milk[nc+5];
    scanf("%d %lld", &nc, &money);
    for(int i=0; i<nc; i++){
        scanf("%lld", &cereal[i]);
    }
    for(int j=0; j<nc; j++){
        scanf("%lld", &milk[j]);
    }
    for(int i=0; i<nc; i++){
    	for(int j=0; j<nc; j++){
        if(cereal[i]+milk[j] == money)ctr++;
    	}
    }
    printf("%d", ctr);
    return 0;
}
/*
5
0 1 2 3 4
1 2 3 4 5

5
4 3 2 1 0
1 2 3 4 5

5
0 4 2 1 3
1 2 3 4 5
*/
